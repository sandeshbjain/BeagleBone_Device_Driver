#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x93237956, "module_layout" },
	{ 0xe8371eb7, "cdev_del" },
	{ 0xcc2b58a2, "device_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xc0dd611d, "class_destroy" },
	{ 0xa363b048, "kmem_cache_alloc_trace" },
	{ 0xf761255a, "kmalloc_caches" },
	{ 0xdc9b710f, "device_create" },
	{ 0xc032a111, "__class_create" },
	{ 0x1008de5e, "cdev_add" },
	{ 0x3fc867ed, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5f754e5a, "memset" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C5B56B72C1AD7BC46EA0D11");
