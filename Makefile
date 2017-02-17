# MCU type
MCU = MK20DX256
MCU_LD = teensy32/mk20dx256.ld

# The name of your project (used to name the compiled .hex file)
TARGET = main

# Paths to Teensyduino tools
TOOLSPATH = $(TEENSY_TOOLS_PATH)
COMPILERPATH = $(TOOLSPATH)/arm/bin

# compiler options for C only
CFLAGS = -Wall -g -Os -mcpu=cortex-m4 -mthumb -MMD $(OPTIONS) -I.

# linker options
LDFLAGS = -Os -Wl,--gc-sections,--defsym=__rtc_localtime=0 --specs=nano.specs -mcpu=cortex-m4 -mthumb -T$(MCU_LD)

# additional libraries to link
LIBS = -lm

# names for the compiler programs
CC = $(COMPILERPATH)/arm-none-eabi-gcc
OBJCOPY = $(COMPILERPATH)/arm-none-eabi-objcopy
SIZE = $(COMPILERPATH)/arm-none-eabi-size

# automatically create lists of the sources and objects
TEENSY_FILES := teensy32/mk20dx256.c teensy32/rtc.c
C_FILES := $(wildcard *.c) $(TEENSY_FILES)
OBJS := $(C_FILES:%.c=build/%.o)

# the actual makefile rules (all .o files built by GNU make's default implicit rules)

all: directories build/$(TARGET).hex

build/$(TARGET).elf: $(OBJS) $(MCU_LD)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LIBS)

build/%.hex: build/%.elf
	$(SIZE) $<
	$(OBJCOPY) -O ihex -R .eeprom $< $@
ifneq (,$(wildcard $(TOOLSPATH)))
	$(TOOLSPATH)/teensy_post_compile -file=$(basename $@) -path=$(shell pwd) -tools=$(TOOLSPATH)
	-$(TOOLSPATH)/teensy_reboot
endif

build/%.o: %.c
ifndef TEENSY_TOOLS_PATH
	$(error TEENSY_TOOLS_PATH is not set)
endif
	$(CC) $(CFLAGS) -o $@ -c $< 

directories:
	mkdir -p build
	mkdir -p build/teensy32

# compiler generated dependency info
-include $(OBJS:.o=.d)

clean:
	rm -rf build/*

flash: build/$(TARGET).hex
ifneq (,$(wildcard $(TOOLSPATH)))
	$(TOOLSPATH)/teensy_post_compile -file=$(TARGET) -path=$(shell pwd) -tools=$(TOOLSPATH)
	-$(TOOLSPATH)/teensy_reboot
endif