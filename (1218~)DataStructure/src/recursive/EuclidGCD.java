package recursive;

import java.util.Scanner;

public class EuclidGCD {
	static int gcd(int x , int y) {
		if (y==0) {
			return x;
			
		}else {
			return gcd(y, x%y);
		}
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner (System.in);
		System.out.println("두 정수의 최대공약수를 구합니다.");
		System.out.println("정수를 입력하세요");
		System.out.println("a:");
		int a = scn.nextInt()	;
		System.out.println("b:");
		int b = scn.nextInt();
		
		System.out.println("두 정수의 최대공약수는 " + gcd(a,b) + "입니다.");
		
	}

}


//	출력
	
//	두 정수의 최대공약수를 구합니다.
//	정수를 입력하세요
//	a:
//	4
//	b:
//	10
//	두 정수의 최대공약수는 2입니다.
