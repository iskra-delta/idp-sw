# Deliberately manual so that files can easily be excluded.
SUBDIRS             =   aids

# CP/M Area for SDK demos
export USER_AREA    =   14

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
