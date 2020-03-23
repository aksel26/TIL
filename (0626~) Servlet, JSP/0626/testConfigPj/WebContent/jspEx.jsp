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
String adminId; 
String adminPw;

String imgDir;
String testServerIP;
String realServerIP;
%>

<% 
adminId = config.getInitParameter("adminId");
adminPw = config.getInitParameter("adminPw");
%>

	<P> adminId : <%=adminId %> </P>
	<p> adminPw : <%=adminPw %> </p>

<%

imgDir= application.getInitParameter("imgDir");
testServerIP = application.getInitParameter("testServer");
realServerIP = application.getInitParameter("realServerIP");

%>

<%
application.setAttribute("badGateWay", "reject");
application.setAttribute("granted", "good");
%>

<P> imgDir : <%=imgDir %> </P>
<p> testServerIP : <%=testServerIP %> </p>
<p> realServerIP : <%=realServerIP %> </p>


<button onclick="location.href='jspExGet.jsp' "> result</button>
	</body>
</html>