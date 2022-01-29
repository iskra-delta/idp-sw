# We only allow compilation on linux!
ifneq ($(shell uname), Linux)
$(error OS must be Linux!)
endif

# Global settings: folders.
export ROOT 		= 	$(realpath .)
export SDK_DIR		=	$(ROOT)/sdk
export BIN_DIR      =   $(ROOT)/bin
export FLOPPY       =   $(BIN_DIR)/fddb.img
export DISKDEFS     =   $(ROOT)/disk/diskdefs

# Local vars. Will be overriden.
IDP_DEV             =   $(ROOT)/idp-dev

# Subfolders for make.
SUBDIRS             =   idp-dev src

# Rules.
.PHONY: all
all: $(BIN_DIR) floppy $(SUBDIRS)
	rm -f ./diskdefs

.PHONY: $(BIN_DIR)
$(BIN_DIR):
	# Remove bin dir (we are going to write again).
	rm -f -r $(BIN_DIR)
	# And re-create!
	mkdir -p $(BIN_DIR)

.PHONY: $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) -C $@ $(MAKECMDGOALS) \
		PLATFORM=partner \
		SLIM=$(SLIM) \
		SDK_DIR=$(SDK_DIR) \
		FLOPPY=$(FLOPPY)

.PHONY: clean
clean: $(IDP_DEV) $(SUBDIRS)
	rm -f -r $(BIN_DIR)
	rm -f ./diskdefs

.PHONY: floppy
floppy:
	if [ "$ $(SYS)" = "ccp" ] ; then \
		cp $(DISKDEFS) . ; \
		mkfs.cpm -f idpfdd -t $(FLOPPY) ; \
		cpmcp -f idpfdd $(FLOPPY) $(ROOT)/disk/CCP.COM 0:CCP.COM ; \
		rm -f ./diskdefs ; \
	elif [ "$ $(SYS)" = "boot" ] ; then \
    	cp $(ROOT)/disk/boot.img $(FLOPPY) ; \
	elif [ "$ $(SYS)" = "bootg" ] ; then \
    	cp $(ROOT)/disk/bootg.img $(FLOPPY) ; \
	else \
		cp $(DISKDEFS) . ; \
		mkfs.cpm -f idpfdd -t $(FLOPPY) ; \
		rm -f ./diskdefs ; \
	fi;

# Uncomment your install option.
.PHONY: install
install: 
	# hxcfe -uselayout:IDP -conv:HXC_HFE -finput:$(FLOPPY) -foutput:$(BIN_DIR)/fddb.hfe
	cp $(FLOPPY) ~/Dex/fddb.img