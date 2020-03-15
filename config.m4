dnl $Id$
dnl config.m4 for extension tinyexpression

sinclude(./autoconf/pecl.m4)
sinclude(./autoconf/php-executable.m4)

PECL_INIT([tinyexpression])

PHP_ARG_ENABLE(tinyexpression,
[whether to enable tinyexpression],
[--enable-tinyexpression           Enable tinyexpression])

if test "$PHP_TINYEXPRESSION" != "no"; then
  AC_DEFINE(HAVE_TINYEXPRESSION, 1, [whether tinyexpression is enabled])
  PHP_NEW_EXTENSION(tinyexpression, tinyexpression.c, $ext_shared)

  PHP_ADD_MAKEFILE_FRAGMENT
  PHP_INSTALL_HEADERS([ext/tinyexpression], [tinyexpression.h])
fi
