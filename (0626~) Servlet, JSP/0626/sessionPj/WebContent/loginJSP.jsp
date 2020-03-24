<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

	<%
		//	기존의 session의 유무를 판단하기 위함
		if (session.getAttribute("memberId") != null) {
			response.sendRedirect("loginOK.jsp");

		}
	%>


	<form action="loginCon" method="post">

		ID : <input type="text" name="mId"></br> PW : <input
			type="password" name="mPw"></br> <input type="submit"
			value="login"></input>

	</form>

</body>
</html>