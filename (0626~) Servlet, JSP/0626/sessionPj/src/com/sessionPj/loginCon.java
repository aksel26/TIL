
package com.sessionPj;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

@WebServlet("/loginCon")
public class loginCon extends HttpServlet {

	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		PrintWriter out = response.getWriter();

		String mId = request.getParameter("mId");
		String mPw = request.getParameter("mPw");

		out.print("mid : " + mId);
		out.print("mPw : " + mPw);

		HttpSession Session = request.getSession(); // 해당 인터페이스에 담는다

		Session.setAttribute("memberId", mId);

		response.sendRedirect("loginOK.jsp");

	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {

		doGet(request, response);
	}

}
