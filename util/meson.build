util_ss.add(dependency('threads'))
util_ss.add(files('osdep.c', 'cutils.c', 'unicode.c', 'qemu-timer-common.c'))
util_ss.add(when: 'CONFIG_ATOMIC64', if_false: files('atomic64.c'))
util_ss.add(when: 'CONFIG_POSIX', if_true: files('aio-posix.c'))
util_ss.add(when: 'CONFIG_POSIX', if_true: files('fdmon-poll.c'))
util_ss.add(when: 'CONFIG_EPOLL_CREATE1', if_true: files('fdmon-epoll.c'))
util_ss.add(when: 'CONFIG_POSIX', if_true: files('compatfd.c'))
util_ss.add(when: 'CONFIG_POSIX', if_true: files('event_notifier-posix.c'))
util_ss.add(when: 'CONFIG_POSIX', if_true: files('mmap-alloc.c'))
util_ss.add(when: 'CONFIG_POSIX', if_true: files('oslib-posix.c'))
util_ss.add(when: 'CONFIG_POSIX', if_true: files('qemu-thread-posix.c'))
util_ss.add(when: 'CONFIG_POSIX', if_true: files('memfd.c'))
util_ss.add(when: 'CONFIG_WIN32', if_true: files('aio-win32.c'))
util_ss.add(when: 'CONFIG_WIN32', if_true: files('event_notifier-win32.c'))
util_ss.add(when: 'CONFIG_WIN32', if_true: files('oslib-win32.c'))
util_ss.add(when: 'CONFIG_WIN32', if_true: files('qemu-thread-win32.c'))
util_ss.add(when: 'CONFIG_WIN32', if_true: winmm)
util_ss.add(files('envlist.c', 'path.c', 'module.c'))
util_ss.add(files('host-utils.c'))
util_ss.add(files('bitmap.c', 'bitops.c'))
util_ss.add(files('fifo8.c'))
util_ss.add(files('cacheinfo.c', 'cacheflush.c'))
util_ss.add(files('error.c', 'qemu-error.c'))
util_ss.add(files('qemu-print.c'))
util_ss.add(files('id.c'))
util_ss.add(files('qemu-config.c', 'notify.c'))
util_ss.add(files('qemu-option.c', 'qemu-progress.c'))
util_ss.add(files('keyval.c'))
util_ss.add(files('crc32c.c'))
util_ss.add(files('uuid.c'))
util_ss.add(files('getauxval.c'))
util_ss.add(files('rcu.c'))
util_ss.add(when: 'CONFIG_MEMBARRIER', if_true: files('sys_membarrier.c'))
util_ss.add(files('log.c'))
util_ss.add(files('pagesize.c'))
util_ss.add(files('qdist.c'))
util_ss.add(files('qht.c'))
util_ss.add(files('qsp.c'))
util_ss.add(files('range.c'))
util_ss.add(files('stats64.c'))
util_ss.add(files('systemd.c'))
util_ss.add(files('transactions.c'))
util_ss.add(when: 'CONFIG_POSIX', if_true: files('drm.c'))
util_ss.add(files('guest-random.c'))
util_ss.add(files('yank.c'))
util_ss.add(files('interval-tree.c'))
util_ss.add(files('selfmap.c'))
