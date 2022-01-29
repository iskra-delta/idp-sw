# idp-sw

Welcome to Iskra Delta Partner Software.

## Building

### Prerequisites

The build environment must be *Linux* with the following tools installed: `sdcc,` `cpmtools,` and `sed.` 

### Make

**`make`** Builds this repository. The result is file `fddb.img` in the `bin` directory.

**`make clean`** Cleans this repository.

**`make install`** Copies `fddb.img` to target location. Current target location is the `~/Dex` folder. Modify the `Makefile` to change your target location or convert file using the [HxCFloppyEmulator](https://github.com/mgrcar/HxCFloppyEmulator).

#### Additional make arguments

You can use the `SYS` argument to tell `Makefile` to create system disk.

**`make SYS=boot`** Creates the system disk for non graphical Partner.

**`make SYS=bootg`** Creates the system disk for graphical Partner.

**`make SYS=ccp`** Does not create system disk, but copies the `CCP.COM` shell to it.

## Running the software on Partner

You can download the emulator from here.

http://matejhorvat.si/sl/slorac/delta/partner/index.htm

Inside the emulator, press Alt+O to attach your disk image (i.e. `fddb.img`). The emulator maps the attached disk as `B:` drive.

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