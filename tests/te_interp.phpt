--TEST--
te_interp basic test
--FILE--
<?php
var_dump(te_interp("1+1"));

?>
--EXPECT--
string(11) "2"

