package recursive;

import java.util.Scanner;

public class Factorial {
	static int factorial(int n) {
		if (n> 0 ) {
			return n * factorial(n-1);
			
		}else {
			return 1;
			
		}
		
	}


public static void main(String[] args) {
	Scanner scn = new Scanner(System.in)	;
	System.out.println("숫자를 입력하세요");
	int num = scn.nextInt();
	System.out.println(num + "의 팩토리얼은 " + factorial(num) +" 입니다");
}
}


//	출력
	
//	숫자를 입력하세요
//	4
//	4의 팩토리얼은 24 입니다