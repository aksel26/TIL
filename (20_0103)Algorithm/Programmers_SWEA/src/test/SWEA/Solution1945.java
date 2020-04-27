package test.SWEA;

import java.util.Arrays;
import java.util.Scanner;

class Solution1945 {

	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {

			int[] divisor = { 2, 3, 5, 7, 11 };
			int[] result = new int[divisor.length];
			// 대상 숫자
			int N = sc.nextInt();

			// 나누기 숫자
			int cnt = 0;

			// divisor 배수인 경우

			for (int j = 0; j < divisor.length; j++) {

				if (N % divisor[j] == 0) {

					while (N % divisor[j] == 0) {

						N = N / divisor[j];
						cnt++;

					}
					result[j] = cnt;
				}

			}


			for (int j = 0; j < result.length; j++) {
				System.out.print(result[j]);
			}

		}
	}
}
