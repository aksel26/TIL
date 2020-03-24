package com.dtoPj.dao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;

//
import javax.naming.Context;
import javax.naming.InitialContext;
import javax.servlet.jsp.el.ELParseException;
import javax.sql.DataSource;

import com.dtoPj.dto.bookDTO;

public class bookDAO {

	
//	======== 1. connection pool을 이용하게 되면 필요 없게 된다. ======== 
//	String driver = "oracle.jdbc.driver.OracleDriver";
//	String url = "jdbc:oracle:thin:@localhost:1521:xe";
//	String id = "hr";
//	String pw = "oracle";
	
//	2. dataSourc를 사용한다.
	DataSource dataSource;

	
	
	public bookDAO() {

		try {
//	======== 3. connection pool을 이용하게 되면 필요 없게 된다. ======== 
//			Class.forName(driver);
			
//	==== 컨테이너로부터 커넥션 풀을 찾음 ====
			Context context = new InitialContext();
			dataSource = (DataSource)context.lookup("java:comp/env/jdbc/oracle11g");
			
			
			
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
			
			
//	======== 4. connection pool을 이용하게 되면 필요 없게 된다. ======== 
//			con = DriverManager.getConnection(url,id,pw);
			con = dataSource.getConnection();
			
			
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
