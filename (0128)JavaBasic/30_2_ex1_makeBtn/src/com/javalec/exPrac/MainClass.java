package com.javalec.exPrac;

import java.awt.Dimension;

public class MainClass {

	
	public static void main(String[] args) {
		MakeBtn btn = new MakeBtn();
//		btn.pack(); //버튼이 가질 수 있는 최소의 사이즈로 자동맞춤
		btn.setSize(new Dimension(200,200));
		btn.setVisible(true);
	try {
		Thread.sleep(2000);
	} catch (Exception e) {
		
		
	}
	btn.setVisible(false);
	
	btn.dispose(); //자원 해제
	
	try {
		Thread.sleep(2000);
	} catch (Exception e) {
		// TODO: handle exception
	}
	
	System.exit(0); //완전히 프로세스를 종
	}
}
