<?php

require("connect.php");
$accNo=$_POST["accNo"];
$customerName=$_POST["customerName"];
$fatherName=$_POST["fatherName"];
$adhar=$_POST["adhar"];
$address=$_POST["address"];
$city=$_POST["city"];
$pin=$_POST["pin"];
$contact=$_POST["contact"];
$amount=$_POST["amount"];


$tql = "select * from  account where accNo = '".$accNo."'";
$result = $conn->query($tql);
 if ($result->num_rows > 0) {
   echo "Please enter different account number"
    }
  else {
    
    	$tqll = "insert into account(accNo,customerName,fatherName,adhar,address,city,pin,contact,amount) values($accNo,\"$customerName\",
      \"$fatherName\",\"$adhar\",\"$address\",\"$city\",$pin,\"$contact\",$amount)";
   	  if ($conn->query($tqll) === TRUE) {
      echo "inserted Successfully";
      }
      else {
      echo "not inserted';
    }
   
}

$conn->close();
?>
