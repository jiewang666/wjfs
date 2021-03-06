#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7d09bae2, "module_layout" },
	{ 0xa3247381, "per_cpu__current_task" },
	{ 0x27a3b3fa, "kmalloc_caches" },
	{ 0x7700bfd4, "get_sb_nodev" },
	{ 0xad05d389, "save_mount_options" },
	{ 0x64340292, "generic_file_llseek" },
	{ 0xcc60350, "filemap_write_and_wait_range" },
	{ 0x2608df11, "simple_write_end" },
	{ 0x815b5dd4, "match_octal" },
	{ 0xecb174ef, "simple_sync_file" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x67053080, "current_kernel_time" },
	{ 0xb9a0901, "page_cache_async_readahead" },
	{ 0xca677caa, "touch_atime" },
	{ 0x3a7805f4, "generic_delete_inode" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xc8d6b9dd, "dput" },
	{ 0x44e9a829, "match_token" },
	{ 0x22397688, "add_to_page_cache_lru" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9a29b5ce, "page_symlink_inode_operations" },
	{ 0x7b70f4d7, "generic_file_aio_write" },
	{ 0xb2aabe2, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8b18496f, "__copy_to_user_ll" },
	{ 0xd1e890f9, "kunmap_atomic" },
	{ 0x5fe83f6c, "kmap_atomic" },
	{ 0xf3dc79e4, "kill_litter_super" },
	{ 0x49871c62, "simple_write_begin" },
	{ 0xb72397d5, "printk" },
	{ 0xb9295535, "d_rehash" },
	{ 0xab125ed4, "d_alloc_root" },
	{ 0x7e547717, "kunmap" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0xa12350e1, "wait_on_sync_kiocb" },
	{ 0xc532b826, "simple_readpage" },
	{ 0xbbda4ffe, "unlock_page" },
	{ 0x98276a46, "__lock_page_killable" },
	{ 0xa3fba4b4, "contig_page_data" },
	{ 0x62d3461c, "mark_page_accessed" },
	{ 0xab9534bb, "simple_getattr" },
	{ 0x9dd454a7, "kmem_cache_alloc" },
	{ 0x4e9b97bd, "simple_unlink" },
	{ 0x40284a8c, "simple_dir_operations" },
	{ 0xbd3cbebf, "generic_file_mmap" },
	{ 0x6f83f30, "kmap" },
	{ 0x4292364c, "schedule" },
	{ 0xbbfecf22, "page_cache_sync_readahead" },
	{ 0xee633db3, "generic_show_options" },
	{ 0x225a3e9, "simple_empty" },
	{ 0x98bf2cda, "register_filesystem" },
	{ 0xb7639538, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9286fd4, "do_sync_write" },
	{ 0x85a83608, "generic_file_splice_write" },
	{ 0x69aa6899, "put_page" },
	{ 0x1c03f068, "simple_statfs" },
	{ 0x5b3fc324, "unregister_filesystem" },
	{ 0xc8297e40, "init_special_inode" },
	{ 0xf5c05914, "generic_segment_checks" },
	{ 0xafad14ee, "find_get_page" },
	{ 0x3b967795, "new_inode" },
	{ 0x14f8c354, "generic_file_splice_read" },
	{ 0x43488a1a, "d_instantiate" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "52D1FF30104ABB022E42409");
