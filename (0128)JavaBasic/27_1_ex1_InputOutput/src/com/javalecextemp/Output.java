package com.javalecextemp;

import java.io.FileOutputStream;
import java.io.OutputStream;

public class Output {
	public static void main(String[] args) {
		try {
			OutputStream os = new FileOutputStream("/Users/hxmkim/Documents/GitHub/TIL/(0128)JavaBasic/27_1_ex1_InputOutput/src/com/javalecextemp/outputexample.txt");
			String str = "¿À´ÃÀº ´þ½À´Ï´Ù";
			byte[] bs =str.getBytes();
			os.write(bs);
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
	}
}
