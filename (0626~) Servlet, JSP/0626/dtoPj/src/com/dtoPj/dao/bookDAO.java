package com.dtoPj.dao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;

import javax.servlet.jsp.el.ELParseException;

import com.dtoPj.dto.bookDTO;

public class bookDAO {

	String driver = "oracle.jdbc.driver.OracleDriver";
	String url = "jdbc:oracle:thin:@localhost:1521:xe";
	String id = "hr";
	String pw = "oracle";

	public bookDAO() {

		try {
			Class.forName(driver);
		} catch (Exception e) {
			e.printStackTrace();
		}

	}

	public ArrayList<bookDTO> select() {
		ArrayList<bookDTO> list = new ArrayList<bookDTO>();
		Connection con = null;
		PreparedStatement pstmt = null;
		ResultSet rs = null;
		
		
		try {
			
			con = DriverManager.getConnection(url,id,pw);
			String sql = "SELECT * FROM book";
			pstmt = con.prepareStatement(sql);
			
			rs = pstmt.executeQuery();
			
			while(rs.next()) {
				String bookId = rs.getString("book_id");
				String bookName = rs.getString("book_name");
				String bookLoc = rs.getString("book_loc");
				
				bookDTO bookDTO = new bookDTO(bookId, bookName, bookLoc);
				
				list.add(bookDTO);
			}
			
		} catch (Exception e) {
			e.printStackTrace();
		}finally {
			try {
				if(rs!=null) rs.close();
				if(pstmt!=null) pstmt.close();
				if(con!=null) con.close();
			} catch (Exception e2) {
				e2.printStackTrace();
			}
		}
		return list;

	}

}
