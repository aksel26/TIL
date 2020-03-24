
<%
	request.setCharacterEncoding("UTF-8");
%>

<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<%!String mName;
	String mNickName;%>


	<%
		mName = request.getParameter("name");
		mNickName = request.getParameter("nickName");
	%>

	이름 :
	<%=mName%></br> 별명 :
	<%=mNickName%>
</body>
</html>