package test.SWEA;

import java.util.Scanner;

class Solution1954 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {
			int num = sc.nextInt();

			for (int j = 1; j <= num; j++) {
				
				for (int k = 1; k <= num; k++) {
					System.out.print( k + " ");
				}
				System.out.println();
				for (int k2 = num * 2 ; k2 > num * 2 -3; k2--) {
					System.out.print(k2 + " ");
				}
				System.out.println();
			

		}

		}
	}
}
