--TEST--
tinyexpression_exception basic test
--SKIPIF--
<?php
if (!extension_loaded("tinyexpression")) print "skip";

?>
--FILE--
<?php
try {
    tinyexpression_interpret("(1+1");
} catch (Exception $e) {
    echo 'Exception: ' . $e->getMessage();
}

?>
--EXPECT--
Exception: Failed to evaluate expression
