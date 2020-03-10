<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

<%! int num = 10; %>

<%
	if(num>0){
%>

	<p>num>0</p>
<%
}else{
%>

<p>num<=0</p>

<%
} 
%>

<!--표현식 태그  -->
<h3>num is <%= num %></h3>

</body>
</html>