package test.SWEA;

import java.util.Scanner;

class Solution1970 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {

			// 금액 입력
			int money = sc.nextInt();
			int[] units = new int[8];


			if (money / 10000 < 5) {
				units[1] = money / 10000;
			} else if (money / 10000 >= 5) {
				units[0] = money / 50000;
			}

			if ((money % 5000) / 1000 < 5) {
				units[2] = 0;
				units[3] = (money % 5000) / 1000;
			} else if ((money % 5000) / 1000 >= 5) {
				units[2] = (money % 5000) / 1000;
				units[3] = (money % 5000) - 5000;
			}

			if ((money % 500) / 100 < 5) {
				units[5] = (money % 500) / 100;
			}

			if ((money % 1000) / 100 >= 5) {
				units[4] = 1;
			}

			if ((money % 100) / 10 >= 5) {
				units[6] = 1;
				units[7] = (money % 100) / 10 - 5;
			}

			if ((money / 10 < 5)) {
				units[7] = (money / 10);
			} else if ((money / 10 >= 5)) {
				units[6] = 1;
			}

			System.out.println("#" + i + " ");

			for (int j = 0; j < units.length; j++) {
				System.out.print(units[j] + " ");
			}
			System.out.println();

		}

	}

}




//	1
//	54890
//	#1 
//	1 0 0 4 1 3 1 4 