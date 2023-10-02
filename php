<?php

$FILE = fopen("fileDaLeggere.txt", "r") or die("Unable to open file!");

$testo = fread($FILE,filesize("fileDaLeggere.txt"));

fclose($FILE);

$array = yaml_parse($testo);

$testojson = json_encode($array, JSON_PRETTY_PRINT);

echo $testojson;


?>

