--TEST--
tinyexpr_interp basic test
--SKIPIF--
<?php
if (!extension_loaded("tinyexpression")) print "skip";

?>
--FILE--
<?php
var_dump(tinyexpr_interp("1+1"));

?>
--EXPECT--
float(2)
