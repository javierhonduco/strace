/*
 * Copyright (c) 2016-2018 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "tests.h"
#include <asm/unistd.h>

#ifdef __NR_getgroups32

# include "getgroups.c"

#else

SKIP_MAIN_UNDEFINED("__NR_getgroups32")

#endif
