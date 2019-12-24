package arrays;

import java.util.Scanner;

public class CardConRev {

	static int CardConR(int x, int r, char[] d) {
		int digits = 0;
		String dChar = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

		
		// 전위형 증가 연산자 & 후위형 증가 연산자
//			전위형 증가 연산자 (++a)
//				: 식 전체 평가 전에 피연산자의 값을 증가. 
//			후위형 증가 연산자 (a++)
//				: 전체 식 평가 후에 피연산자의 값을 증가.
		do {
			d[digits++] = dChar.charAt(x % r);
			x/=r;
		} while (x != 0);
		return digits;

	}

	
	
	
//	메인메서드는 기수변환을 대화식으로 수행함.
	
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int no;
		int cd;
		int dno;
		int retry;
		char[] cno = new char[32];
		System.out.println("10진수의 기수를 변환합니다;");

		do {
			do {
				System.out.println("음이 아닌 정수");
				no = scn.nextInt();

			} while (no < 0);
			do {
				System.out.println("어떤 진수로변환할깡요.");
				cd = scn.nextInt();

			} while (cd < 2 || cd > 36);

			dno = CardConR(no, cd, cno);
			System.out.println(cd + "진수로는 ");
			for (int i = dno - 1; i >= 0; i--) {
				System.out.print(cno[i]);
			}
			System.out.println("입니다");

			System.out.println("한번더 ? 1.예  2.아니오 ");
			retry = scn.nextInt();

		} while (retry == 1);

	}

}

//	출력
//	10진수의 기수를 변환합니다;
//	음이 아닌 정수
//	43
//	어떤 진수로변환할깡요.
//	16
//	16진수로는 
//	2B입니다
//	한번더 ? 1.예  2.아니오 
//	1
//	음이 아닌 정수
//	23
//	어떤 진수로변환할깡요.
//	2
//	2진수로는 
//	10111입니다
//	한번더 ? 1.예  2.아니오 
//	2


//String 클래스
//꼭 기억해야할  메서드
//1.char charAt(int i)
//2. int length()
//3. boolean equals(String s)