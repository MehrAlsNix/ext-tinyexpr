/*
  +----------------------------------------------------------------------+
  | TinyExpr PHP extension                                               |
  +----------------------------------------------------------------------+
  | Copyright (c) 2020 MehrAlsNix                                              |
  +----------------------------------------------------------------------+
  | Permission is hereby granted, free of charge, to any person          |
  | obtaining a copy of this software and associated documentation files |
  | (the "Software"), to deal in the Software without restriction,       |
  | including without limitation the rights to use, copy, modify, merge, |
  | publish, distribute, sublicense, and/or sell copies of the Software, |
  | and to permit persons to whom the Software is furnished to do so,    |
  | subject to the following conditions:                                 |
  |                                                                      |
  | The above copyright notice and this permission notice shall be       |
  | included in all copies or substantial portions of the Software.      |
  |                                                                      |
  | THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,      |
  | EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF   |
  | MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND                |
  | NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS  |
  | BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN   |
  | ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN    |
  | CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE     |
  | SOFTWARE.                                                            |
  +----------------------------------------------------------------------+
  | Author: Siad Ardroumli <siad.ardroumli@gmail.com>                    |
  +----------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "tinyexpression.h"
#include "zend.h"
#include "zend_API.h"
#include "zend_exceptions.h"
#include "ext/standard/info.h"
#include "tinyexpr.c"

#if HAVE_TINYEXPRESSION

/* Argument info for each function, used for reflection */
ZEND_BEGIN_ARG_INFO_EX(arginfo_tinyexpr_interp, 0, 0, 1)
    ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

PHP_MINFO_FUNCTION(tinyexpression)
{
    php_info_print_table_start();
    php_info_print_table_header(2, "tinyexpression(php tinyexpr extension) support", "enabled");
    php_info_print_table_row(2, "extension version",  PHP_TINYEXPRESSION_VERSION);
    php_info_print_table_end();
}

/* Add all functions. (Keep PHP_FE_END as last element) */
static const zend_function_entry te_functions[] = {
    PHP_FE(tinyexpr_interp, arginfo_tinyexpr_interp)
    PHP_FE_END
};

zend_module_entry tinyexpression_module_entry = {
    STANDARD_MODULE_HEADER,
    PHP_TINYEXPRESSION_EXTNAME,
    te_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    PHP_MINFO(tinyexpression),
    PHP_TINYEXPRESSION_VERSION,
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_TINYEXPRESSION
ZEND_GET_MODULE(tinyexpression)
#endif

PHP_FUNCTION(tinyexpr_interp)
{
    const char *str;
    size_t str_len;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "s", &str, &str_len) == FAILURE) {
        RETURN_THROWS();
    }

    double d = te_interp(str, 0);

    RETVAL_DOUBLE(d);
}

#endif
