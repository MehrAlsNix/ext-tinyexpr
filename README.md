# PHP TinyExpression
Math evaluation for strings.

[![Build Status](https://travis-ci.com/MehrAlsNix/ext-tinyexpr.svg?branch=master)](https://travis-ci.com/MehrAlsNix/ext-tinyexpr) [![Build status](https://ci.appveyor.com/api/projects/status/ih0hlmc8dnv3fji9?svg=true)](https://ci.appveyor.com/project/siad007/ext-tinyexpr)

## TinyExpr Binding
[TinyExpr](https://github.com/codeplea/tinyexpr) Bindings for PHP

> TinyExpr is a very small parser and evaluation library for evaluating math expressions from C

### Installation

#### Linux

```
git clone --branch "master" --depth 1 https://github.com/MehrAlsNix/ext-tinyexpr.git /tmp/tinyexpression
cd /tmp/tinyexpression
phpize
./configure
make
make install
echo "extension=tinyexpression.so" > /usr/local/etc/php/conf.d/tinyexpression.ini
```

#### Windows

tbd.

<hr>

### Functions

#### tinyexpression_interpret
<hr>
(TinyExpression 0.1.0)
<br>
<br>

tinyexpression_interpret - Evaluate math expressions from a `string`.

##### Description
```
tinyexpression_interpret ( string $expr ) : float
```

##### Parameters

<b>expr</b> `string`

##### Return Values

Returns the evaluated math expression as a `float`.

##### Examples

```
docker-compose build
docker-compose up -d
docker-compose exec php bash
```

```
php -r "var_dump(tinyexpression_interpret('2*9+8-(5/9)'));"
php -r "var_dump(tinyexpression_interpret('sin(0.6)'));"
```

```
float(25.444444444444)
float(0.56464247339504)
```
