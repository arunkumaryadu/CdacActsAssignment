var express = require('express');
var mysql = require('mysql');
var app = express();
app.use(express.static('public'));


app.get('/', function (req, res) {
   console.log("Got a GET request for the home");
   res.sendFile( __dirname +"/Scenario1.html" );
});

app.get('/display_employee', function (req, res) {

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



app.get('/remove', function (req, res) {

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
