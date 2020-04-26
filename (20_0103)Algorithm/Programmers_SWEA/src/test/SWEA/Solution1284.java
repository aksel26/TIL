package test.SWEA;

import java.util.Scanner;

class Solution1284 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {

			int ApriceP = sc.nextInt();
			int BpriceQ = sc.nextInt();
			int RlimitR = sc.nextInt();
			int extraS = sc.nextInt();
			int usedW = sc.nextInt();

			// A 회사

			int A = ApriceP * usedW;

			// B회사
			int B = 0;
			if (RlimitR < usedW) {
				B = (usedW - RlimitR) * extraS + BpriceQ;
			} else if (RlimitR >= usedW) {
				B = BpriceQ;
			}

			if (A > B) {
				System.out.println("#" + i + " " + B);
			} else if (A < B) {
				System.out.println("#" + i + " " + A);
			}
		}

	}
}
