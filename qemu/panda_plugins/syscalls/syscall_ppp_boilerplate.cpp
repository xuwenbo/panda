#ifdef TARGET_ARM
PPP_CB_BOILERPLATE(on_sys_fcntl)
PPP_CB_BOILERPLATE(on_sys_sigpending_returned)
PPP_CB_BOILERPLATE(on_sys_setuid16_returned)
PPP_CB_BOILERPLATE(on_sys_msgsnd)
PPP_CB_BOILERPLATE(on_sys_lsetxattr)
PPP_CB_BOILERPLATE(on_sys_futex)
PPP_CB_BOILERPLATE(on_sys_setsid)
PPP_CB_BOILERPLATE(on_sys_sched_getaffinity_returned)
PPP_CB_BOILERPLATE(on_sys_request_key)
PPP_CB_BOILERPLATE(on_sys_ustat)
PPP_CB_BOILERPLATE(on_sys_set_mempolicy)
PPP_CB_BOILERPLATE(on_sys_llseek_returned)
PPP_CB_BOILERPLATE(on_sys_tkill)
PPP_CB_BOILERPLATE(on_sys_fchmod_returned)
PPP_CB_BOILERPLATE(on_sys_setreuid16)
PPP_CB_BOILERPLATE(on_sys_capset)
PPP_CB_BOILERPLATE(on_sys_lookup_dcookie)
PPP_CB_BOILERPLATE(on_sys_shmat)
PPP_CB_BOILERPLATE(on_sys_brk)
PPP_CB_BOILERPLATE(on_execve)
PPP_CB_BOILERPLATE(on_sys_reboot_returned)
PPP_CB_BOILERPLATE(on_sys_getgroups)
PPP_CB_BOILERPLATE(on_sys_setdomainname_returned)
PPP_CB_BOILERPLATE(on_sys_rt_sigprocmask)
PPP_CB_BOILERPLATE(on_sys_open)
PPP_CB_BOILERPLATE(on_sys_msync_returned)
PPP_CB_BOILERPLATE(on_sys_clock_gettime)
PPP_CB_BOILERPLATE(on_sys_lremovexattr_returned)
PPP_CB_BOILERPLATE(on_sys_munlock)
PPP_CB_BOILERPLATE(on_sys_mlockall)
PPP_CB_BOILERPLATE(on_sys_lstat64_returned)
PPP_CB_BOILERPLATE(on_sys_rename_returned)
PPP_CB_BOILERPLATE(on_sys_setxattr_returned)
PPP_CB_BOILERPLATE(on_sys_request_key_returned)
PPP_CB_BOILERPLATE(on_sys_brk_returned)
PPP_CB_BOILERPLATE(on_sys_lseek)
PPP_CB_BOILERPLATE(on_sys_close)
PPP_CB_BOILERPLATE(on_sys_getpeername_returned)
PPP_CB_BOILERPLATE(on_sys_bind)
PPP_CB_BOILERPLATE(on_sys_lseek_returned)
PPP_CB_BOILERPLATE(on_sys_arm_fadvise64_64_returned)
PPP_CB_BOILERPLATE(on_sys_getresuid)
PPP_CB_BOILERPLATE(on_sys_setdomainname)
PPP_CB_BOILERPLATE(on_sys_access)
PPP_CB_BOILERPLATE(on_ARM_breakpoint_returned)
PPP_CB_BOILERPLATE(on_sys_epoll_create1)
PPP_CB_BOILERPLATE(on_sys_getppid_returned)
PPP_CB_BOILERPLATE(on_sys_mkdirat)
PPP_CB_BOILERPLATE(on_sys_fdatasync)
PPP_CB_BOILERPLATE(on_sys_keyctl_returned)
PPP_CB_BOILERPLATE(on_sys_unlinkat)
PPP_CB_BOILERPLATE(on_sys_lremovexattr)
PPP_CB_BOILERPLATE(on_ARM_breakpoint)
PPP_CB_BOILERPLATE(on_sys_inotify_init)
PPP_CB_BOILERPLATE(on_sys_rmdir_returned)
PPP_CB_BOILERPLATE(on_sys_truncate64_returned)
PPP_CB_BOILERPLATE(on_sys_futimesat_returned)
PPP_CB_BOILERPLATE(on_sys_readlinkat_returned)
PPP_CB_BOILERPLATE(on_sys_setresgid)
PPP_CB_BOILERPLATE(on_sys_sched_setaffinity_returned)
PPP_CB_BOILERPLATE(on_sys_setgroups16_returned)
PPP_CB_BOILERPLATE(on_sys_mq_timedreceive)
PPP_CB_BOILERPLATE(on_sys_fchmod)
PPP_CB_BOILERPLATE(on_sys_io_submit)
PPP_CB_BOILERPLATE(on_sys_inotify_rm_watch_returned)
PPP_CB_BOILERPLATE(on_sys_fremovexattr)
PPP_CB_BOILERPLATE(on_sys_personality)
PPP_CB_BOILERPLATE(on_sys_lchown_returned)
PPP_CB_BOILERPLATE(on_sys_kill)
PPP_CB_BOILERPLATE(on_sys_symlinkat_returned)
PPP_CB_BOILERPLATE(on_sys_vhangup)
PPP_CB_BOILERPLATE(on_ARM_usr32_mode_returned)
PPP_CB_BOILERPLATE(on_sys_getpid_returned)
PPP_CB_BOILERPLATE(on_sys_sendmsg_returned)
PPP_CB_BOILERPLATE(on_ARM_null_segfault_returned)
PPP_CB_BOILERPLATE(on_sys_quotactl_returned)
PPP_CB_BOILERPLATE(on_sys_flistxattr)
PPP_CB_BOILERPLATE(on_sys_nanosleep_returned)
PPP_CB_BOILERPLATE(on_sys_linkat)
PPP_CB_BOILERPLATE(on_sys_flock_returned)
PPP_CB_BOILERPLATE(on_sys_getcpu)
PPP_CB_BOILERPLATE(on_sys_setgroups)
PPP_CB_BOILERPLATE(on_sys_fallocate)
PPP_CB_BOILERPLATE(on_sys_openat_returned)
PPP_CB_BOILERPLATE(on_sys_pciconfig_iobase)
PPP_CB_BOILERPLATE(on_sys_io_submit_returned)
PPP_CB_BOILERPLATE(on_sys_select)
PPP_CB_BOILERPLATE(on_sys_mq_timedreceive_returned)
PPP_CB_BOILERPLATE(on_sys_rename)
PPP_CB_BOILERPLATE(on_sys_timer_getoverrun_returned)
PPP_CB_BOILERPLATE(on_sys_recv)
PPP_CB_BOILERPLATE(on_sys_sched_getaffinity)
PPP_CB_BOILERPLATE(on_fork)
PPP_CB_BOILERPLATE(on_sys_munlockall_returned)
PPP_CB_BOILERPLATE(on_sys_link)
PPP_CB_BOILERPLATE(on_sys_add_key_returned)
PPP_CB_BOILERPLATE(on_sys_setfsgid_returned)
PPP_CB_BOILERPLATE(on_ARM_cmpxchg)
PPP_CB_BOILERPLATE(on_sys_setregid16_returned)
PPP_CB_BOILERPLATE(on_sys_sched_get_priority_min_returned)
PPP_CB_BOILERPLATE(on_sys_io_setup_returned)
PPP_CB_BOILERPLATE(on_sys_setregid16)
PPP_CB_BOILERPLATE(on_sys_setgroups_returned)
PPP_CB_BOILERPLATE(on_sys_lchown)
PPP_CB_BOILERPLATE(on_sys_semop)
PPP_CB_BOILERPLATE(on_sys_getgid16_returned)
PPP_CB_BOILERPLATE(on_sys_tgkill)
PPP_CB_BOILERPLATE(on_sys_shmget)
PPP_CB_BOILERPLATE(on_sys_sync_returned)
PPP_CB_BOILERPLATE(on_sys_getuid_returned)
PPP_CB_BOILERPLATE(on_sys_creat_returned)
PPP_CB_BOILERPLATE(on_sys_msgrcv_returned)
PPP_CB_BOILERPLATE(on_sys_gettimeofday)
PPP_CB_BOILERPLATE(on_sys_fchownat_returned)
PPP_CB_BOILERPLATE(on_sys_ioprio_set)
PPP_CB_BOILERPLATE(on_sys_madvise_returned)
PPP_CB_BOILERPLATE(on_sys_send)
PPP_CB_BOILERPLATE(on_sys_sendfile)
PPP_CB_BOILERPLATE(on_sys_semtimedop_returned)
PPP_CB_BOILERPLATE(on_sys_umount_returned)
PPP_CB_BOILERPLATE(on_fork_returned)
PPP_CB_BOILERPLATE(on_sys_vhangup_returned)
PPP_CB_BOILERPLATE(on_sys_poll_returned)
PPP_CB_BOILERPLATE(on_sys_link_returned)
PPP_CB_BOILERPLATE(on_sys_getitimer_returned)
PPP_CB_BOILERPLATE(on_execve_returned)
PPP_CB_BOILERPLATE(on_sys_faccessat)
PPP_CB_BOILERPLATE(on_sys_select_returned)
PPP_CB_BOILERPLATE(on_sys_settimeofday)
PPP_CB_BOILERPLATE(on_sys_getrlimit_returned)
PPP_CB_BOILERPLATE(on_ARM_set_tls)
PPP_CB_BOILERPLATE(on_sys_rt_sigtimedwait_returned)
PPP_CB_BOILERPLATE(on_sys_msgctl_returned)
PPP_CB_BOILERPLATE(on_sys_set_tid_address_returned)
PPP_CB_BOILERPLATE(on_sys_listxattr)
PPP_CB_BOILERPLATE(on_ARM_cacheflush_returned)
PPP_CB_BOILERPLATE(on_sys_tee_returned)
PPP_CB_BOILERPLATE(on_sys_io_setup)
PPP_CB_BOILERPLATE(on_sys_fsetxattr_returned)
PPP_CB_BOILERPLATE(on_sys_clock_gettime_returned)
PPP_CB_BOILERPLATE(on_sys_sched_yield_returned)
PPP_CB_BOILERPLATE(on_sys_gettid)
PPP_CB_BOILERPLATE(on_sys_setreuid)
PPP_CB_BOILERPLATE(on_sys_futex_returned)
PPP_CB_BOILERPLATE(on_sys_swapoff)
PPP_CB_BOILERPLATE(on_sys_creat)
PPP_CB_BOILERPLATE(on_sys_umask_returned)
PPP_CB_BOILERPLATE(on_sys_wait4)
PPP_CB_BOILERPLATE(on_sys_statfs64)
PPP_CB_BOILERPLATE(on_sys_timerfd_create_returned)
PPP_CB_BOILERPLATE(on_sys_sethostname)
PPP_CB_BOILERPLATE(on_sys_newuname_returned)
PPP_CB_BOILERPLATE(on_sys_get_robust_list_returned)
PPP_CB_BOILERPLATE(on_sys_getpgid)
PPP_CB_BOILERPLATE(on_sys_chown)
PPP_CB_BOILERPLATE(on_sys_splice)
PPP_CB_BOILERPLATE(on_sys_epoll_wait_returned)
PPP_CB_BOILERPLATE(on_sys_sync)
PPP_CB_BOILERPLATE(on_sys_getgid16)
PPP_CB_BOILERPLATE(on_sys_sendmsg)
PPP_CB_BOILERPLATE(on_sys_writev)
PPP_CB_BOILERPLATE(on_sys_mq_open)
PPP_CB_BOILERPLATE(on_sys_clock_nanosleep_returned)
PPP_CB_BOILERPLATE(on_sys_setsockopt)
PPP_CB_BOILERPLATE(on_sys_inotify_add_watch)
PPP_CB_BOILERPLATE(on_sys_inotify_add_watch_returned)
PPP_CB_BOILERPLATE(on_sys_clock_nanosleep)
PPP_CB_BOILERPLATE(on_sys_uselib)
PPP_CB_BOILERPLATE(on_sys_fstatat64_returned)
PPP_CB_BOILERPLATE(on_sys_fstatfs64_returned)
PPP_CB_BOILERPLATE(on_sys_msgctl)
PPP_CB_BOILERPLATE(on_clone)
PPP_CB_BOILERPLATE(on_sys_getitimer)
PPP_CB_BOILERPLATE(on_sys_mq_timedsend)
PPP_CB_BOILERPLATE(on_sys_fchown)
PPP_CB_BOILERPLATE(on_sys_newstat_returned)
PPP_CB_BOILERPLATE(on_sys_setsid_returned)
PPP_CB_BOILERPLATE(on_sys_poll)
PPP_CB_BOILERPLATE(on_sys_sched_yield)
PPP_CB_BOILERPLATE(on_sys_sendfile64_returned)
PPP_CB_BOILERPLATE(on_sys_dup2)
PPP_CB_BOILERPLATE(on_sys_dup3)
PPP_CB_BOILERPLATE(on_sys_mlock)
PPP_CB_BOILERPLATE(on_sys_setgid)
PPP_CB_BOILERPLATE(on_sys_mkdirat_returned)
PPP_CB_BOILERPLATE(on_sys_sched_get_priority_max_returned)
PPP_CB_BOILERPLATE(on_sys_mlockall_returned)
PPP_CB_BOILERPLATE(on_sys_epoll_ctl_returned)
PPP_CB_BOILERPLATE(on_sys_fchmodat_returned)
PPP_CB_BOILERPLATE(on_sys_swapon)
PPP_CB_BOILERPLATE(on_sys_mprotect_returned)
PPP_CB_BOILERPLATE(on_sys_sysfs_returned)
PPP_CB_BOILERPLATE(on_sys_chdir)
PPP_CB_BOILERPLATE(on_sys_io_cancel_returned)
PPP_CB_BOILERPLATE(on_sys_getpeername)
PPP_CB_BOILERPLATE(on_sys_sethostname_returned)
PPP_CB_BOILERPLATE(on_sys_accept)
PPP_CB_BOILERPLATE(on_sys_setreuid_returned)
PPP_CB_BOILERPLATE(on_sys_getsockopt_returned)
PPP_CB_BOILERPLATE(on_sys_fstatfs_returned)
PPP_CB_BOILERPLATE(on_sys_setresgid_returned)
PPP_CB_BOILERPLATE(on_sys_pivot_root)
PPP_CB_BOILERPLATE(on_sys_sendto_returned)
PPP_CB_BOILERPLATE(on_sys_setresgid16_returned)
PPP_CB_BOILERPLATE(on_sys_epoll_wait)
PPP_CB_BOILERPLATE(on_sys_ioctl)
PPP_CB_BOILERPLATE(on_sys_getpgrp)
PPP_CB_BOILERPLATE(on_sys_clock_getres)
PPP_CB_BOILERPLATE(on_sys_pause_returned)
PPP_CB_BOILERPLATE(on_sys_sched_get_priority_min)
PPP_CB_BOILERPLATE(on_sys_lgetxattr_returned)
PPP_CB_BOILERPLATE(on_sys_read_returned)
PPP_CB_BOILERPLATE(on_sys_mq_notify_returned)
PPP_CB_BOILERPLATE(on_sys_renameat)
PPP_CB_BOILERPLATE(on_sys_signalfd4_returned)
PPP_CB_BOILERPLATE(on_sys_readlinkat)
PPP_CB_BOILERPLATE(on_sys_mknodat_returned)
PPP_CB_BOILERPLATE(on_sys_shutdown)
PPP_CB_BOILERPLATE(on_sys_setuid_returned)
PPP_CB_BOILERPLATE(on_sys_readlink_returned)
PPP_CB_BOILERPLATE(on_sys_listen_returned)
PPP_CB_BOILERPLATE(on_sys_waitid_returned)
PPP_CB_BOILERPLATE(on_sys_mq_getsetattr)
PPP_CB_BOILERPLATE(on_sys_adjtimex_returned)
PPP_CB_BOILERPLATE(on_sys_remap_file_pages)
PPP_CB_BOILERPLATE(on_sys_clock_settime_returned)
PPP_CB_BOILERPLATE(on_sys_tgkill_returned)
PPP_CB_BOILERPLATE(on_sys_getcwd)
PPP_CB_BOILERPLATE(on_sys_fstat64_returned)
PPP_CB_BOILERPLATE(on_sys_send_returned)
PPP_CB_BOILERPLATE(on_sys_getdents)
PPP_CB_BOILERPLATE(on_sys_readahead)
PPP_CB_BOILERPLATE(on_sys_ioprio_set_returned)
PPP_CB_BOILERPLATE(on_sys_getxattr)
PPP_CB_BOILERPLATE(on_sys_munlockall)
PPP_CB_BOILERPLATE(on_sys_restart_syscall_returned)
PPP_CB_BOILERPLATE(on_sys_sched_setparam)
PPP_CB_BOILERPLATE(on_sys_get_robust_list)
PPP_CB_BOILERPLATE(on_sys_timerfd_gettime_returned)
PPP_CB_BOILERPLATE(on_sys_timerfd_settime_returned)
PPP_CB_BOILERPLATE(on_sys_pciconfig_iobase_returned)
PPP_CB_BOILERPLATE(on_sys_sched_rr_get_interval_returned)
PPP_CB_BOILERPLATE(on_sys_eventfd_returned)
PPP_CB_BOILERPLATE(on_sys_semtimedop)
PPP_CB_BOILERPLATE(on_sys_getgroups16)
PPP_CB_BOILERPLATE(on_sys_quotactl)
PPP_CB_BOILERPLATE(on_sys_getpid)
PPP_CB_BOILERPLATE(on_sys_gettimeofday_returned)
PPP_CB_BOILERPLATE(on_sys_capget)
PPP_CB_BOILERPLATE(on_sys_fchown16)
PPP_CB_BOILERPLATE(on_sys_getresgid16_returned)
PPP_CB_BOILERPLATE(on_sys_msgsnd_returned)
PPP_CB_BOILERPLATE(on_sys_capset_returned)
PPP_CB_BOILERPLATE(on_sys_set_robust_list_returned)
PPP_CB_BOILERPLATE(on_sys_statfs)
PPP_CB_BOILERPLATE(on_sys_mq_getsetattr_returned)
PPP_CB_BOILERPLATE(on_sys_set_mempolicy_returned)
PPP_CB_BOILERPLATE(on_sys_capget_returned)
PPP_CB_BOILERPLATE(on_sys_mknod)
PPP_CB_BOILERPLATE(on_sys_setpgid)
PPP_CB_BOILERPLATE(on_sys_sigprocmask_returned)
PPP_CB_BOILERPLATE(on_sys_write_returned)
PPP_CB_BOILERPLATE(on_arm_mremap_returned)
PPP_CB_BOILERPLATE(on_sys_uselib_returned)
PPP_CB_BOILERPLATE(on_sys_setresuid16)
PPP_CB_BOILERPLATE(on_sys_rt_sigtimedwait)
PPP_CB_BOILERPLATE(on_sys_getgid)
PPP_CB_BOILERPLATE(on_sys_init_module_returned)
PPP_CB_BOILERPLATE(on_sys_listen)
PPP_CB_BOILERPLATE(on_sys_getppid)
PPP_CB_BOILERPLATE(on_sys_signalfd_returned)
PPP_CB_BOILERPLATE(on_sys_setfsgid16_returned)
PPP_CB_BOILERPLATE(on_sys_geteuid16_returned)
PPP_CB_BOILERPLATE(on_sigaction_returned)
PPP_CB_BOILERPLATE(on_sys_sched_setaffinity)
PPP_CB_BOILERPLATE(on_ARM_cmpxchg_returned)
PPP_CB_BOILERPLATE(on_sys_mbind)
PPP_CB_BOILERPLATE(on_sys_getpgrp_returned)
PPP_CB_BOILERPLATE(on_sys_newstat)
PPP_CB_BOILERPLATE(on_sys_removexattr)
PPP_CB_BOILERPLATE(on_sys_fchdir_returned)
PPP_CB_BOILERPLATE(on_sys_symlink_returned)
PPP_CB_BOILERPLATE(on_sys_shmctl)
PPP_CB_BOILERPLATE(on_sys_access_returned)
PPP_CB_BOILERPLATE(on_sys_getpriority_returned)
PPP_CB_BOILERPLATE(on_sys_move_pages_returned)
PPP_CB_BOILERPLATE(on_sys_socket)
PPP_CB_BOILERPLATE(on_sys_pciconfig_write_returned)
PPP_CB_BOILERPLATE(on_sys_clock_settime)
PPP_CB_BOILERPLATE(on_sys_removexattr_returned)
PPP_CB_BOILERPLATE(on_ARM_usr32_mode)
PPP_CB_BOILERPLATE(on_sys_getresgid16)
PPP_CB_BOILERPLATE(on_sys_mbind_returned)
PPP_CB_BOILERPLATE(on_sys_fgetxattr)
PPP_CB_BOILERPLATE(on_sys_llseek)
PPP_CB_BOILERPLATE(on_vfork_returned)
PPP_CB_BOILERPLATE(on_sys_setgroups16)
PPP_CB_BOILERPLATE(on_sys_set_robust_list)
PPP_CB_BOILERPLATE(on_sys_fsync_returned)
PPP_CB_BOILERPLATE(on_sys_connect)
PPP_CB_BOILERPLATE(on_sys_restart_syscall)
PPP_CB_BOILERPLATE(on_sys_lchown16)
PPP_CB_BOILERPLATE(on_sys_linkat_returned)
PPP_CB_BOILERPLATE(on_sys_munmap)
PPP_CB_BOILERPLATE(on_sys_io_destroy)
PPP_CB_BOILERPLATE(on_sys_getdents64)
PPP_CB_BOILERPLATE(on_sys_fstatfs64)
PPP_CB_BOILERPLATE(on_sys_sendfile_returned)
PPP_CB_BOILERPLATE(on_sys_mprotect)
PPP_CB_BOILERPLATE(on_sys_io_destroy_returned)
PPP_CB_BOILERPLATE(on_sys_clock_getres_returned)
PPP_CB_BOILERPLATE(on_sys_exit_group_returned)
PPP_CB_BOILERPLATE(on_sys_mincore)
PPP_CB_BOILERPLATE(on_sys_rt_sigqueueinfo_returned)
PPP_CB_BOILERPLATE(on_sys_fallocate_returned)
PPP_CB_BOILERPLATE(on_sys_msgrcv)
PPP_CB_BOILERPLATE(on_do_mmap2_returned)
PPP_CB_BOILERPLATE(on_sys_setuid)
PPP_CB_BOILERPLATE(on_sys_msgget)
PPP_CB_BOILERPLATE(on_sys_inotify_init1)
PPP_CB_BOILERPLATE(on_sys_dup)
PPP_CB_BOILERPLATE(on_do_sigaltstack_returned)
PPP_CB_BOILERPLATE(on_sys_semctl)
PPP_CB_BOILERPLATE(on_sigreturn)
PPP_CB_BOILERPLATE(on_sys_flock)
PPP_CB_BOILERPLATE(on_sys_mkdir_returned)
PPP_CB_BOILERPLATE(on_sys_futimesat)
PPP_CB_BOILERPLATE(on_sys_pause)
PPP_CB_BOILERPLATE(on_sys_delete_module_returned)
PPP_CB_BOILERPLATE(on_sys_setitimer)
PPP_CB_BOILERPLATE(on_sys_sched_setscheduler)
PPP_CB_BOILERPLATE(on_sys_kill_returned)
PPP_CB_BOILERPLATE(on_sys_eventfd2)
PPP_CB_BOILERPLATE(on_sys_nfsservctl_returned)
PPP_CB_BOILERPLATE(on_sys_times_returned)
PPP_CB_BOILERPLATE(on_sys_getresgid)
PPP_CB_BOILERPLATE(on_sys_prctl_returned)
PPP_CB_BOILERPLATE(on_sys_acct_returned)
PPP_CB_BOILERPLATE(on_sys_setgid_returned)
PPP_CB_BOILERPLATE(on_sys_kexec_load)
PPP_CB_BOILERPLATE(on_sys_mlock_returned)
PPP_CB_BOILERPLATE(on_sys_openat)
PPP_CB_BOILERPLATE(on_sys_sendto)
PPP_CB_BOILERPLATE(on_sys_getsockopt)
PPP_CB_BOILERPLATE(on_sys_fsync)
PPP_CB_BOILERPLATE(on_sys_listxattr_returned)
PPP_CB_BOILERPLATE(on_sys_tee)
PPP_CB_BOILERPLATE(on_sys_tkill_returned)
PPP_CB_BOILERPLATE(on_sys_mknodat)
PPP_CB_BOILERPLATE(on_sys_add_key)
PPP_CB_BOILERPLATE(on_sys_mincore_returned)
PPP_CB_BOILERPLATE(on_sys_mq_unlink_returned)
PPP_CB_BOILERPLATE(on_sys_unlink)
PPP_CB_BOILERPLATE(on_sys_pipe2)
PPP_CB_BOILERPLATE(on_sys_setrlimit_returned)
PPP_CB_BOILERPLATE(on_sys_syslog)
PPP_CB_BOILERPLATE(on_sys_getuid16)
PPP_CB_BOILERPLATE(on_sys_getdents_returned)
PPP_CB_BOILERPLATE(on_sys_getegid_returned)
PPP_CB_BOILERPLATE(on_sys_ptrace_returned)
PPP_CB_BOILERPLATE(on_sys_setfsuid16)
PPP_CB_BOILERPLATE(on_do_mmap2)
PPP_CB_BOILERPLATE(on_sys_getuid)
PPP_CB_BOILERPLATE(on_sys_vmsplice)
PPP_CB_BOILERPLATE(on_sys_splice_returned)
PPP_CB_BOILERPLATE(on_sys_get_mempolicy)
PPP_CB_BOILERPLATE(on_sys_getgroups16_returned)
PPP_CB_BOILERPLATE(on_sys_pipe)
PPP_CB_BOILERPLATE(on_sys_prctl)
PPP_CB_BOILERPLATE(on_sys_acct)
PPP_CB_BOILERPLATE(on_sys_getgid_returned)
PPP_CB_BOILERPLATE(on_sys_bdflush_returned)
PPP_CB_BOILERPLATE(on_sys_getsockname_returned)
PPP_CB_BOILERPLATE(on_sys_getresuid16)
PPP_CB_BOILERPLATE(on_sys_waitid)
PPP_CB_BOILERPLATE(on_sys_kexec_load_returned)
PPP_CB_BOILERPLATE(on_sys_mknod_returned)
PPP_CB_BOILERPLATE(on_sys_getxattr_returned)
PPP_CB_BOILERPLATE(on_ARM_set_tls_returned)
PPP_CB_BOILERPLATE(on_sys_msync)
PPP_CB_BOILERPLATE(on_sys_swapon_returned)
PPP_CB_BOILERPLATE(on_sys_getsockname)
PPP_CB_BOILERPLATE(on_sys_chmod)
PPP_CB_BOILERPLATE(on_sys_set_tid_address)
PPP_CB_BOILERPLATE(on_sys_pipe2_returned)
PPP_CB_BOILERPLATE(on_sys_recvmsg)
PPP_CB_BOILERPLATE(on_sys_getresuid_returned)
PPP_CB_BOILERPLATE(on_sys_timer_create_returned)
PPP_CB_BOILERPLATE(on_sys_read)
PPP_CB_BOILERPLATE(on_sys_rt_sigpending_returned)
PPP_CB_BOILERPLATE(on_sys_connect_returned)
PPP_CB_BOILERPLATE(on_sys_socketpair_returned)
PPP_CB_BOILERPLATE(on_sys_setfsuid)
PPP_CB_BOILERPLATE(on_sys_sigpending)
PPP_CB_BOILERPLATE(on_sys_getcpu_returned)
PPP_CB_BOILERPLATE(on_vfork)
PPP_CB_BOILERPLATE(on_sys_epoll_create)
PPP_CB_BOILERPLATE(on_sys_msgget_returned)
PPP_CB_BOILERPLATE(on_sys_fchmodat)
PPP_CB_BOILERPLATE(on_sys_nanosleep)
PPP_CB_BOILERPLATE(on_sys_times)
PPP_CB_BOILERPLATE(on_sys_getrusage)
PPP_CB_BOILERPLATE(on_sys_vmsplice_returned)
PPP_CB_BOILERPLATE(on_sys_eventfd)
PPP_CB_BOILERPLATE(on_sys_move_pages)
PPP_CB_BOILERPLATE(on_sys_getsid)
PPP_CB_BOILERPLATE(on_sys_shmget_returned)
PPP_CB_BOILERPLATE(on_sys_semget)
PPP_CB_BOILERPLATE(on_sys_ioctl_returned)
PPP_CB_BOILERPLATE(on_sys_init_module)
PPP_CB_BOILERPLATE(on_sys_fcntl64_returned)
PPP_CB_BOILERPLATE(on_sys_signalfd)
PPP_CB_BOILERPLATE(on_arm_mremap)
PPP_CB_BOILERPLATE(on_sys_sysfs)
PPP_CB_BOILERPLATE(on_sys_fremovexattr_returned)
PPP_CB_BOILERPLATE(on_sys_dup_returned)
PPP_CB_BOILERPLATE(on_sys_fstatfs)
PPP_CB_BOILERPLATE(on_sys_wait4_returned)
PPP_CB_BOILERPLATE(on_sys_symlinkat)
PPP_CB_BOILERPLATE(on_sys_getpgid_returned)
PPP_CB_BOILERPLATE(on_sys_newfstat_returned)
PPP_CB_BOILERPLATE(on_sys_statfs64_returned)
PPP_CB_BOILERPLATE(on_sys_chroot)
PPP_CB_BOILERPLATE(on_sys_ftruncate_returned)
PPP_CB_BOILERPLATE(on_sys_shmctl_returned)
PPP_CB_BOILERPLATE(on_sys_shutdown_returned)
PPP_CB_BOILERPLATE(on_sys_reboot)
PPP_CB_BOILERPLATE(on_sys_writev_returned)
PPP_CB_BOILERPLATE(on_sys_bdflush)
PPP_CB_BOILERPLATE(on_sys_setregid)
PPP_CB_BOILERPLATE(on_sys_chown_returned)
PPP_CB_BOILERPLATE(on_sys_getuid16_returned)
PPP_CB_BOILERPLATE(on_sys_mq_unlink)
PPP_CB_BOILERPLATE(on_sys_io_getevents)
PPP_CB_BOILERPLATE(on_sys_exit)
PPP_CB_BOILERPLATE(on_sys_munmap_returned)
PPP_CB_BOILERPLATE(on_sys_unlink_returned)
PPP_CB_BOILERPLATE(on_sys_sysinfo)
PPP_CB_BOILERPLATE(on_sys_setreuid16_returned)
PPP_CB_BOILERPLATE(on_sys_fgetxattr_returned)
PPP_CB_BOILERPLATE(on_sys_setresgid16)
PPP_CB_BOILERPLATE(on_sys_pread64_returned)
PPP_CB_BOILERPLATE(on_sys_truncate_returned)
PPP_CB_BOILERPLATE(on_sys_fdatasync_returned)
PPP_CB_BOILERPLATE(on_sigaction)
PPP_CB_BOILERPLATE(on_sys_sched_get_priority_max)
PPP_CB_BOILERPLATE(on_sys_mount_returned)
PPP_CB_BOILERPLATE(on_sys_pwrite64_returned)
PPP_CB_BOILERPLATE(on_sys_timer_getoverrun)
PPP_CB_BOILERPLATE(on_sys_mq_notify)
PPP_CB_BOILERPLATE(on_sys_socket_returned)
PPP_CB_BOILERPLATE(on_ARM_user26_mode_returned)
PPP_CB_BOILERPLATE(on_sys_newlstat_returned)
PPP_CB_BOILERPLATE(on_sys_utimes)
PPP_CB_BOILERPLATE(on_sys_timer_gettime)
PPP_CB_BOILERPLATE(on_sys_mount)
PPP_CB_BOILERPLATE(on_sys_stat64_returned)
PPP_CB_BOILERPLATE(on_sys_setregid_returned)
PPP_CB_BOILERPLATE(on_sys_geteuid)
PPP_CB_BOILERPLATE(on_sys_mkdir)
PPP_CB_BOILERPLATE(on_sys_adjtimex)
PPP_CB_BOILERPLATE(on_sys_flistxattr_returned)
PPP_CB_BOILERPLATE(on_sys_keyctl)
PPP_CB_BOILERPLATE(on_sys_readlink)
PPP_CB_BOILERPLATE(on_sys_io_getevents_returned)
PPP_CB_BOILERPLATE(on_sys_ustat_returned)
PPP_CB_BOILERPLATE(on_sys_timer_settime_returned)
PPP_CB_BOILERPLATE(on_sys_getcwd_returned)
PPP_CB_BOILERPLATE(on_sys_pwrite64)
PPP_CB_BOILERPLATE(on_sys_recvfrom_returned)
PPP_CB_BOILERPLATE(on_sys_chown16_returned)
PPP_CB_BOILERPLATE(on_sys_sched_setparam_returned)
PPP_CB_BOILERPLATE(on_sys_exit_returned)
PPP_CB_BOILERPLATE(on_sys_newuname)
PPP_CB_BOILERPLATE(on_sys_signalfd4)
PPP_CB_BOILERPLATE(on_sys_sched_setscheduler_returned)
PPP_CB_BOILERPLATE(on_sys_getrlimit)
PPP_CB_BOILERPLATE(on_sys_truncate)
PPP_CB_BOILERPLATE(on_sys_nfsservctl)
PPP_CB_BOILERPLATE(on_sys_setfsuid16_returned)
PPP_CB_BOILERPLATE(on_sys_ioprio_get_returned)
PPP_CB_BOILERPLATE(on_sys_inotify_init1_returned)
PPP_CB_BOILERPLATE(on_sys_statfs_returned)
PPP_CB_BOILERPLATE(on_sys_fsetxattr)
PPP_CB_BOILERPLATE(on_sys_getrusage_returned)
PPP_CB_BOILERPLATE(on_do_sigaltstack)
PPP_CB_BOILERPLATE(on_sys_getresuid16_returned)
PPP_CB_BOILERPLATE(on_sys_semctl_returned)
PPP_CB_BOILERPLATE(on_sys_setfsgid)
PPP_CB_BOILERPLATE(on_sys_remap_file_pages_returned)
PPP_CB_BOILERPLATE(on_sys_faccessat_returned)
PPP_CB_BOILERPLATE(on_sys_semget_returned)
PPP_CB_BOILERPLATE(on_sys_fcntl64)
PPP_CB_BOILERPLATE(on_rt_sigaction)
PPP_CB_BOILERPLATE(on_sys_setfsuid_returned)
PPP_CB_BOILERPLATE(on_sys_fstat64)
PPP_CB_BOILERPLATE(on_sys_unshare_returned)
PPP_CB_BOILERPLATE(on_sys_arm_fadvise64_64)
PPP_CB_BOILERPLATE(on_sys_newlstat)
PPP_CB_BOILERPLATE(on_sys_recv_returned)
PPP_CB_BOILERPLATE(on_sys_ftruncate64_returned)
PPP_CB_BOILERPLATE(on_sys_ioprio_get)
PPP_CB_BOILERPLATE(on_sys_rmdir)
PPP_CB_BOILERPLATE(on_sys_getegid16)
PPP_CB_BOILERPLATE(on_sys_chdir_returned)
PPP_CB_BOILERPLATE(on_sigreturn_returned)
PPP_CB_BOILERPLATE(on_ARM_user26_mode)
PPP_CB_BOILERPLATE(on_sys_fcntl_returned)
PPP_CB_BOILERPLATE(on_sys_getpriority)
PPP_CB_BOILERPLATE(on_sys_sched_rr_get_interval)
PPP_CB_BOILERPLATE(on_sys_fstatat64)
PPP_CB_BOILERPLATE(on_sys_shmat_returned)
PPP_CB_BOILERPLATE(on_sys_timerfd_gettime)
PPP_CB_BOILERPLATE(on_sys_rt_sigprocmask_returned)
PPP_CB_BOILERPLATE(on_sys_mq_timedsend_returned)
PPP_CB_BOILERPLATE(on_clone_returned)
PPP_CB_BOILERPLATE(on_sys_gettid_returned)
PPP_CB_BOILERPLATE(on_sys_renameat_returned)
PPP_CB_BOILERPLATE(on_sys_timerfd_create)
PPP_CB_BOILERPLATE(on_sys_setpgid_returned)
PPP_CB_BOILERPLATE(on_sys_getsid_returned)
PPP_CB_BOILERPLATE(on_sys_setsockopt_returned)
PPP_CB_BOILERPLATE(on_sys_rt_sigsuspend_returned)
PPP_CB_BOILERPLATE(on_sys_recvfrom)
PPP_CB_BOILERPLATE(on_sys_lsetxattr_returned)
PPP_CB_BOILERPLATE(on_sys_lgetxattr)
PPP_CB_BOILERPLATE(on_sys_inotify_rm_watch)
PPP_CB_BOILERPLATE(on_sys_sched_getscheduler)
PPP_CB_BOILERPLATE(on_sys_fchown_returned)
PPP_CB_BOILERPLATE(on_sys_readv)
PPP_CB_BOILERPLATE(on_sys_chroot_returned)
PPP_CB_BOILERPLATE(on_sys_sysinfo_returned)
PPP_CB_BOILERPLATE(on_sys_chown16)
PPP_CB_BOILERPLATE(on_sys_delete_module)
PPP_CB_BOILERPLATE(on_sys_shmdt_returned)
PPP_CB_BOILERPLATE(on_sys_settimeofday_returned)
PPP_CB_BOILERPLATE(on_sys_io_cancel)
PPP_CB_BOILERPLATE(on_sys_nice)
PPP_CB_BOILERPLATE(on_sys_truncate64)
PPP_CB_BOILERPLATE(on_sys_recvmsg_returned)
PPP_CB_BOILERPLATE(on_sys_close_returned)
PPP_CB_BOILERPLATE(on_sys_sched_getparam)
PPP_CB_BOILERPLATE(on_sys_pciconfig_write)
PPP_CB_BOILERPLATE(on_sys_timer_delete)
PPP_CB_BOILERPLATE(on_sys_sysctl_returned)
PPP_CB_BOILERPLATE(on_sys_setrlimit)
PPP_CB_BOILERPLATE(on_ARM_null_segfault)
PPP_CB_BOILERPLATE(on_sys_setitimer_returned)
PPP_CB_BOILERPLATE(on_sys_umask)
PPP_CB_BOILERPLATE(on_sys_semop_returned)
PPP_CB_BOILERPLATE(on_sys_unlinkat_returned)
PPP_CB_BOILERPLATE(on_sys_timer_create)
PPP_CB_BOILERPLATE(on_sys_timer_gettime_returned)
PPP_CB_BOILERPLATE(on_sigsuspend_returned)
PPP_CB_BOILERPLATE(on_sys_fchownat)
PPP_CB_BOILERPLATE(on_ARM_cacheflush)
PPP_CB_BOILERPLATE(on_sys_pciconfig_read_returned)
PPP_CB_BOILERPLATE(on_sys_accept_returned)
PPP_CB_BOILERPLATE(on_sys_write)
PPP_CB_BOILERPLATE(on_sys_chmod_returned)
PPP_CB_BOILERPLATE(on_sys_setresuid)
PPP_CB_BOILERPLATE(on_sys_fchdir)
PPP_CB_BOILERPLATE(on_sys_open_returned)
PPP_CB_BOILERPLATE(on_sys_setuid16)
PPP_CB_BOILERPLATE(on_sys_sync_file_range2)
PPP_CB_BOILERPLATE(on_sys_dup3_returned)
PPP_CB_BOILERPLATE(on_sys_swapoff_returned)
PPP_CB_BOILERPLATE(on_sys_setxattr)
PPP_CB_BOILERPLATE(on_sys_llistxattr_returned)
PPP_CB_BOILERPLATE(on_sys_mq_open_returned)
PPP_CB_BOILERPLATE(on_sys_sysctl)
PPP_CB_BOILERPLATE(on_sys_utimes_returned)
PPP_CB_BOILERPLATE(on_sys_rt_sigqueueinfo)
PPP_CB_BOILERPLATE(on_sys_utimensat)
PPP_CB_BOILERPLATE(on_sys_bind_returned)
PPP_CB_BOILERPLATE(on_sys_dup2_returned)
PPP_CB_BOILERPLATE(on_sys_epoll_create_returned)
PPP_CB_BOILERPLATE(on_sys_sendfile64)
PPP_CB_BOILERPLATE(on_sys_epoll_create1_returned)
PPP_CB_BOILERPLATE(on_sys_setresuid_returned)
PPP_CB_BOILERPLATE(on_sys_rt_sigpending)
PPP_CB_BOILERPLATE(on_sys_getegid16_returned)
PPP_CB_BOILERPLATE(on_rt_sigaction_returned)
PPP_CB_BOILERPLATE(on_sys_geteuid16)
PPP_CB_BOILERPLATE(on_sys_symlink)
PPP_CB_BOILERPLATE(on_sys_setresuid16_returned)
PPP_CB_BOILERPLATE(on_sys_timer_delete_returned)
PPP_CB_BOILERPLATE(on_sys_pipe_returned)
PPP_CB_BOILERPLATE(on_sys_get_mempolicy_returned)
PPP_CB_BOILERPLATE(on_sys_getresgid_returned)
PPP_CB_BOILERPLATE(on_sys_socketpair)
PPP_CB_BOILERPLATE(on_sys_setgid16_returned)
PPP_CB_BOILERPLATE(on_sys_lstat64)
PPP_CB_BOILERPLATE(on_sys_setpriority_returned)
PPP_CB_BOILERPLATE(on_sys_shmdt)
PPP_CB_BOILERPLATE(on_sys_pivot_root_returned)
PPP_CB_BOILERPLATE(on_sys_pciconfig_read)
PPP_CB_BOILERPLATE(on_sys_timerfd_settime)
PPP_CB_BOILERPLATE(on_sys_timer_settime)
PPP_CB_BOILERPLATE(on_sys_ftruncate64)
PPP_CB_BOILERPLATE(on_sys_geteuid_returned)
PPP_CB_BOILERPLATE(on_sigsuspend)
PPP_CB_BOILERPLATE(on_sys_getgroups_returned)
PPP_CB_BOILERPLATE(on_sys_epoll_ctl)
PPP_CB_BOILERPLATE(on_sys_unshare)
PPP_CB_BOILERPLATE(on_sys_exit_group)
PPP_CB_BOILERPLATE(on_sys_newfstat)
PPP_CB_BOILERPLATE(on_sys_madvise)
PPP_CB_BOILERPLATE(on_sys_readahead_returned)
PPP_CB_BOILERPLATE(on_sys_inotify_init_returned)
PPP_CB_BOILERPLATE(on_sys_lookup_dcookie_returned)
PPP_CB_BOILERPLATE(on_sys_utimensat_returned)
PPP_CB_BOILERPLATE(on_sys_sync_file_range2_returned)
PPP_CB_BOILERPLATE(on_sys_umount)
PPP_CB_BOILERPLATE(on_sys_getdents64_returned)
PPP_CB_BOILERPLATE(on_sys_sched_getscheduler_returned)
PPP_CB_BOILERPLATE(on_sys_sigprocmask)
PPP_CB_BOILERPLATE(on_sys_fchown16_returned)
PPP_CB_BOILERPLATE(on_sys_lchown16_returned)
PPP_CB_BOILERPLATE(on_sys_readv_returned)
PPP_CB_BOILERPLATE(on_sys_sched_getparam_returned)
PPP_CB_BOILERPLATE(on_sys_setgid16)
PPP_CB_BOILERPLATE(on_sys_pread64)
PPP_CB_BOILERPLATE(on_sys_personality_returned)
PPP_CB_BOILERPLATE(on_sys_ftruncate)
PPP_CB_BOILERPLATE(on_sys_eventfd2_returned)
PPP_CB_BOILERPLATE(on_sys_llistxattr)
PPP_CB_BOILERPLATE(on_sys_stat64)
PPP_CB_BOILERPLATE(on_sys_setfsgid16)
PPP_CB_BOILERPLATE(on_sys_munlock_returned)
PPP_CB_BOILERPLATE(on_sys_nice_returned)
PPP_CB_BOILERPLATE(on_sys_getegid)
PPP_CB_BOILERPLATE(on_sys_ptrace)
PPP_CB_BOILERPLATE(on_sys_rt_sigsuspend)
PPP_CB_BOILERPLATE(on_sys_syslog_returned)
PPP_CB_BOILERPLATE(on_sys_setpriority)
#endif