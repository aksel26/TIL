package algo_prac;

import java.util.Scanner;


//2자리 정수로 제한하는 프로그램

public class Digits {

	public static void main(String[] args) {
//		하나의 입구와 출구를 가진 구성요소만을 
//			계층적으로 배치해 구성하는 방법  : 구조적 프로그래밍
		
//		1. 순차
//		2. 선택
//		3. 반복 
		
//		3종류의 제어 흐름 사용
		
		Scanner digits= new Scanner(System.in);
		int no;
		
		System.out.println("2자리 정수 입력");
		
		do {
			System.out.println("2자리를 입력해주세요");
			System.out.println("입력 : ");
			no=digits.nextInt();
			
		
		//논리 연산자 
			// 단축평가 : 연산자에 따라서 앞쪽이 TRUE 거나 FALSE 면 뒤에 조건은 판단을 하지 않는 것
		}while(no<10||no>99); //계속조건 , //종료조건 : while(!(no>=10&&no<=99));
		
		// + 드모르간 법칙
		// (a>10||a<99) = !(a<=10 && a>=99)
		
		
		
		System.out.println("변수 no의 값은 : " + no + " 가 되었습니다.");
		

	}

}
