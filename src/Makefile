# Check if required tools are on the system.
REQUIRED = sdcc sdar sdasz80 sdldz80 mkfs.cpm cpmcp sed
K := $(foreach exec,$(REQUIRED),\
    $(if $(shell which $(exec)),,$(error "$(exec) not found. Please install or add to path.")))

# SDK folders and startup file.
export INC_DIR		=	$(SDK_DIR)/include
export LIB_DIR		=	$(SDK_DIR)/lib
export CRT0         =   $(LIB_DIR)/crt0cpm3-z80

# Globa settings: tools.
export CC			=	sdcc
export CFLAGS		=	--std-c11 -mz80 -I. -I./include $(addprefix -I,$(INC_DIR)) \
						--no-std-crt0 --nostdinc --nostdlib --debug \
						-D SLIM=$(SLIM) -D PLATFORM=$(PLATFORM)
export AS			=	sdasz80
export ASFLAGS		=	-xlos -g
export AR			=	sdar
export ARFLAGS		=	-rc
export LD           =   sdcc
export LDFLAGS      =   -mz80 -Wl -y \
                        --code-loc 0x100 \
						--no-std-crt0 --nostdlib --nostdinc \
                        $(addprefix -L,$(LIB_DIR)) \
						-llibsdcc-z80 \
						-llibcpm3-z80 \
						-llibpartner \
						-llibgpx \
						-llibtiles -p
export OBJCOPY      =   sdobjcopy

# Data segment fix (relink due to SDCC bug)
export L2           =   sdldz80
export L2FLAGS      =   -nf
export L2FIX        =   sed '/-b _DATA = 0x8000/d'

# Deliberately manual so that files can easily be excluded.
SUBDIRS             =   sdk-demos

.PHONY: all
all: $(SUBDIRS)

.PHONY: clean
clean: $(SUBDIRS)

.PHONY: $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) -C $@ $(MAKECMDGOALS) \
		PLATFORM=partner \
		SLIM=$(SLIM) \
		SDK_DIR=$(SDK_DIR) \
		FLOPPY=$(FLOPPY)