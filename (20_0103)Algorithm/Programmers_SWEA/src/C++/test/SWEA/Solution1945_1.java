package test.SWEA;

import java.util.Arrays;
import java.util.Scanner;

class Solution1945_1 {

	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {
			int n = sc.nextInt();
			int a = 0;
			int b = 0;
			int c = 0;
			int d = 0;
			int e = 0;

			while (n % 2 == 0) {
				n /= 2;
				a++;
			}
			;
			while (n % 3 == 0) {
				n /= 3;
				b++;
			}
			;
			while (n % 5 == 0) {
				n /= 5;
				c++;
			}
			;
			while (n % 7 == 0) {
				n /= 7;
				d++;
			}
			;
			while (n % 11 == 0) {
				n /= 11;
				e++;
			}
			;

			System.out.format("#%d %d %d %d %d %d \n", i, a, b, c, d, e);

		}
	}
}
