<!DOCTYPE html>
    <head>
        <title>Zastosowanie funkcji do obsługi tablic</title>
        <meta charset="utf-8">
    </head>
    <body>

        <?php

            $zdanie="A co to, Nowe komendy?";
            $liczby = array(3,7,10,15,17,25,50,55,77,85,$zdanie);

            echo "TABLICA 1";
            echo "<br>";
            echo "<br>";
            $x=0;

            foreach($liczby as $item){
                echo ($item.", ");
                ++$x;
            }
            echo "<br>";
            echo("Ilosć elementów w tablicy 1: ");

            echo count($liczby);
            echo "<br>";
            echo "<br>";
            echo "TABLICA 2";
            echo "<br>";
            echo "<br>";

            $string = explode(' ', "To zdanie jest zmienną string");
            print_r($string);
            echo "<br>";
            echo("Ilosć elementów w tablicy 2: ");
            echo count($string);
            echo "<br>";
            echo "----------------------------------------------------";
            echo "<br>";

            // sortowanie tab1 --------------------------------------------
            sort($liczby, SORT_NUMERIC);
            echo "<br>";
            echo("Tablica 1 POSORTOWANE ROSNĄCO: "); //ros tab1 
            echo "<br>";
            $x=0;

            foreach($liczby as $item){
                echo ($item.", ");
                ++$x;
            }
            
            echo "<br>";
            echo "<br>";


            rsort($liczby, SORT_NUMERIC);
            echo "<br>";
            echo("Tablica 1 POSORTOWANE MALEJĄCO: "); //mal tab1
            echo "<br>";
            $x=0;

            foreach($liczby as $item){
                echo ($item.", ");
                ++$x;
            }
            echo "<br>";
            echo "----------------------------------------------------";

            // sortowanie tab2 -----------------------------------------------
            echo "<br>";

            sort($string, SORT_STRING);
            echo "<br>";
            echo("Tablica 2 POSORTOWANE ROSNĄCO: "); //ros tab2 
            echo "<br>";
            $x=0;

            foreach($string as $item){
                echo ($item.", ");
                ++$x;
            }
            
            echo "<br>";
            echo "<br>";


            rsort($string, SORT_STRING);
            echo "<br>";
            echo("Tablica 2 POSORTOWANE MALEJĄCO: "); //mal tab2
            echo "<br>";
            $x=0;

            foreach($string as $item){
                echo ($item.", ");
                ++$x;
            }

            echo "<br>";
            echo "----------------------------------------------------";
            echo "<br>";
            echo "<br>";

            // tasowanie tab1 -----------------------------------------------
            echo("Ilosć elementów w tablicy 1 PRZETASOWANE: ");
            shuffle($liczby);
            $x=0;

            foreach($liczby as $item){
                echo ($item.", ");
                ++$x;
            }
            
            echo "<br>";

             // tasowanie tab2 -----------------------------------------------
             echo("Ilosć elementów w tablicy 2 PRZETASOWANE: ");
             shuffle($string);
             $x=0;
 
             foreach($string as $item){
                 echo ($item.", ");
                 ++$x;
             }
             
             echo "<br>";

             // CURRENT tab 1 -----------------------------------------------
             echo "<br>";
             echo "----------------------------------------------------";
             echo "<br>";

             echo("Zerowy element tablicy 1 to: ");
             echo current($liczby) . "<br>";// 0 el


             echo("2 element tablicy 1 to: ");
             next($liczby); // dalej
             next($liczby); //dalej
             echo current($liczby) . "<br>"; //wyswietl 2 el
             echo "<br>";

             echo("0 elemnet tablicy 1 PO POWROCIE: ");
             reset($liczby); // powrot
             echo current($liczby) . "<br>"; //wyswietl po powroie





             // CURRENT tab 2 -----------------------------------------------
             echo "<br>";
             echo "----------------------------------------------------";
             echo "<br>";

             echo("Zerowy element tablicy 2 to: ");
             echo current($string) . "<br>";// 0 el

             echo("2 element tablicy 2 to: ");
             next($string); // dalej
             next($string); //dalej
             echo current($string) . "<br>"; //wyswietl 2 el
             echo "<br>";

             echo("0 elemnet tablicy 2 PO POWROCIE: ");
             reset($string); // powrot
             echo current($string) . "<br>"; //wyswietl po powroie



        ?>
    </body>
</html>