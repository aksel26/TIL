package test.SWEA;

import java.util.Scanner;

class Solution2001 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {

			// 배열크기
			int N = sc.nextInt();

			// 파리채 범위
			int M = sc.nextInt();

			int box[][] = new int[N][N];

			for (int j = 0; j < N; j++) {
				for (int k = 0; k < N; k++) {

					box[j][k] = sc.nextInt();
				}
			}

			int sum = 0;
			int max = 0;

			for (int j = 0; j < N - M + 1; j++) {

				for (int k = 0; k < N - M + 1; k++) {
					sum = 0;
					for (int l = 0; l < M; l++) {
						for (int l2 = 0; l2 < M; l2++) {
							sum += box[j + l][k + l2];

						}

					}
					if (sum > max)
						max = sum;

				}
			}

			System.out.format("#%d %d\n", i, max);
		}

	}
}
