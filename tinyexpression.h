/*
  +----------------------------------------------------------------------+
  | TinyExpression PHP extension                                               |
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

#ifndef PHP_TINYEXPRESSION_H
#define PHP_TINYEXPRESSION_H 1

#define PHP_TINYEXPRESSION_VERSION "0.1.0"
#define PHP_TINYEXPRESSION_EXTNAME "tinyexpression"

#ifdef PHP_WIN32
# define PHP_TINYEXPRESSION_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
# define PHP_TINYEXPRESSION_API __attribute__ ((visibility("default")))
#else
# define PHP_TINYEXPRESSION_API
#endif

/* Declare all functions and classes of the extension */
static PHP_FUNCTION(tinyexpr_interp);

extern zend_module_entry tinyexpression_module_entry;

#endif

