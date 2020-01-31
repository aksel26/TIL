package com.javalec.ex;

public class ThreadTest3 implements Runnable {

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
//ThreadName : A, TestNum : 1
//ThreadName : B, TestNum : 0
//=========================
//ThreadName : A, TestNum : 2
//ThreadName : B, TestNum : 1
//=========================
//ThreadName : B, TestNum : 2
//ThreadName : A, TestNum : 3
//=========================
//ThreadName : A, TestNum : 4
//ThreadName : B, TestNum : 3
//=========================
//ThreadName : A, TestNum : 5
//ThreadName : B, TestNum : 4
//=========================
//ThreadName : A, TestNum : 6
//ThreadName : B, TestNum : 5
//=========================
//ThreadName : A, TestNum : 7
//ThreadName : B, TestNum : 6
//=========================
//ThreadName : A, TestNum : 8
//ThreadName : B, TestNum : 7
//=========================
//ThreadName : A, TestNum : 9
//ThreadName : B, TestNum : 8
//=========================
//ThreadName : B, TestNum : 9
//ThreadName : A, TestNum : 10
