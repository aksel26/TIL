package com.dtoPj;

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.dtoPj.dao.bookDAO;
import com.dtoPj.dto.bookDTO;

@WebServlet("/bs")
public class bookServlet extends HttpServlet {
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		response.setContentType("text/html; charset=UTF-8");
		
		PrintWriter out = response.getWriter();

		
//	=========	DAO로 넣은 후 주석 처리  =========
		
//		String driver = "oracle.jdbc.driver.OracleDriver";
//		String url = "jdbc:oracle:thin:@localhost:1521:xe";
//		String id = "hr";
//		String pw = "oracle";
//		
//		Connection con = null;
//		Statement stmt = null;
//		ResultSet res = null;
//		
//		try {
//			Class.forName(driver);
//			con = DriverManager.getConnection(url,id,pw);
//			stmt = con.createStatement();
//			String sql = "select * from book";
//			res = stmt.executeQuery(sql);
//			
//			while(res.next()) {
//				String bookId = res.getString("book_id");
//				String bookName = res.getString("book_name");
//				String bookLoc = res.getString("book_loc");
//				
//				out.println("bookId : " + bookId + "</br>");
//				out.println("bookName : " + bookName+ "</br>");
//				out.println("bookLoc : " + bookLoc);
//				
//				
//			}
//		} catch (Exception e) {
//			e.printStackTrace();
//		}finally {
//			try {
//				if(res!=null) {
//					res.close();
//				}
//				if(stmt!=null) stmt.close();
//				if(con!=null) con.close();
//			} catch (Exception e2) {
//				e2.printStackTrace();
//			}
//		}
		
		bookDAO bookDAO = new bookDAO();
		ArrayList<bookDTO> list = bookDAO.select();
		
		for (int i = 0; i < list.size(); i++) {
			bookDTO dto = list.get(i);
			String bookId = dto.getBookId();
			String bookName = dto.getBookName();
			String bookLoc = dto.getBookLoc();
			
			out.println("bookId : " + bookId +" , ");
			out.println("bookName : " + bookName +" , ");
			out.println("bookLoc : " + bookLoc +" , ");
		}
		
		
		
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		doGet(request, response);
	}

}
