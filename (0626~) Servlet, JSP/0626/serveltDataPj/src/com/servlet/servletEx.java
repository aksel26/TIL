package com.servlet;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;


public class servletEx extends HttpServlet {
	private static final long serialVersionUID = 1L;

  
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String adminId = getServletConfig().getInitParameter("adminId");
		String adminPw = getServletConfig().getInitParameter("adminPw");
		
		PrintWriter out =  response.getWriter();
		
		out.print("<p> adminId : " + adminId + "</p>");
		out.print("<p> adminPw : " + adminPw + "</p>");
		
		String imgDir = getServletContext().getInitParameter("imgDir");
		
		out.print("<p> imgDir : " + imgDir + "</p>");
		
		
		getServletContext().setAttribute("connectedUser", "user1");
		getServletContext().setAttribute("connectedIP", "123.213.213");
		
		
	}

	
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
