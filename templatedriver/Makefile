# Makefile – makefile of our first driver
 
# if KERNELRELEASE is defined, we've been invoked from the
# kernel build system and can use its language.
ifneq (${KERNELRELEASE},)
    obj-m := td.o
# Otherwise we were called directly from the command line.
# Invoke the kernel build system.
else
    KERNEL_SOURCE := /usr/src/kernels/3.13.7-100.fc19.x86_64
    PWD := $(shell pwd)
default:${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} modules
clean:${MAKE} -C ${KERNEL_SOURCE} SUBDIRS=${PWD} clean
endif

