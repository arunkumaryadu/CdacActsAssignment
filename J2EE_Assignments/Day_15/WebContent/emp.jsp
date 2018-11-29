
<%@page import="basic.Employee"%>
<%@page import="java.util.List"%>

<%@ page language="java" contentType="text/html; charset=ISO-8859-1" pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>

<%

Object o = request.getAttribute("message");
o = o != null ? o : "";


Object o1 = request.getAttribute("eo");
Employee e =(Employee) o1;
e = e != null ? e : new Employee(0,0,0);








%>

<h1> <%= o  %></h1>

<form action="fca" method="post">
<Br/> empno <input type="text" name="empno" value="<%= e.getEmpno()%>"/>
<input type="hidden" name="why" value="gete"/>
<input type="submit" value="getemployee"/>

</form>
<form action="fca" method="post">
<input type="hidden" name="empno" value="<%= e.getEmpno()%>"/>
<Br/> mobilenumber <input type="text" name="mno" value="<%= e.getDeptid()%>"/>
<Br/> deptid <input type="text" name="deptid" value="<%= e.getMobileno() %>"/>
<input type="hidden" name="why" value="update"/>
<input type="submit" value="update"/>

</form>




<%
if(e.getEmpno() !=0)
{
	
	List<String> cities = e.getCities();
	for(String x :cities)
	{
	
%>

	<Br/> <%= x %>

<%
	}
}
%>


</body>
</html>