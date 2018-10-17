<?php
$servername = "localhost";
$username = "root";
$password = "cdacacts";
$dbname = "jantastore";

$conn = new mysqli($servername, $username, $password, $dbname); 
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 
else{ echo "connected with db";
} 

$uid=$_POST['uid'];
$password=$_POST['password'];
echo $uid;
echo $password;


$tql = "select * from admin where aname='".$uid."' and apass='".$password."'";

$result = $conn->query($tql);


 if ($result->num_rows > 0) {
    // output data of each row
	$row = $result->fetch_array(MYSQLI_ASSOC);
	/*if($uid==$row["aname"]  && $password==$row["apass"]){
		
	}*/
	header("Location:postlogin.html");
		
  /*  while($row = $result->fetch_array(MYSQLI_ASSOC) ) {
        echo "id: " . $row["ID"]. " - Name: " . $row["CountryCode"]. " " . $row["District"]. "<br>";
    }  */
} else {
    echo "<h4>please Enter correct user name or password<h4>";
}
$conn->close();

?>
