package com.javalec.ex;

public class ThreadTest2 extends Thread {
	@Override
	public void run() {
	System.out.println(Thread.currentThread().getName());
	for(int i = 0 ;i<10; i++) {
		System.out.println(i);
		try {
			Thread.sleep(500);
		} catch (Exception e) {
			// TODO: handle exception
		}
	}
	
	}
}
