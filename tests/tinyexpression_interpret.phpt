--TEST--
tinyexpression_interpret basic test
--SKIPIF--
<?php
if (!extension_loaded("tinyexpression")) print "skip";

?>
--FILE--
<?php
var_dump(tinyexpression_interpret("1+1"));

?>
--EXPECT--
double(2)

