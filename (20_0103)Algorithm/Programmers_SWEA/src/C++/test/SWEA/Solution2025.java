package test.SWEA;

import java.util.Scanner;

class Solution2025 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);

		int num = sc.nextInt();
		int result = 0;
		for (int i = 0; i <= num; i++) {
			result += i;

		}
		System.out.println(result);

	}
}
