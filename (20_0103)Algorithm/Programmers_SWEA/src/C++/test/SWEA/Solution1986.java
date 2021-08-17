package test.SWEA;

import java.util.Scanner;

class Solution1986 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {

			int num = sc.nextInt();

			int result = 0; // 총합

			for (int j = 1; j <= num; j++) {
				if (j % 2 == 0) {
					result = result - j;
				} else if (j % 2 == 1) {
					result += j;
				}
				
			}

			System.out.println("#"+i+" " + result);

		}

	}
}
