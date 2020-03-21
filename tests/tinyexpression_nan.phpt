--TEST--
tinyexpression_nan basic test
--SKIPIF--
<?php
if (!extension_loaded("tinyexpression")) print "skip";

?>
--FILE--
<?php
$nan = tinyexpr_interp("(1+1");
var_dump($nan, is_nan($nan));

?>
--EXPECT--
float(NAN)
bool(true)
