/// \file defs.h
/// \brief Standard definitions used all across the library,
/// particularly things that don't fit well anywhere else.

/***********************************************************************
 Copyright (c) 1998 by Kevin Atkinson, (c) 1999, 2000 and 2001 by
 MySQL AB, and (c) 2004, 2005 by Educational Technology Resources, Inc.
 Others may also hold copyrights on code in this file.  See the CREDITS
 file in the top directory of the distribution for details.

 This file is part of MySQL++.

 MySQL++ is free software; you can redistribute it and/or modify it
 under the terms of the GNU Lesser General Public License as published
 by the Free Software Foundation; either version 2.1 of the License, or
 (at your option) any later version.

 MySQL++ is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with MySQL++; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301
 USA
***********************************************************************/

#ifndef MYSQLPP_DEFS_H
#define MYSQLPP_DEFS_H

#include "platform.h"

#include <mysql.h>

namespace mysqlpp {

const bool use_exceptions = true;

enum sql_cmp_type {sql_use_compare};

#if defined(NO_LONG_LONGS)
typedef unsigned long ulonglong;
typedef long longlong;
#elif !defined(__GNUC__) && (defined(__WIN32__) || defined(_WIN32))
typedef unsigned __int64 ulonglong;
typedef __int64 longlong;
#else
typedef unsigned long long ulonglong;
typedef long long longlong;
#endif

typedef MYSQL_FIELD Field;
typedef const char cchar;
typedef longlong longgint;
#ifndef uint
typedef unsigned int uint;
#endif

} // end namespace mysqlpp

#endif

