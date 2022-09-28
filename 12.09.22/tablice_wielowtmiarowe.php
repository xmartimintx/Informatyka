<?php
 /*

$products = array(
    'paper' => array(
        'copier' => "Do kserokopiarek i uniwersalny",
        'inkjet' => "Do drukarek atramentowych",
        'laser' => "Do drukarek laserowych",
        'photo' => "Papier fotograficzny"),
    'pens' => array(
        'ball' => "Długopisy",
        'hilite' => "Markery przezroczyste",
        'marker' => "Markery zwykłe"),
    'misc' => array(
        'tape' => "Taśmy klejące",
        'glue' => "Kleje",
        'clips' => "Spinacze")
    );


foreach($products as $section => $items)
    foreach($items as $key => $value)
       
        echo "$section: \t $key \t ($value)<br>";
        echo ("<br>");
        echo ("<br>");
        echo ("<br>");
                                                // zadanie

       
        echo $products['paper']['copier'];
        echo ("<br>");
        echo $products['pens']['ball'];
        echo ("<br>");
        echo $products['misc']['tape'];
        echo ("<br>");
       
        
        $products = array(
            'paper' => array(
                'copier' => "Do kserokopiarek i uniwersalny",
                'inkjet' => "Do drukarek atramentowych",
                'laser' => "Do drukarek laserowych",
                'photo' => "Papier fotograficzny"),
            'pens' => array(
                'ball' => "Długopisy",
                'hilite' => "Markery przezroczyste",
                'marker' => "Markery zwykłe"),
            'misc' => array(
                'tape' => "Taśmy klejące",
                'glue' => "Kleje",
                'clips' => "Spinacze")
            );
        echo "<pre>";
    
        foreach($products as $section => $items)
            foreach($items as $key => $value)
                if($key=='copier'){
                    echo "$section: \t $key \t ($value)<br>";
                }
                elseif($key=='ball'){
                    echo "$section: \t $key \t ($value)<br>";
                }
                elseif($key=='tape'){
                    echo "$section: \t $key \t ($value)<br>";
                }
        echo "</pre>";    

*/

    $chessboard = array(
        array('w','s','g','h','k','g','s','w'),
        array('p','p','p','p','p','p','p','p'),
        array(' ',' ',' ',' ',' ',' ',' ',' '),
        array(' ',' ',' ',' ',' ',' ',' ',' '),
        array(' ',' ',' ',' ',' ',' ',' ',' '),
        array(' ',' ',' ',' ',' ',' ',' ',' '),
        array('P','P','P','P','P','P','P','P'),
        array('W','S','G','H','K','G','S','W'),
    );

    echo "<pre>";
    foreach($chessboard as $row)
    
    {

        foreach($row as $piece)
            
            echo "$piece ";
        echo "<br>";

    }
    echo "<br>";
    echo "<br>";
    echo "<br>";

    if($chessboard[6][3]=="P"){
        $chessboard[6][3]=" ";
        $chessboard[5][3]="P";
    }

    foreach($chessboard as $row)
    
    {

        foreach($row as $piece)
            
            echo "$piece ";
        echo "<br>";

    }

    echo "</pre>";


?>