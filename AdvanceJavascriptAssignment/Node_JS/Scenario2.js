var express = require('express');
var mysql = require('mysql');
var app = express();
app.use(express.static('public'));


app.get('/', function (req, res) {
   console.log("Got a GET request for the home");
   res.sendFile( __dirname +"/Scenario2.html" );
});

app.get('/display_employee_details', function (req, res) {

    // database connect
    var con = mysql.createConnection({
    host: "localhost",
    user: "root",
    password: "arundb",
    database: "mydb"
    });

    console.log(req.query.id);
    var id=req.query.id;

    // select employee
    con.connect(function(err) {
    if (err) throw err;
    con.query("SELECT * FROM students WHERE id =?",[id], function (err, result, fields) {
        if (err) throw err;
        console.log(result);
        if(result.length>0){
		res.end(JSON.stringify(result));
        }
        else{
              res.end(JSON.stringify(result));
        }

    });
    });
    });


app.get('/update_employee_details', function (req, res) {

    // database connect
    var con = mysql.createConnection({
    host: "localhost",
    user: "root",
    password: "arundb",
    database: "mydb"
    });


    var id1=req.query.id;
	var name1=req.query.name;
	var course1=req.query.course;
	var age1=req.query.age;


    // select employee
    con.connect(function(err) {
    if (err) throw err;
	     con.query('UPDATE students SET name = ?,course =?,age = ? WHERE id = ?',[name1,course1,age1,id1], function (err, result, fields) {
        if (err) throw err;
        console.log(result);
		res.end(JSON.stringify({"status":"Successfully Updated!!!!"}));

    });
    });
    });
var server = app.listen(8081, function () {
     console.log("server is running on port : 8081");
})
