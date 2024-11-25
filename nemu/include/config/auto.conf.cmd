deps_config := \
	src/device/Kconfig \
	src/memory/Kconfig \
	/home/tututu/ysyx/ysyx/nemu/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
