package com.javalec.ex;

public class MainClass {

	
	public static void main(String[] args) {
		
		ThreadTest threadTest = new ThreadTest();
		threadTest.setName("A");
		threadTest.start();
		
		System.out.println(Thread.currentThread().getName());
		System.out.println("MainClass");
	}
		
	
	
}
