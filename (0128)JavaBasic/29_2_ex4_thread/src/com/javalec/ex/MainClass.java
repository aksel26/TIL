package com.javalec.ex;

public class MainClass {

	public static void main(String[] args) {
		
		ThreadTest threadTest0 = new ThreadTest();
		ThreadTest threadTest1 = new ThreadTest();
		
		Thread thread0 = new Thread(threadTest0, "A");
		Thread thread1 = new Thread(threadTest1, "B");
		thread0.start();
		thread1.start();
		
		System.out.println(Thread.currentThread().getName());
		System.out.println("MainClass");
		
	}
	
}
