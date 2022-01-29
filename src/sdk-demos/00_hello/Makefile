# Source files.
SRC			=	$(wildcard *.c)
OBJS		=	$(patsubst %.c,%.rel,$(SRC))
TARGET		=	00_hello

# Rules.
.PHONY: all
all: $(TARGET).com

$(TARGET).com: $(TARGET).ihx
	$(OBJCOPY) -I ihex -O binary $(basename $@).ihx $(basename $@).com
	cp $(DISKDEFS) .
	cpmcp -f idpfdd $(FLOPPY) $@ $(USER_AREA):$(@F)
	rm -f ./diskdefs

$(TARGET).ihx: $(OBJS)
	$(LD) $(LDFLAGS) -o $(TARGET).ihx $(CRT0).rel $(OBJS)
	$(L2FIX) $(TARGET).lk > $(TARGET).link
	$(L2) $(L2FLAGS) $(TARGET).link

%.rel: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean
clean:
	rm -f *.cdb *.ihx *.lk *.map *.noi *.rel *.link *.sym *.lst *.adb *.asm *.com
	rm -f ./diskdefs