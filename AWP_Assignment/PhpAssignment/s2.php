<?php
$conn = new mysqli("localhost", "root", "cdacacts", "classicmodels");
$jt=$_POST['jt'];
$tql = "select firstName,lastName from  employees where jobTitle ='".$jt."';";
// "select * from city where Name='".$uid."' and District='".$password."'";
$result = $conn->query($tql);


 if ($result->num_rows > 0) {
    // output data of each row
	echo "<b>employee names:</b><br/><hr/>";
    while($row = $result->fetch_array(MYSQLI_ASSOC) ) {
        echo " " . $row["firstName"]." ". $row["lastName"]. "<br>";
    }
} else {
    echo "Please Enter correct employee Number";
}
$conn->close();
?>