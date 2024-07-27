### java.lang.IndexOutOfBoundsException: -1 is out of bounds (min 0, max 2)

occurred in the presentation compiler.

presentation compiler configuration:
Scala version: 2.13.10
Classpath:
<WORKSPACE>/.bloop/out/ysyxsoc/bloop-bsp-clients-classes/classes-Metals-mMEa9hbESC2xEMps52E_Jw== [exists ], <HOME>/.cache/bloop/semanticdb/com.sourcegraph.semanticdb-javac.0.9.9/semanticdb-javac-0.9.9.jar [exists ], <WORKSPACE>/.bloop/out/rocketchip.cde/bloop-bsp-clients-classes/classes-Metals-mMEa9hbESC2xEMps52E_Jw== [exists ], <WORKSPACE>/.bloop/out/rocketchip.hardfloat/bloop-bsp-clients-classes/classes-Metals-mMEa9hbESC2xEMps52E_Jw== [exists ], <WORKSPACE>/.bloop/out/rocketchip.macros/bloop-bsp-clients-classes/classes-Metals-mMEa9hbESC2xEMps52E_Jw== [exists ], <WORKSPACE>/rocket-chip/src/main/resources [exists ], <WORKSPACE>/.bloop/out/rocketchip/bloop-bsp-clients-classes/classes-Metals-mMEa9hbESC2xEMps52E_Jw== [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/chipsalliance/chisel_2.13/7.0.0-M1/chisel_2.13-7.0.0-M1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-library/2.13.10/scala-library-2.13.10.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/mainargs_2.13/0.5.4/mainargs_2.13-0.5.4.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-jackson_2.13/4.0.6/json4s-jackson_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/scala-reflect/2.13.10/scala-reflect-2.13.10.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/github/scopt/scopt_2.13/4.1.0/scopt_2.13-4.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/net/jcazevedo/moultingyaml_2.13/0.4.2/moultingyaml_2.13-0.4.2.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-native_2.13/4.0.6/json4s-native_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/apache/commons/commons-text/1.10.0/commons-text-1.10.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/io/github/alexarchambault/data-class_2.13/0.2.6/data-class_2.13-0.2.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/os-lib_2.13/0.9.1/os-lib_2.13-0.9.1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/modules/scala-parallel-collections_2.13/1.0.4/scala-parallel-collections_2.13-1.0.4.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/upickle_2.13/3.1.0/upickle_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/chipsalliance/firtool-resolver_2.13/2.0.0/firtool-resolver_2.13-2.0.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/modules/scala-collection-compat_2.13/2.11.0/scala-collection-compat_2.13-2.11.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-core_2.13/4.0.6/json4s-core_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-jackson-core_2.13/4.0.6/json4s-jackson-core_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/github/nscala-time/nscala-time_2.13/2.22.0/nscala-time_2.13-2.22.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/yaml/snakeyaml/1.26/snakeyaml-1.26.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-native-core_2.13/4.0.6/json4s-native-core_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/apache/commons/commons-lang3/3.12.0/commons-lang3-3.12.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/geny_2.13/1.0.0/geny_2.13-1.0.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/ujson_2.13/3.1.0/ujson_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/upack_2.13/3.1.0/upack_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/upickle-implicits_2.13/3.1.0/upickle-implicits_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/scala-lang/modules/scala-xml_2.13/2.2.0/scala-xml_2.13-2.2.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-ast_2.13/4.0.6/json4s-ast_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/json4s/json4s-scalap_2.13/4.0.6/json4s-scalap_2.13-4.0.6.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/thoughtworks/paranamer/paranamer/2.8/paranamer-2.8.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/fasterxml/jackson/core/jackson-databind/2.12.7/jackson-databind-2.12.7.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/joda-time/joda-time/2.10.1/joda-time-2.10.1.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/org/joda/joda-convert/2.2.0/joda-convert-2.2.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/lihaoyi/upickle-core_2.13/3.1.0/upickle-core_2.13-3.1.0.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/fasterxml/jackson/core/jackson-annotations/2.12.7/jackson-annotations-2.12.7.jar [exists ], <HOME>/.cache/coursier/v1/https/repo1.maven.org/maven2/com/fasterxml/jackson/core/jackson-core/2.12.7/jackson-core-2.12.7.jar [exists ]
Options:
-language:reflectiveCalls -Ymacro-annotations -Ytasty-reader -Yrangepos -Xplugin-require:semanticdb


action parameters:
<NONE>


#### Error stacktrace:

```
scala.collection.mutable.ArrayBuffer.apply(ArrayBuffer.scala:106)
	scala.reflect.internal.Types$Type.findMemberInternal$1(Types.scala:1030)
	scala.reflect.internal.Types$Type.findMember(Types.scala:1035)
	scala.reflect.internal.Types$Type.memberBasedOnName(Types.scala:661)
	scala.reflect.internal.Types$Type.nonPrivateMember(Types.scala:632)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch.$anonfun$checkCompatibility$1(Implicits.scala:756)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch.$anonfun$checkCompatibility$1$adapted(Implicits.scala:756)
	scala.collection.IterableOnceOps.exists(IterableOnce.scala:603)
	scala.collection.IterableOnceOps.exists$(IterableOnce.scala:600)
	scala.reflect.internal.Scopes$ScopeIterator.exists(Scopes.scala:67)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch.loop$3(Implicits.scala:756)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch.checkCompatibility(Implicits.scala:771)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch.isPlausiblyCompatible(Implicits.scala:468)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch$ImplicitComputation.survives(Implicits.scala:1046)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch$ImplicitComputation.eligibleNew(Implicits.scala:1125)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch$ImplicitComputation.<init>(Implicits.scala:1179)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch.searchImplicit(Implicits.scala:1307)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch.bestImplicit(Implicits.scala:1701)
	scala.tools.nsc.typechecker.Implicits.inferImplicit1(Implicits.scala:112)
	scala.tools.nsc.typechecker.Implicits.inferImplicit(Implicits.scala:91)
	scala.tools.nsc.typechecker.Implicits.inferImplicit$(Implicits.scala:88)
	scala.meta.internal.pc.MetalsGlobal$MetalsInteractiveAnalyzer.inferImplicit(MetalsGlobal.scala:68)
	scala.tools.nsc.typechecker.Implicits.inferImplicitView(Implicits.scala:50)
	scala.tools.nsc.typechecker.Implicits.inferImplicitView$(Implicits.scala:49)
	scala.meta.internal.pc.MetalsGlobal$MetalsInteractiveAnalyzer.inferImplicitView(MetalsGlobal.scala:68)
	scala.tools.nsc.typechecker.Typers$Typer.inferView(Typers.scala:330)
	scala.tools.nsc.typechecker.Typers$Typer.adaptToMember(Typers.scala:1338)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$adaptToMemberWithArgs$6(Typers.scala:1384)
	scala.tools.nsc.typechecker.Typers$Typer.silent(Typers.scala:712)
	scala.tools.nsc.typechecker.Typers$Typer.adaptToMemberWithArgs(Typers.scala:1384)
	scala.tools.nsc.typechecker.Typers$Typer.typedSelect$1(Typers.scala:5271)
	scala.tools.nsc.typechecker.Typers$Typer.typedSelectOrSuperCall$1(Typers.scala:5417)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5992)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6047)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3421)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.typedArgWithFormal$1(PatternTypers.scala:136)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.$anonfun$typedArgsForFormals$4(PatternTypers.scala:150)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.typedArgsForFormals(PatternTypers.scala:150)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.typedArgsForFormals$(PatternTypers.scala:131)
	scala.tools.nsc.typechecker.Typers$Typer.typedArgsForFormals(Typers.scala:203)
	scala.tools.nsc.typechecker.Typers$Typer.handleMonomorphicCall$1(Typers.scala:3753)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3804)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typed1$28(Typers.scala:5011)
	scala.tools.nsc.typechecker.Typers$Typer.silent(Typers.scala:698)
	scala.tools.nsc.typechecker.Typers$Typer.tryTypedApply$1(Typers.scala:5011)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5099)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5110)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5991)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6047)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3421)
	scala.tools.nsc.typechecker.Typers$Typer.handlePolymorphicCall$1(Typers.scala:3822)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3841)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5101)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5110)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5991)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6047)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3421)
	scala.tools.nsc.typechecker.Typers$Typer.handlePolymorphicCall$1(Typers.scala:3822)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3841)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5101)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5110)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5991)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6047)
	scala.tools.nsc.typechecker.Typers$Typer.computeType(Typers.scala:6136)
	scala.tools.nsc.typechecker.Namers$Namer.assignTypeToTree(Namers.scala:1127)
	scala.tools.nsc.typechecker.Namers$Namer.valDefSig(Namers.scala:1743)
	scala.tools.nsc.typechecker.Namers$Namer.memberSig(Namers.scala:1928)
	scala.tools.nsc.typechecker.Namers$Namer.typeSig(Namers.scala:1878)
	scala.tools.nsc.typechecker.Namers$Namer$ValTypeCompleter.completeImpl(Namers.scala:944)
	scala.tools.nsc.typechecker.Namers$Namer$AccessorTypeCompleter.completeImpl(Namers.scala:968)
	scala.tools.nsc.typechecker.Namers$LockingTypeCompleter.complete(Namers.scala:2075)
	scala.tools.nsc.typechecker.Namers$LockingTypeCompleter.complete$(Namers.scala:2073)
	scala.tools.nsc.typechecker.Namers$TypeCompleterBase.complete(Namers.scala:2068)
	scala.reflect.internal.Symbols$Symbol.completeInfo(Symbols.scala:1563)
	scala.reflect.internal.Symbols$Symbol.info(Symbols.scala:1535)
	scala.meta.internal.pc.CompletionItemResolver.fullDocstring(CompletionItemResolver.scala:66)
	scala.meta.internal.pc.CompletionItemResolver.$anonfun$handleSymbol$2(CompletionItemResolver.scala:39)
	scala.meta.internal.pc.ItemResolver.enrichDocs(ItemResolver.scala:75)
	scala.meta.internal.pc.ItemResolver.enrichDocs$(ItemResolver.scala:14)
	scala.meta.internal.pc.CompletionItemResolver.enrichDocs(CompletionItemResolver.scala:8)
	scala.meta.internal.pc.CompletionItemResolver.handleSymbol(CompletionItemResolver.scala:40)
	scala.meta.internal.pc.CompletionItemResolver.resolve(CompletionItemResolver.scala:24)
	scala.meta.internal.pc.ScalaPresentationCompiler.$anonfun$completionItemResolve$1(ScalaPresentationCompiler.scala:300)
```
#### Short summary: 

java.lang.IndexOutOfBoundsException: -1 is out of bounds (min 0, max 2)