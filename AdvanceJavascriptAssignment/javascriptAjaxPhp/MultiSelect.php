<?php
$conn = new mysqli("localhost", "root", "arundb", "classicmodels");
//$category=$_GET['category'];
$category="Sales Rep";
$tql = "select productCode,productName,buyPrice from products where productLine= \"Classic Cars\"";
$result = $conn->query($tql);
 if ($result->num_rows > 0) {
	echo "<b>products details:</b><br/><hr/>";
    while($row = $result->fetch_array(MYSQLI_ASSOC) ) {
        echo " ".$row["productCode"]."   " . $row["productName"]."   ". $row["buyPrice"]. "<br>";
    }
} else {
    echo "Please Enter correct category ";
}
$conn->close();
?>
