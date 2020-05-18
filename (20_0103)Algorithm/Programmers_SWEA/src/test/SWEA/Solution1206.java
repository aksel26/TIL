package test.SWEA;

import java.util.Scanner;

public class Solution1206 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		for (int T = 1; T < 10; T++) {

			int home = scn.nextInt();
			int countsNum[] = new int[home];
			for (int j = 0; j < home; j++) {

				countsNum[j] = scn.nextInt();
			}

			int count = 0;

			for (int i = 2; i < home - 2; i++) {

				int max = Math.max(Math.max(countsNum[i - 2], countsNum[i - 1]),
						Math.max(countsNum[i + 1], countsNum[i + 2]));
				if (countsNum[i] > max)
					count += countsNum[i] - max;

			}

			System.out.format("#%d %d\n", T, count);

		}

	}
}
