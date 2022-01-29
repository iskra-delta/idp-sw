# idp-sw

Welcome to Iskra Delta Partner Software.

## Building

The build environment must be *Linux* with the following tools installed: *sdcc*, *cpmtools*, and *sed*. 

Produce a floppy image *fddb.img* in the *bin* directory with

`make` 

Clean after the build with

`make clean`

Copy the floppy image to target location with

`make install` 

 > Current target location is the *~/Dex* directory. Modify the *Makefile* to change it or prepare your floppy image for the [HxCFloppyEmulator](https://github.com/mgrcar/HxCFloppyEmulator).

Use the `SYS` argument to tell *Makefile* to create a system floppy image. Create a system floppy image for non-graphical Partner with 

`make SYS=boot`

Create a system floppy image for graphical Partner with

`make SYS=bootg` 

Create a non-system floppy image with *CCP.COM* in user area 0 with

`make SYS=ccp`

## Running the software on Partner

If you do not own a real Iskra Delta Partner computer (*few of us do nowadays*), [download the emulator](http://matejhorvat.si/sl/slorac/delta/partner/index.htm)

Once inside the emulator, press Alt+O to attach your disk image (i.e. `fddb.img`). The emulator maps the attached disk as `B:` drive.

## Creating Disks Manually

If you want to create custom Partner disks, we've prepared the necessary definitions for you to use with the `cpmtools` package.

You can [download the package from here](http://www.moria.de/~michael/cpmtools/).

Disk definitions for Partner floppy and hard drives are in
the `disk\diskdefs` file.
 * `idpfdd` for floppy drive
 * `idphdd` for the hard disk
When running `cpmtools` programs, make sure the `diskdefs` file is in your current folder.

### How to create a hard drive?

Note: `-f` is disk format and can be `idphdd` or `idpfdd`.

`mkfs.cpm.exe -f idphdd -t hdda.img`

### How to create a floppy drive?

`mkfs.cpm.exe -f idpfdd -t fddb.img`

### How to add local files to disk?

Following command adds file `hello.com` to area 0: of floppy drive `fddb.img`.

`cpmcp -f idpfdd fddb.img test.com 0:test.com`

### How to remove files from disk?

`cpmrm -f idpfdd fddb.img 0:test.com`