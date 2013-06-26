/**
 * @file fbt_syscalls_64.h
 * This file lists the 64 bit linux system call numbers.
 *
 * Copyright (c) 2012 ETH Zurich
 *
 * @author Enrico Kravina <enrico.kravina@gmail.com>
 *
 * $Date: 2012-01-12 16:45:01 +0100 (gio, 12 gen 2012) $
 * $LastChangedDate: 2012-01-12 16:45:01 +0100 (gio, 12 gen 2012) $
 * $LastChangedBy: kravinae $
 * $Revision: 1167 $
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA  02110-1301, USA.
 */


#ifndef FBT_SYSCALL_NUMBERS_64_H_
#define FBT_SYSCALL_NUMBERS_64_H_

/* 64b syscall numbers copied from unistd_64.h */

#define SYS64_read        0
#define SYS64_write       1
#define SYS64_open        2
#define SYS64_close       3
#define SYS64_stat        4
#define SYS64_fstat       5
#define SYS64_lstat       6
#define SYS64_poll        7

#define SYS64_lseek       8
#define SYS64_mmap        9
#define SYS64_mprotect        10
#define SYS64_munmap        11
#define SYS64_brk       12

#define SYS64_rt_sigaction      13
#define SYS64_rt_sigprocmask      14
#define SYS64_rt_sigreturn      15

#define SYS64_ioctl       16
#define SYS64_pread64       17
#define SYS64_pwrite64        18
#define SYS64_readv       19
#define SYS64_writev        20
#define SYS64_access        21
#define SYS64_pipe        22
#define SYS64_select        23

#define SYS64_sched_yield     24
#define SYS64_mremap        25
#define SYS64_msync       26
#define SYS64_mincore       27
#define SYS64_madvise       28
#define SYS64_shmget        29
#define SYS64_shmat       30
#define SYS64_shmctl        31

#define SYS64_dup       32
#define SYS64_dup2        33
#define SYS64_pause       34
#define SYS64_nanosleep       35
#define SYS64_getitimer       36
#define SYS64_alarm       37
#define SYS64_setitimer       38
#define SYS64_getpid        39

#define SYS64_sendfile        40
#define SYS64_socket        41
#define SYS64_connect       42
#define SYS64_accept        43
#define SYS64_sendto        44
#define SYS64_recvfrom        45
#define SYS64_sendmsg       46
#define SYS64_recvmsg       47

#define SYS64_shutdown        48
#define SYS64_bind        49
#define SYS64_listen        50
#define SYS64_getsockname     51
#define SYS64_getpeername     52
#define SYS64_socketpair        53
#define SYS64_setsockopt        54
#define SYS64_getsockopt        55

#define SYS64_clone       56
#define SYS64_fork        57
#define SYS64_vfork       58
#define SYS64_execve        59
#define SYS64_exit        60
#define SYS64_wait4       61
#define SYS64_kill        62
#define SYS64_uname       63

#define SYS64_semget        64
#define SYS64_semop       65
#define SYS64_semctl        66
#define SYS64_shmdt       67
#define SYS64_msgget        68
#define SYS64_msgsnd        69
#define SYS64_msgrcv        70
#define SYS64_msgctl        71

#define SYS64_fcntl       72
#define SYS64_flock       73
#define SYS64_fsync       74
#define SYS64_fdatasync       75
#define SYS64_truncate        76
#define SYS64_ftruncate       77
#define SYS64_getdents        78
#define SYS64_getcwd        79

#define SYS64_chdir       80
#define SYS64_fchdir        81
#define SYS64_rename        82
#define SYS64_mkdir       83
#define SYS64_rmdir       84
#define SYS64_creat       85
#define SYS64_link        86
#define SYS64_unlink        87

#define SYS64_symlink       88
#define SYS64_readlink        89
#define SYS64_chmod       90
#define SYS64_fchmod        91
#define SYS64_chown       92
#define SYS64_fchown        93
#define SYS64_lchown        94
#define SYS64_umask       95

#define SYS64_gettimeofday      96
#define SYS64_getrlimit       97
#define SYS64_getrusage       98
#define SYS64_sysinfo       99
#define SYS64_times       100
#define SYS64_ptrace        101
#define SYS64_getuid        102
#define SYS64_syslog        103

/* at the very end the stuff that never runs during the benchmarks */
#define SYS64_getgid        104
#define SYS64_setuid        105
#define SYS64_setgid        106
#define SYS64_geteuid       107
#define SYS64_getegid       108
#define SYS64_setpgid       109
#define SYS64_getppid       110
#define SYS64_getpgrp       111

#define SYS64_setsid        112
#define SYS64_setreuid        113
#define SYS64_setregid        114
#define SYS64_getgroups       115
#define SYS64_setgroups       116
#define SYS64_setresuid       117
#define SYS64_getresuid       118
#define SYS64_setresgid       119

#define SYS64_getresgid       120
#define SYS64_getpgid       121
#define SYS64_setfsuid        122
#define SYS64_setfsgid        123
#define SYS64_getsid        124
#define SYS64_capget        125
#define SYS64_capset        126

#define SYS64_rt_sigpending     127
#define SYS64_rt_sigtimedwait     128
#define SYS64_rt_sigqueueinfo     129
#define SYS64_rt_sigsuspend     130
#define SYS64_sigaltstack     131
#define SYS64_utime       132
#define SYS64_mknod       133

/* Only needed for a.out */
#define SYS64_uselib        134
#define SYS64_personality     135

#define SYS64_ustat       136
#define SYS64_statfs        137
#define SYS64_fstatfs       138
#define SYS64_sysfs       139

#define SYS64_getpriority     140
#define SYS64_setpriority     141
#define SYS64_sched_setparam      142
#define SYS64_sched_getparam      143
#define SYS64_sched_setscheduler      144
#define SYS64_sched_getscheduler      145
#define SYS64_sched_get_priority_max    146
#define SYS64_sched_get_priority_min    147
#define SYS64_sched_rr_get_interval   148

#define SYS64_mlock       149
#define SYS64_munlock       150
#define SYS64_mlockall        151
#define SYS64_munlockall        152

#define SYS64_vhangup       153

#define SYS64_modify_ldt        154

#define SYS64_pivot_root        155

#define SYS64_sysctl        156

#define SYS64_prctl       157
#define SYS64_arch_prctl        158

#define SYS64_adjtimex        159

#define SYS64_setrlimit       160

#define SYS64_chroot        161

#define SYS64_sync        162

#define SYS64_acct        163

#define SYS64_settimeofday      164

#define SYS64_mount       165
#define SYS64_umount2       166

#define SYS64_swapon        167
#define SYS64_swapoff       168

#define SYS64_reboot        169

#define SYS64_sethostname     170
#define SYS64_setdomainname     171

#define SYS64_iopl        172
#define SYS64_ioperm        173

#define SYS64_create_module     174
#define SYS64_init_module     175
#define SYS64_delete_module     176
#define SYS64_get_kernel_syms     177
#define SYS64_query_module      178

#define SYS64_quotactl        179

#define SYS64_nfsservctl        180

/* reserved for LiS/STREAMS */
#define SYS64_getpmsg       181
#define SYS64_putpmsg       182

/* reserved for AFS */
#define SYS64_afs_syscall     183

/* reserved for tux */
#define SYS64_tuxcall       184

#define SYS64_security        185

#define SYS64_gettid        186

#define SYS64_readahead       187
#define SYS64_setxattr        188
#define SYS64_lsetxattr       189
#define SYS64_fsetxattr       190
#define SYS64_getxattr        191
#define SYS64_lgetxattr       192
#define SYS64_fgetxattr       193
#define SYS64_listxattr       194
#define SYS64_llistxattr        195
#define SYS64_flistxattr        196
#define SYS64_removexattr     197
#define SYS64_lremovexattr      198
#define SYS64_fremovexattr      199
#define SYS64_tkill       200
#define SYS64_time        201
#define SYS64_futex       202
#define SYS64_sched_setaffinity     203
#define SYS64_sched_getaffinity     204
#define SYS64_set_thread_area     205
#define SYS64_io_setup        206
#define SYS64_io_destroy        207
#define SYS64_io_getevents      208
#define SYS64_io_submit       209
#define SYS64_io_cancel       210
#define SYS64_get_thread_area     211
#define SYS64_lookup_dcookie      212
#define SYS64_epoll_create      213
#define SYS64_epoll_ctl_old     214
#define SYS64_epoll_wait_old      215
#define SYS64_remap_file_pages      216
#define SYS64_getdents64        217
#define SYS64_set_tid_address     218
#define SYS64_restart_syscall     219
#define SYS64_semtimedop        220
#define SYS64_fadvise64       221
#define SYS64_timer_create      222
#define SYS64_timer_settime     223
#define SYS64_timer_gettime     224
#define SYS64_timer_getoverrun      225
#define SYS64_timer_delete      226
#define SYS64_clock_settime     227
#define SYS64_clock_gettime     228
#define SYS64_clock_getres      229
#define SYS64_clock_nanosleep     230
#define SYS64_exit_group        231
#define SYS64_epoll_wait        232
#define SYS64_epoll_ctl       233
#define SYS64_tgkill        234
#define SYS64_utimes        235
#define SYS64_vserver       236
#define SYS64_mbind       237
#define SYS64_set_mempolicy     238
#define SYS64_get_mempolicy     239
#define SYS64_mq_open       240
#define SYS64_mq_unlink       241
#define SYS64_mq_timedsend      242
#define SYS64_mq_timedreceive     243
#define SYS64_mq_notify       244
#define SYS64_mq_getsetattr     245
#define SYS64_kexec_load        246
#define SYS64_waitid        247
#define SYS64_add_key       248
#define SYS64_request_key     249
#define SYS64_keyctl        250
#define SYS64_ioprio_set        251
#define SYS64_ioprio_get        252
#define SYS64_inotify_init      253
#define SYS64_inotify_add_watch     254
#define SYS64_inotify_rm_watch      255
#define SYS64_migrate_pages     256
#define SYS64_openat        257
#define SYS64_mkdirat       258
#define SYS64_mknodat       259
#define SYS64_fchownat        260
#define SYS64_futimesat       261
#define SYS64_newfstatat        262
#define SYS64_unlinkat        263
#define SYS64_renameat        264
#define SYS64_linkat        265
#define SYS64_symlinkat       266
#define SYS64_readlinkat        267
#define SYS64_fchmodat        268
#define SYS64_faccessat       269
#define SYS64_pselect6        270
#define SYS64_ppoll       271
#define SYS64_unshare       272
#define SYS64_set_robust_list     273
#define SYS64_get_robust_list     274
#define SYS64_splice        275
#define SYS64_tee       276
#define SYS64_sync_file_range     277
#define SYS64_vmsplice        278
#define SYS64_move_pages        279
#define SYS64_utimensat       280
#define __IGNORE64_getcpu   /* implemented as a vsyscall */
#define SYS64_epoll_pwait     281
#define SYS64_signalfd        282
#define SYS64_timerfd_create      283
#define SYS64_eventfd       284
#define SYS64_fallocate       285
#define SYS64_timerfd_settime     286
#define SYS64_timerfd_gettime     287
#define SYS64_accept4       288
#define SYS64_signalfd4       289
#define SYS64_eventfd2        290
#define SYS64_epoll_create1     291
#define SYS64_dup3        292
#define SYS64_pipe2       293
#define SYS64_inotify_init1     294
#define SYS64_preadv        295
#define SYS64_pwritev       296
#define SYS64_rt_tgsigqueueinfo     297
#define SYS64_perf_event_open     298
#define SYS64_recvmmsg        299

#endif /* FBT_SYSCALL_NUMBERS_64_H_ */
