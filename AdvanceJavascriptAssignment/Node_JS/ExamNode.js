var express = require('express');
var mysql = require('mysql');
var app = express();
app.use(express.static('public'));


app.get('/', function (req, res) {
   console.log("Got a GET request for the home");
   res.sendFile( __dirname +"/ExamAngular.html" );
});

app.get('/display_students_list', function (req, res) {

    // database connect
    var con = mysql.createConnection({
    host: "localhost",
    user: "root",
    password: "arundb",
    database: "mydb"
    });

    // select employee
    con.connect(function(err) {
    if (err) throw err;
    con.query("SELECT * FROM students", function (err, result, fields) {
        if (err) throw err;
        console.log(JSON.stringify(result));
        res.end(JSON.stringify(result));
        });
    });
});

// insert student detaiils
app.get('/add_student_details', function (req, res) {
    // database connect
    var con = mysql.createConnection({
    host: "localhost",
    user: "root",
    password: "arundb",
    database: "mydb"
    });

	  var name1=req.query.name;
	  var course1=req.query.course;
  	var age1=req.query.age;

    con.connect(function(err) {
    if (err) throw err;
	     con.query('insert into students(name,course,age) values(?,?,?)',[name1,course1,age1], function (err, result, fields) {
        if (err) throw err;
        console.log(result);
		    res.end(JSON.stringify({"status":"Successfully inserted!!!!"}));

    });
    });
    });

// Update student detaiils

app.get('/show_student_details_by_id', function (req, res) {
    // database connect
    var con = mysql.createConnection({
    host: "localhost",
    user: "root",
    password: "arundb",
    database: "mydb"
    });

    console.log(req.query.id);
    var id=req.query.id;

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

app.get('/update_student_details', function (req, res) {

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

        con.connect(function(err) {
        if (err) throw err;
    	     con.query('UPDATE students SET name = ?,course =?,age = ? WHERE id = ?',[name1,course1,age1,id1], function (err, result, fields) {
            if (err) throw err;
            console.log(result);
    		res.end(JSON.stringify({"status":"Successfully Updated!!!!"}));

        });
        });
        });


// Delete student detaiils
app.get('/delete_student_details', function (req, res) {
    // database connect
    var con = mysql.createConnection({
    host: "localhost",
    user: "root",
    password: "arundb",
    database: "mydb"
    });

    console.log(req.query.id);
    var id=req.query.id;

    con.connect(function(err) {
    if (err) throw err;
    con.query("SELECT * FROM students WHERE id ="+id, function (err, result, fields) {
        if (err) throw err;
        console.log(result.length);
        if(result.length>0){

                // delete employee
                con.query("DELETE FROM students WHERE id ="+id+"", function (err, result, fields) {
                if (err) throw err;
                res.end(JSON.stringify('{"status":1}'));
                });
        }
        else{
               res.end(JSON.stringify('{"status":0}'));
        }

    });
    });
    });

var server = app.listen(8081, function () {
     console.log("server is running on port : 8081");
})
