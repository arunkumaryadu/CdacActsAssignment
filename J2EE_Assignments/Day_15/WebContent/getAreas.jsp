<%@page import="java.util.ArrayList"%>
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
<%  
ArrayList<String> l=(ArrayList<String>)request.getAttribute("areas");
if(l!=null){
for(String str:l){
%>
<%=
str
%>
<%}} %>
<form action="Reception" method="post">
<input type="number" name="pincode" placeholder="enter pinCode here" />
<input type="hidden" name="why" value="getarea"/>
<input type="submit" />

</form >
</body>
</html>
<!-- 15.	Given an pincode, in a page called getareas.jsp , implement the architecture like this.
a.	Pincode is 3, areas are A,B and C
b.	Pincode is 4, areas are D,E and F
 -->