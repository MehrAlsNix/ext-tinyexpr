--TEST--
tinyexpr_interpret basic test
--FILE--
<?php
var_dump(tinyexpr_interpret("1+1"));

?>
--EXPECT--
double(2)

