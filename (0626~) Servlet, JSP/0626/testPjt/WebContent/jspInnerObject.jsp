<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>


<%  String adminId; 
	String adminPw;
	
%>

<% 
adminId = config.getInitParameter("adminId");
adminPw= config.getInitParameter("adminPw");
%>

	<P> adminId : <%=adminId %> </P>
	<p> adminPw : <%=adminPw %> </p>

	</body>
</html>