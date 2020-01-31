package com.javalec.ex;

public class ThreadTest implements Runnable {

	@Override
	public void run() {
		System.out.println(Thread.currentThread().getName());
		System.out.println("ThreadTest");

		for (int i = 0; i < 10; i++) {
			System.out.println("i = " + i);
			try {
				Thread.sleep(500);// 쉬고 바로 시작을 할 지 말 지는 모름.
			} catch (Exception e) {
				// TODO: handle exception
			}

		}
	}

}
