package com.javalec.ex;

public class ThreadTest4 implements Runnable {
	int testNum = 0;

	@Override
	public void run() {
		for (int i = 0; i < 10; i++) {

			if (Thread.currentThread().getName().contentEquals("A")) {
				System.out.println("=========================");
				testNum++;
			}

			System.out.println("ThreadName : " + Thread.currentThread().getName() + ", TestNum : " + testNum);

			try {
				Thread.sleep(500);
			} catch (Exception e) {
			}

		}

	}

}


//main
//=========================
//ThreadName : B, TestNum : 0
//ThreadName : A, TestNum : 1
//=========================
//ThreadName : A, TestNum : 2
//ThreadName : B, TestNum : 0
//=========================
//ThreadName : A, TestNum : 3
//ThreadName : B, TestNum : 0
//=========================
//ThreadName : B, TestNum : 0
//ThreadName : A, TestNum : 4
//=========================
//ThreadName : A, TestNum : 5
//ThreadName : B, TestNum : 0
//=========================
//ThreadName : B, TestNum : 0
//ThreadName : A, TestNum : 6
//=========================
//ThreadName : A, TestNum : 7
//ThreadName : B, TestNum : 0
//=========================
//ThreadName : A, TestNum : 8
//ThreadName : B, TestNum : 0
//=========================
//ThreadName : A, TestNum : 9
//ThreadName : B, TestNum : 0
//=========================
//ThreadName : A, TestNum : 10
//ThreadName : B, TestNum : 0
