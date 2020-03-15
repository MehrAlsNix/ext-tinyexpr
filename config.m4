dnl $Id$
dnl config.m4 for extension tinyexpr

sinclude(./autoconf/pecl.m4)
sinclude(./autoconf/php-executable.m4)

PECL_INIT([tinyexpr])

PHP_ARG_ENABLE(tinyexpr,
[whether to enable tinyexpr],
[--enable-tinyexpr           Enable tinyexpr])

if test "$PHP_TINYEXPR" != "no"; then
  AC_DEFINE(HAVE_TINYEXPR, 1, [whether tinyexpr is enabled])
  PHP_NEW_EXTENSION(tinyexpr, php_tinyexpr.c, $ext_shared)

  PHP_ADD_MAKEFILE_FRAGMENT
  PHP_INSTALL_HEADERS([ext/tinyexpr], [php_tinyexpr.h])
fi
