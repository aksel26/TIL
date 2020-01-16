package bf;

import java.util.Scanner;

public class BruteForce {
	static int bfMatch(String txt, String pat) {
		int pt = 0; // txt커서
		int pp = 0; // pat커서

		while (pt != txt.length() && pp != pat.length()) {
			if (txt.charAt(pt) == pat.charAt(pp)) {
				pt++;
				pp++;
			} else {
				pt = pt - pp + 1;
				pp = 0;
			}

		}

		if (pp == pat.length()) {
			return pt - pp;
		}
		return -1;

	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("텍스트1 : ");
		String s1 = scn.next();

		System.out.println("패턴:");
		String s2 = scn.next();

		int idx = bfMatch(s1, s2);

		if (idx == 1) {
			System.out.println("패턴이 없다 .");

		} else {

			// 일치하는 문자 바로 앞까지의 길이를 구한다.

			int len = 0;
			for (int i = 0; i < idx; i++) {
				len += s1.substring(i, i + 1).getBytes().length;
			}
			len += s2.length();

			System.out.println((idx + 1) + " 번째 문자부터 일치합니다.");
			System.out.println("텍스트 : " + s1);
			System.out.printf(String.format("패턴 : %%%ds\n", len), s2);
		}

	}

}


//	출력

//	텍스트1 : 
//	abcdefghiii
//	패턴:
//	hiii
//	8 번째 문자부터 일치합니다.
//	텍스트 : abcdefghiii
//	패턴 :        hiii
