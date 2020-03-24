package com.dtoPj.dto;

import java.util.ArrayList;

public class bookDTO {

	String bookId;
	String bookName;
	String bookLoc;

	public bookDTO(String bookId, String bookName, String bookLoc) {
		this.bookId = bookId;
		this.bookName = bookName;
		this.bookLoc = bookLoc;

	}

	public String getBookId() {
		return bookId;
	}

	public String getBookName() {
		return bookName;
	}

	public String getBookLoc() {
		return bookLoc;
	}
	
	

}
