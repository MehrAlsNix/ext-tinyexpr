# PHP TinyExpression
Math evaluation for strings.

## TinyExpr Binding
[TinyExpr](https://github.com/codeplea/tinyexpr) Bindings for PHP

> TinyExpr is a very small parser and evaluation library for evaluating math expressions from C

### Examples

```shell script
php -r "var_dump(tinyexpression_interpret('2*9+8-(5/9)'));"
php -r "var_dump(tinyexpression_interpret('sin(0.6)'));"
```
```
float(25.444444444444)
float(0.56464247339504)
```
