package recursive;

import java.util.Scanner;

import Stack_Queue.IntStack;

public class Recur {
	static void recur(int n) {
		if (n > 0) {
			recur(n - 1);
			System.out.println(n);
			recur(n - 2);
		}
	}

	// 꼬리재귀를 제거함.
	static void recur2(int n) {
		if (n > 0) {
			recur(n - 1);
			System.out.println("n");

			// 여가
			n = n - 2;
		}
	}

	static void recur3(int n) {
		IntStack s = new IntStack(n);
		while (true) {
			if (n > 0) {
				s.push(n);
				n = n - 1;
				continue;
			}
			if (s.isEmpty() != true) {
				n = s.pop();
				System.out.println(n);
				n = n - 2;
				continue;
			}
			break;
		}
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("정수를 입력하세요");
		int num = scn.nextInt();

		recur3(num);
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
