<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
<!--  below reading the notice board  -->

<%
//scriplet -- java code
Object y = request.getAttribute("k1");
y = y != null ? y : "";



%>


<!--  expression to print a variable value , = shoudl finally get a variable name -->
<h1> <%= y %> </h1>
login

<form action="fca" method="post">
<Br/> accontno <input type="text" name="acno" value=""/>
<Br/> pin <input type="text" name="pin" value=""/>
<input type="hidden" name="why" value="login"/>
<input type="submit" value="Sign In"/>
</form>
</body>
</html>