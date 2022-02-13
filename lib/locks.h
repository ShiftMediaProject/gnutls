/*
 * Copyright (C) 2010-2012 Free Software Foundation, Inc.
 *
 * Author: Nikos Mavrogiannopoulos
 *
 * This file is part of GnuTLS.
 *
 * The GnuTLS is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>
 *
 */

#ifndef GNUTLS_LIB_LOCKS_H
#define GNUTLS_LIB_LOCKS_H

#include <gnutls/gnutls.h>
#include "gnutls_int.h"
#include "system.h"
#include "glthread/lock.h"

extern mutex_init_func gnutls_mutex_init;
extern mutex_deinit_func gnutls_mutex_deinit;
extern mutex_lock_func gnutls_mutex_lock;
extern mutex_unlock_func gnutls_mutex_unlock;

/* If a mutex is initialized with GNUTLS_STATIC_MUTEX, it must be
 * locked/unlocked with the gnutls_static_mutex_* functions defined
 * below instead of the above gnutls_mutex_* functions, because the
 * latter can be replaced with gnutls_global_set_mutex().
 */
#define GNUTLS_STATIC_MUTEX(lock) gl_lock_define_initialized(static, lock)
typedef gl_lock_t *gnutls_static_mutex_t;
int gnutls_static_mutex_lock(gnutls_static_mutex_t lock);
int gnutls_static_mutex_unlock(gnutls_static_mutex_t lock);

/* Unlike static mutexes, static rwlocks can be locked/unlocked with
 * the functions defined below, because there is no way to replace
 * those functions.
 */
#define GNUTLS_RWLOCK(rwlock) gl_rwlock_define_initialized(static, rwlock)
typedef gl_rwlock_t *gnutls_rwlock_t;

int gnutls_rwlock_rdlock(gnutls_rwlock_t rwlock);
int gnutls_rwlock_wrlock(gnutls_rwlock_t rwlock);
int gnutls_rwlock_unlock(gnutls_rwlock_t rwlock);

#define GNUTLS_ONCE(once) gl_once_define(static, once)
typedef gl_once_t *gnutls_once_t;

int gnutls_once(gnutls_once_t once, void (*init_func) (void));

#endif /* GNUTLS_LIB_LOCKS_H */
