package com.javalecextemp;

import java.io.FileInputStream;
import java.io.InputStream;

public class Input {

	public static void main(String[] args) {
		try {
				InputStream is = new FileInputStream("/Users/hxmkim/Documents/GitHub/TIL/(0128)JavaBasic/27_1_ex1_InputOutput/src/com/javalecextemp/example");
				
				while(true) {
					int i = is.read();
					System.out.println("데이터 : "+i);
					if(i==-1) {
						break;
					}
				}
		}catch(Exception e ) {
			System.out.println(e.getMessage());
		}
		

	}

}


//	출력

//	바이트형으로 가져옴
	
//	데이터 : 191
//	데이터 : 192
//	데이터 : 180
//	데이터 : 195
//	데이터 : 192
//	데이터 : 186
//	데이터 : 32
//	데이터 : 179
//	데이터 : 175
//	데이터 : 190
//	데이터 : 190
//	데이터 : 176
//	데이터 : 161
//	데이터 : 32
//	데이터 : 195
//	데이터 : 228
//	데이터 : 189
//	데이터 : 192
//	데이터 : 180
//	데이터 : 207
//	데이터 : 180
//	데이터 : 217
//	데이터 : 46
//	데이터 : -1
