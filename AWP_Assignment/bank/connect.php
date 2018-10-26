<?php
$servername = "localhost";
$username = "root";
$password = "arundb";
$dbname = "bankdb";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname); 
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 
else{ //echo "connected with $dbname";
}  

// sql to create table
$sql = "use $dbname";
if ($conn->query($sql) === TRUE) {
    //echo " $dbname is selected successfully";
} else {
    echo "Error creating table: " . $conn->error;
}
?>
