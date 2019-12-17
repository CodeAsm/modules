#KDIR = /lib/modules/`uname -r`/build
KDIR = ../../bin/obj/linux-x86/ 

kbuild:
	make -C $(KDIR) M=`pwd`

clean:
	make -C $(KDIR) M=`pwd` clean
