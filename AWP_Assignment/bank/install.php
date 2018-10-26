<?php
$servername = "localhost";
$username = "root";
$password = "arundb";
$dbname = "bankdb";

// Create connection
$conn = new mysqli($servername, $username, $password);

// Check connection
if ($conn->connect_error) {
    die("<br/>Connection failed: " . $conn->connect_error);
}
else{
	echo "<br/>connected with database !!!";
}

// Create database
$sql = "CREATE DATABASE $dbname";
if ($conn->query($sql) === TRUE) {
    echo "<br/>Database created successfully";
} else {
    echo "<br/>Error creating database: " . $conn->error;
}


// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("<br/>Connection failed: " . $conn->connect_error);
}
else{ echo "<br/>connected with db";
}


// login table
$sql = "create table login(lid INT(11) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
userName varchar(50) NOT NULL UNIQUE,password varchar(50) NOT NULL,status varchar(50) NOT NULL)";
if ($conn->query($sql) === TRUE) {
    echo " <br/>login table created successfully";
} else {
    echo "<br/>Error creating table: " . $conn->error;
}


$sql="create table account(accNo int(10) not null UNIQUE,customerName varchar(50) not null,
fatherName varchar(50) not null,adhar varchar(100) not null UNIQUE,
address varchar(100) not null, city varchar(100) not null,pin int(10) not null,
contact varchar(15) not null UNIQUE, amount int(100) not null, primary key(accNo));
";
if ($conn->query($sql) === TRUE) {
    echo " <br/>account table created successfully";
} else {
    echo "<br/>Error creating table: " . $conn->error;
}

$conn->close();
?>
