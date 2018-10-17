<?php
$conn = new mysqli("localhost", "root", "cdacacts", "classicmodels");
$eno=$_POST['eno'];
$tql = "select jobTitle from  employees where employeeNumber ='".$eno."';";
// "select * from city where Name='".$uid."' and District='".$password."'";
$result = $conn->query($tql);


 if ($result->num_rows > 0) {
    // output data of each row
    while($row = $result->fetch_array(MYSQLI_ASSOC) ) {
        echo "Job Title: " . $row["jobTitle"]. "<br>";
    }
} else {
    echo "Please Enter correct employee Number";
}
$conn->close();
?>