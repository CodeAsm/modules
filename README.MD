# Test module

This is a test module for Linux
compile by running:
```
make
```
Clean the build dir by
```
make clean
```
Requires linux sources in makefile and would need copying by system buildscribt or manual copying.

## Usage

To use this module, compile and add module into kernel init file. teeny-linux, where i use this example for will add the module when using the build.sh script with the addition of the -mod or -module argument. for first use, the kernel sources must be unpacked, a first run without the module is adviced.

once compiled, use lsmod to list current loaded modules and modprobe to either install modules or remove them.

## example
Install module into kernel
'''
modprobe hello
'''

Remove module into kernel
'''
modprobe -r hello
'''

Install module with additional arguments into kernel
'''
modprobe hello whom=codeasm howmany=2
'''
where whom will be the string name of who to call hello to and
howmany the amount int of the message be repeated.