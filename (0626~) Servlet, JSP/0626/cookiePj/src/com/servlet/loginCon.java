package com.servlet;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class loginCon
 */
@WebServlet("/loginCon")
public class loginCon extends HttpServlet {
	
   
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		PrintWriter out = response.getWriter();
		
		String mid = request.getParameter("mID");
		String mpw = request.getParameter("mPW");
				
		
		out.print("<p> id = " + mid + "</p>");
		out.print("<p> pw = " + mpw + "</p>");
		
		Cookie[] cookies=request.getCookies();
		Cookie cookie = null;
		for(Cookie C : cookies) {
			System.out.println("C.getName = " + C.getName() +"C.getValue = "+ C.getValue());
			
			if(C.getName().equals("memberId")) {
				cookie=C;
			}
		}
		
		if(cookie==null) {
			System.out.println("cookie is null");
			cookie= new Cookie("memberId",mid);
		}
		
		response.addCookie(cookie);
		cookie.setMaxAge(60 * 60);; //유효 쿠키 1시간 
		
		response.sendRedirect("loginJsp.jsp");
		
	}

	
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
