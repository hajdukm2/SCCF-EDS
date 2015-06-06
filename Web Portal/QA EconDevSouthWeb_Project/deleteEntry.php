<?php
    
    require ("QA_Server_HelperFunctions.php");

    //Get the entry's id we want to delete
    $idToDelete = $_POST['id'];
    
    //Connect to Database
    $db_connect = mysql_connect($databaseHost, $databaseUser, $databasePass) or die(mysql_error());
    
    if (isset($db_connect)){
        echo "Update: Connecting to the Database is Successful.\n";

        //Select the correct database we want to talk to
        mysql_select_db("Econ_Dev_South", $db_connect);
        
        $query = "DELETE FROM Environment_Issues WHERE id=".$idToDelete;
        
        //Execute Query
        $queryResult = mysql_query($query, $db_connect) or die (mysql_error());

        if (isset($queryResult)){
                echo "Update: Environment Issue Entry was Successuflly Deleted from the Database!..\n";
        }
        else{
                echo "Error Update: Detetion was Unsuccessful!\n";
        }
    }    
?>

