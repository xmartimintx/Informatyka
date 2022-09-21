<?php

    
    $ocena =54;

    if($ocena<=39)
    {
    echo("Ocena przy ".$ocena. "% to: 1");
    }

    else if($ocena>=40 && $ocena <=54)
    {
        echo("Ocena przy ".$ocena. "% to: 2");
    }

    else if($ocena>=55 && $ocena <=69)
    {
        echo("Ocena przy ".$ocena. "% to: 3");
    }


    else if($ocena>=70 && $ocena <=84)
    {
        echo("Ocena przy ".$ocena. "% to: 4");
    }


    else if($ocena>=40 && $ocena <=54)
    {
        echo("Ocena przy ".$ocena. "% to: 5");
    }




echo "<br>";
echo "<br>";
echo "<br>";


for($x=-3;$x<4;$x=$x+1){

    if($x==0){
        continue;
    }
    echo($x);
    echo "<br>";

}


?>
