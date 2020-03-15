--TEST--
tinyexpr_interpret basic test
--SKIPIF--
<?php
if (!extension_loaded("pib")) print "skip";

?>
--FILE--
<?php
var_dump(tinyexpr_interpret("1+1"));

?>
--EXPECT--
double(2)

