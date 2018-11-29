<%@page import="java.util.List"%>
<%@page import="Assignment.Account"%>
<%@page import="Assignment.Sales"%>
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
String type="";
Object obj=request.getAttribute("type");
List<Integer> l=null;







if(obj!=null){
	if(obj instanceof Sales){
		Sales s =(Sales) obj;
		type=s.getType();
		l=s.getL();
	}
	else{
		Account a=(Account)obj;
		type=a.getType();
		l=a.getL();
	}
	
}
%>


<form action="Reception" method="post">
<input type="text" name="deptid" placeholder="Enter Department Id here"/>
<input type="text" name="deptname" value="<%= type %>"/>
<input type="hidden" name="why" value="getdeptname"/>
<input type="submit" />
</form>
<span>
<%if(l!=null){
	for(int empno :l ){
	%><br/>
	<%=
	empno
	%>
<%}} %>

</span>
</body>
</html>
<!-- In deptid.jsp we have two textboxes , one for deptid and other for deptname and submit button.
10.	When user types deptid as odd number, then deptname should appear as accounts, in other cases deptid should appear as sales.

 -->