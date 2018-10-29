<?php 

require("connect.php");  

$itemName=$_POST["itemName"]; 
$quantity=$_POST["quantity"]; 
$price=$_POST["price"]; 
$slt1=$_POST["categoryname"]; 

$tql = "UPDATE item SET  quantity='".$quantity."',price='".$price."', categoryname='".$slt1."' where itemName = '".$itemName."'";
if ($conn->query($tql) === TRUE) {
    echo " successfully updated";
} else {
    echo "Please try again after some time: " . $conn->error;
}   

$conn->close(); 
?>
