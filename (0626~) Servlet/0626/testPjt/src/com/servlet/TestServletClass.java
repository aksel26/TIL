package com.servlet;

import java.io.IOException;

import javax.annotation.PostConstruct;
import javax.annotation.PreDestroy;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class TestServletClass
 */
@WebServlet("/tsc")
public class TestServletClass extends HttpServlet {
	
	
	//service 메서드 --> 사용 거의 안함
	
	
	// servlet 실행 부분
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		System.out.println("---doGet()---");
		response.getWriter().append("Served at: ").append(request.getContextPath());
			
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		doGet(request, response);
	}
	
	@PostConstruct
	private void funPc() {
		System.out.println("---@PostConstructor---");

	}
	
	@Override
	public void init() throws ServletException {
		System.out.println("---init()---");
	}
	
	@Override
	public void destroy() {
		System.out.println("--destroy()--");
	}
	@PreDestroy
	private void preDes() {
		System.out.println("---@PreDestroy---");

	}

}
