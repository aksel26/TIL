package algo_prac;

import java.util.Scanner;

public class JudgeSign {
		
	public static void main(String[] args) {
		Scanner stdIn = new Scanner(System.in);
		System.out.println("정수 입력");
		int n = stdIn.nextInt();
		
		if(n>0)
			System.out.println("양수");
		else if(n<0)
			System.out.println("음수");
		else
			System.out.println("0");

	}

}

//조건연산자
//	a?b:c 
//		a가 TRUE 이면 b 
//			FALSE 면 c를 반환
//	a= (x>y)? x:y;
//	System.out.println((c==0)? "c는 0 " : "c는 0이 아님");