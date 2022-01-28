# idp-sw
Iskra Delta Partner Software

  * [The test framework](#the-test-framework)
- [Creating Disks Manually](#creating-disks-manually)
  * [How to create a hard drive?](#how-to-create-a-hard-drive-)
  * [How to create a floppy drive?](#how-to-create-a-floppy-drive-)
  * [How to add local files to disk?](#how-to-add-local-files-to-disk-)
  * [How to remove files from disk?](#how-to-remove-files-from-disk-)
- [The Emulator](#the-emulator)


## The test framework

Automated unit tests use the [tiny test framework of Eric Radman](https://eradman.com/posts/tdd-in-c.html), 
based on [the original MinUnit by John Brewer](http://www.jera.com/techinfo/jtns/jtn002.html). 
The name of automated unit tests ends in `-test` (i.e. `std-test.com`).

# Creating Disks Manually

If you want to create custom Partner disks, we've prepared the necessary 
definitions for you to use with the `cpmtools` package.

You can download the package from here.

http://www.moria.de/~michael/cpmtools/

Disk definitions for Partner floppy and hard drives are in
the `scripts\diskdefs` file.
 * `idpfdd` for floppy drive
 * `idphdd` for the hard disk

## How to create a hard drive?

Note: `-f` is disk format and can be `idphdd` or `idpfdd`.

`mkfs.cpm.exe -f idphdd -t hdda.img`

## How to create a floppy drive?

`mkfs.cpm.exe -f idpfdd -t fddb.img`

## How to add local files to disk?

Following command adds file `hello.com` to area 0: of floppy drive `fddb.img`.

`cpmcp -f idpfdd fddb.img test.com 0:test.com`

## How to remove files from disk?

`cpmrm -f idpfdd fddb.img 0:test.com`


#### Other make targets

For comfortable work, you can also use the following targets. Each
of them creates a `bin` folder copies the `.com,` `.lib` and `crt0cpm.rel` 
files into it. And then creates an image of the floppy disk called 
`fddb.img` with all the `.com` files to the floppy image, 
   

 * `make install` Create the `bin` folder and standard floppy (with `.com` files).
 * `make ccp` Add `ccp.com` to the floppy. CP/M allows programs to overwrite its'
   command shell called the CCP. When the program ends, the CP/M reloads the shell
   and, if not present on the disk, displays an error (prompts for disk change). 
 * `make boot` Uses a bootable floppy for *std. partner* as a base for creating
   the disk image. 
 * `make bootg` Uses a bootable floppy for *graphical partner* as a base for
   creating the disk image
 * `make dex` Calls `make install` and copies the floppy image to a user
   folder (`~/Dex/`). Use this if you work in *Linux* and need to exchange 
   the image with another environment (i.e., a *Windows* where the emulator
   is running). *In case you wonder, dex stands for Data EXchange.*
   
   All output will go to the `build` folder. Disk image that you 
can import into the Partner emulator (using **Alt+O**) is called `fddb.img`.



# The Emulator

You can download the emulator from here.

http://matejhorvat.si/sl/slorac/delta/partner/index.htm

Inside the emulator, press Alt+O to attach your disk image. 
The emulator maps the attached disk as `B:` drive.


At present, the build environment is *Linux* with the following tools installed: 
`sdcc,` `cpmtools,` `gcc,` and `sed.` 
