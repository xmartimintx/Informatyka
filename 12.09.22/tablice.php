<?php

/*
w tablicy numerycznej 3 tytulu ksiazek i wysiwetlic je w odwrotnej kolejnosci


$ksiazki=array("Tytuł_1","Tytuł_2","Tyruł_3");

for($x=3;$x>-1;$x=$x-1){

    echo ($ksiazki[$x]."<br>"); 

}

w tablicy asocjacyjnej wszystko pozniej ostatni i pierwszy element 
*/


$tablica['ksiazka0'] = "tytuł0";
$tablica['ksiazka1'] = "tytuł1";
$tablica['ksiazka2'] = "tytuł2";
$tablica['ksiazka3'] = "tytuł3";

$x=0;
foreach($tablica as $item){
    echo "$x: $item <br>";
    $x=$x+1;
}

echo "<br>";

echo $tablica['ksiazka0']."<br>"; 
echo $tablica['ksiazka3']."<br>";






?>