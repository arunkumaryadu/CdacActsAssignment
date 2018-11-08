// create connection
var mysql = require('mysql'); /*

var con = mysql.createConnection({
  host: "localhost",
  user: "root",
  password: "arundb"
});

con.connect(function(err) {
  if (err) throw err;
  console.log("Connected!");
  con.query("CREATE DATABASE mydb", function (err, result) {
  if (err) throw err;
  console.log("Database created");
  });
});
*/
var con = mysql.createConnection({
  host: "localhost",
  user: "root",
  password: "arundb",
  database: "mydb"
});

con.connect(function(err) {
  if (err) throw err;
  console.log("Connected!");
  var sql = "CREATE TABLE students (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(255),course VARCHAR(255),age INT(5))";
  con.query(sql, function (err, result) {
   if (err) throw err;
   console.log("Table created");
 });

 var sql = "INSERT INTO students (name,course,age) VALUES ?";
  var values = [
    ['Arun Kumar', 'Dac',22],
    ['hemant', 'Desd',25],
    ['aditya', 'Dac',25],
    ['Manish', 'Dac',29],
    ['Anand', 'Dac',36],
    ['Ujjawal', 'Dac',26],
    ['ajay', 'Desd',30],
    ['jon', 'desd',32]
  ];
  con.query(sql, [values], function (err, result) {
    if (err) throw err;
    console.log("Number of records inserted: " + result.affectedRows);
  });
});
