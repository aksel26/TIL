package test.SWEA;

import java.util.Scanner;

class Solution2072 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {
			double total = 0;
			for (int j = 0; j < 10; j++) {
				int num = sc.nextInt();
				total += num;

			}
			System.out.println("#" + i + " " + Math.round(total / 10));

		}

	}
}
