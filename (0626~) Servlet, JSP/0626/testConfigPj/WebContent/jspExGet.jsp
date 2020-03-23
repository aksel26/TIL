<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

<%!
	String badGateWay;
	String granted;
%>


<% badGateWay = (String)application.getAttribute("badGateWay");
granted = (String)application.getAttribute("granted");%>

<p>badGateWay : <%= badGateWay %></p>
<p>granted : <%= granted %></p>

</body>
</html>