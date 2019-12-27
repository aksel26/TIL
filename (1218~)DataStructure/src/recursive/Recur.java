package recursive;

import java.util.Scanner;

public class Recur {
	static void recur(int n) {
		if (n > 0) {
			recur(n - 1);
			System.out.println(n);
			recur(n - 2);
		}
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("정수를 입력하세요");
		int num = scn.nextInt();

		recur(num);
	}

}


//	정수를 입력하세요
//	4
//	1
//	2
//	3
//	1
//	4
//	1
//	2
