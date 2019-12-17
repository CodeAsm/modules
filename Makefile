#KDIR = /lib/modules/`uname -r`/build
KDIR = ../../bin/obj/linux-x86/ 

kbuild:
	make -C $(KDIR) M=`pwd`
	cp hello.ko ../../bin/hello.ko

clean:
	make -C $(KDIR) M=`pwd` clean
	rm ../../bin/hello.ko
