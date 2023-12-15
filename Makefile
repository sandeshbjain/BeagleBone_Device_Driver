obj-m +=helloworld.o

ifdef ARCH
KDIR =/lib/modules/$(shell uname -r)/build
else
KDIR =/home/sandesh/BBG/tmp/lib/modules/5.10.65/build
endif

all:
	make -C $(KDIR) M=$(shell pwd) modules
clean:
	make -C $(KDIR) M=$(shell pwd) clean

