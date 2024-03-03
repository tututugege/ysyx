/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,
  
  /* TODO: Add more token types */
  TK_DEC, TK_HEX, TK_NEG

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},          // spaces
  {"\\+", '+'},               // plus
  {"\\-", '-'},               // sub
  {"\\*", '*'},               // mul
  {"/", '/'},                 // div
  {"[0-9]+", TK_DEC},           // decimal
  {"0[xX][0-9a-fA-F]+", TK_HEX},// hex
  {"\\(", '('},                // parenthese 
  {"\\)", ')'},               // parenthese
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;

  regmatch_t pmatch;
  nr_token = 0;
  int last_type = TK_NOTYPE;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case TK_NOTYPE:
            break;
          case '+':
          case '*':
          case '/':
          case '(' :
          case ')':
            tokens[nr_token++].type = rules[i].token_type;
            last_type = rules[i].token_type;
            break;
          case '-':
            if (last_type != TK_DEC && last_type != TK_HEX && last_type != ')')
              tokens[nr_token++].type = TK_NEG;
            else
              tokens[nr_token++].type = '-';
            break;
          default: 
            tokens[nr_token].type = rules[i].token_type;
            strncpy(tokens[nr_token++].str, substr_start, substr_len);
            last_type = rules[i].token_type;
        }
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

int eval(int p, int q, bool* success);

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  int res = eval(0, nr_token - 1, success);

  return res;
}

/* returning 1 means the outermost parenthese
 * returning 0 means no outermost parenthese
 * returning -1 means error
 */ 
int check_parenthese(int p, int q) {
  int left_num = 0;

  if (tokens[p].type == '(') {
    left_num++;
    p++;
  } else {
    return 0;
  }

  if (tokens[q].type != ')') {
    return 0;
  }

  while (p < q) {
    if (tokens[p].type == '(')
      left_num++;
    else if (tokens[p].type == ')')
      left_num--;

    if (left_num == 0) {
      return 0;
    } else if (left_num < 0) {
      return -1;
    }
    p++;
  }

  if (left_num == 1)
    return 1;
  else
    return -1;
}

int get_main_op(int p, int q) {
  int last_mul_div = -1;
  int last_add_sub = -1;
  int last_neg = -1;
  int left = 0;

  while (p <= q) {
    switch (tokens[p].type) {
      case '(':
        left++;
        for (p++; p <= q; p++) {
          if (tokens[p].type == '(')
            left++;
          else if (tokens[p].type == ')')
            left--;
          
          if (left == 0)
            break;
        }
        // assert( p != q );
        break;
      case '+':
      case '-':
        last_add_sub = p;
      case '/':
      case '*':
        last_mul_div = p;
      case TK_NEG:
        if (last_neg == -1)
          last_neg = p;
        break;
      default:
        assert(tokens[p].type != ')');
        break;
    }
    p++;
  }
  if (last_add_sub != -1)
    return last_add_sub;
  else if (last_mul_div != -1)
    return last_mul_div;
  else if (last_neg != -1)
    return last_neg;
  
  return -1;

}

int eval(int p, int q, bool* success) {

  if (p > q) {
    *success = false;
    return 0;
  } else if (check_parenthese(p, q) == true) {
    return eval(p + 1, q - 1, success);
  } else if (p == q) {
      assert(tokens[p].type == TK_HEX || tokens[p].type == TK_DEC);
      if (tokens[p].type == TK_HEX)
        return strtol(tokens[p].str, NULL, 16);
      else
        return strtol(tokens[p].str, NULL, 10);
  } else {
    int op = get_main_op(p, q);
    if (op == -1) {
      *success = false;
      return 0;
    }

    int val1 = 0;
    int val2;
    if (tokens[op].type != TK_NEG) {
      val1 = eval(p, op - 1, success);
    }
    val2 = eval(op + 1, q, success);

    if (*success == false)
      return 0;

    switch (tokens[op].type) {
      case '+':
        return val1 + val2;
      case '-':
        return val1 - val2;
      case '*':
        return val1 * val2;
      case '/':
        return val1 / val2;
      case TK_NEG:
        return -val2;
      
      default:
        return 0;
    }
  }

  return 0;
}
