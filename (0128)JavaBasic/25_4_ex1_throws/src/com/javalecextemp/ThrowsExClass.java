package com.javalecextemp;

public class ThrowsExClass {
		
		public ThrowsExClass() { // 생성자
		actionC(); // 생성자를 생성하자 마자 actionC를 실행
	}
	
	private void actionA() throws Exception {
		System.out.println("actionA");
		
		int[] iArr = {1, 2, 3, 4};
		
		System.out.println(iArr[4]); // 인덱스 값이 존재하지 않음 예외 발생 try catch를 해야하지만 throws를 해주었기 때문에
									 //actionB로 간다. 
		
		System.out.println("actionAA");
	} 
	
	private void actionB() {
		System.out.println("actionB");
		
		try {
			actionA();
		} catch (Exception e) {
			System.out.println("예외는 여기서 처리 할께요.^^"); 
			System.out.println(e.getMessage());
		}
		
		System.out.println("actionBB");
	}
	 
	private void actionC() {
		System.out.println("actionC");
		actionB();
		System.out.println("actionCC");
	}
}
