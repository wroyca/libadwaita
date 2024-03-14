#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.test"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[689]; const double alignment; void * const ptr;}  test_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\310\000\000\000\000\000\000\050\006\000\000\000"
  "\000\000\000\000\000\000\000\000\001\000\000\000\005\000\000\000"
  "\005\000\000\000\005\000\000\000\113\120\220\013\004\000\000\000"
  "\310\000\000\000\004\000\114\000\314\000\000\000\320\000\000\000"
  "\132\271\277\152\005\000\000\000\320\000\000\000\005\000\114\000"
  "\330\000\000\000\334\000\000\000\260\267\044\060\000\000\000\000"
  "\334\000\000\000\006\000\114\000\344\000\000\000\350\000\000\000"
  "\356\322\363\315\001\000\000\000\350\000\000\000\044\000\166\000"
  "\020\001\000\000\232\002\000\000\324\265\002\000\377\377\377\377"
  "\232\002\000\000\001\000\114\000\234\002\000\000\240\002\000\000"
  "\213\045\072\175\002\000\000\000\240\002\000\000\011\000\114\000"
  "\254\002\000\000\260\002\000\000\157\162\147\057\002\000\000\000"
  "\124\145\163\164\057\000\000\000\003\000\000\000\147\156\157\155"
  "\145\057\000\000\005\000\000\000\157\162\147\056\147\156\157\155"
  "\145\056\101\144\167\141\151\164\141\061\056\124\145\163\164\056"
  "\155\145\164\141\151\156\146\157\056\170\155\154\000\000\000\000"
  "\176\003\000\000\001\000\000\000\170\332\225\123\115\157\302\040"
  "\030\276\373\053\110\357\055\272\323\262\040\146\063\233\027\067"
  "\075\270\263\241\345\135\313\244\100\200\332\355\337\217\176\150"
  "\247\316\144\336\340\175\237\017\362\074\201\314\276\112\211\366"
  "\140\235\320\152\032\115\222\161\204\100\145\232\013\225\117\243"
  "\367\315\113\174\037\315\350\210\144\272\064\132\201\362\310\177"
  "\033\230\106\034\334\316\153\023\063\143\244\310\230\017\354\210"
  "\216\020\042\202\123\155\363\044\127\272\204\344\221\327\114\170"
  "\066\111\066\340\074\301\141\327\100\112\360\214\063\317\266\201"
  "\011\312\001\235\317\307\161\160\046\370\142\323\300\215\325\237"
  "\220\371\343\154\271\130\057\343\273\144\022\153\033\113\346\301"
  "\022\174\016\151\150\222\125\052\053\130\052\341\354\311\202\107"
  "\327\236\230\364\030\202\007\166\053\306\141\017\122\033\260\133"
  "\305\112\240\233\002\320\342\155\365\372\214\326\235\063\301\147"
  "\210\121\303\152\117\275\001\352\042\030\226\026\044\060\007\256"
  "\321\037\256\247\125\164\273\326\337\145\126\230\046\346\303\254"
  "\111\206\066\242\241\051\364\124\011\311\103\016\107\002\276\140"
  "\020\334\133\134\063\034\047\223\033\015\321\112\362\066\376\377"
  "\332\036\057\256\313\340\320\133\156\165\145\150\233\350\120\146"
  "\067\154\161\225\225\175\211\105\350\314\260\034\042\132\170\157"
  "\334\003\306\271\360\222\245\175\233\241\127\334\312\140\051\122"
  "\326\045\117\160\240\323\123\231\264\312\275\145\331\016\354\015"
  "\102\130\070\127\201\373\113\257\000\151\072\245\040\124\327\365"
  "\057\225\017\053\100\161\207\173\032\301\307\257\104\107\077\010"
  "\225\045\070\000\050\165\165\141\171\051\057\000\000\000\000\000"
  "\101\144\167\141\151\164\141\061\057\000\000\000\001\000\000\000"
  "" };

static GStaticResource static_resource = { test_resource_data.data, sizeof (test_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_GNUC_INTERNAL
GResource *test_get_resource (void);
GResource *test_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/* GLIB - Library of useful routines for C programming
 * Copyright (C) 1995-1997  Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Modified by the GLib Team and others 1997-2000.  See the AUTHORS
 * file for a list of people on the GLib Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GLib at ftp://ftp.gtk.org/pub/gtk/.
 */

#ifndef __G_CONSTRUCTOR_H__
#define __G_CONSTRUCTOR_H__

/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

/*
 * Only try to include gslist.h if not already included via glib.h,
 * so that items using gconstructor.h outside of GLib (such as
 * GResources) continue to build properly.
 */
#ifndef __G_LIB_H__
#include "gslist.h"
#endif

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */
#endif /* __G_CONSTRUCTOR_H__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(testresource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(testresource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(testresource_destructor)
#endif
G_DEFINE_DESTRUCTOR(testresource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void testresource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void testresource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
