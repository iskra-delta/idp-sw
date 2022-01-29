# Deliberately manual so that files can easily be excluded.
SUBDIRS             =   00_hello 01_mdump

# CP/M Area for SDK demos
export USER_AREA    =   15

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