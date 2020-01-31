package com.javalec.ex;

public class MainClass {

	public static void main(String[] args) {
		
//		방법 1 : runnable 인터페이스
		
//		ThreadTest threadTest = new ThreadTest();
//		
//		Thread thread = new Thread(threadTest, "A");  //Thread(Runnable Target, String name) 스레드의 이름을 정할 수 있다.
//		
//		thread.start(); //start메서드는 run메서드 호출을 한다.
//		
//		System.out.println(Thread.currentThread().getName());
		
	
//		방법 2 : Thread 상속
		
//		ThreadTest2 threadTest2 = new ThreadTest2();
//		threadTest2.setName("B");
//		threadTest2.start();
//		System.out.println(Thread.currentThread().getName());
	
		
		
//		1객체 n스레드
//		ThreadTest3 threadTest3= new ThreadTest3();
//		Thread thread0 = new Thread(threadTest3,"A");
//		Thread thread1 = new Thread(threadTest3,"B");
//		
//		thread0.start();
//		thread1.start();
//		
//		System.out.println(Thread.currentThread().getName());
		
		
//		1객체 1스레드
		ThreadTest4 threadTest0= new ThreadTest4();
		ThreadTest4 threadTest1= new ThreadTest4();
		
		Thread thread0 = new Thread(threadTest0,"A");
		Thread thread1 = new Thread(threadTest1,"B");
		
		thread0.start();
		thread1.start();
		
		
		System.out.println(Thread.currentThread().getName());
		
		
		
		
	}

	
	
	
	
}



//	출력



//	main	//현재 구동되고 있는 스레드의 이름이 출력.
//	A	//threadTest를 만들때 A라는 이름을 부여해 줍.

//main과 A의 순서
//main 스레드에서는 runnable이 실행되고 있는 것과는 별개로 쭈루룩 진행됨.
//main 이 찍히고, start메서드가 진행되고, A가 찍힘

//	ThreadTest
		
//	i = 0		// 스레드에 0.5씩 텀을 줌.
//	i = 1
//	i = 2
//	i = 3
//	i = 4
//	i = 5
//	i = 6
//	i = 7
//	i = 8
//	i = 9