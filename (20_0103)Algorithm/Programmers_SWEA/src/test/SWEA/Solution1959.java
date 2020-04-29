package test.SWEA;

import java.util.Arrays;
import java.util.Scanner;

class Solution1959 {

	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {

			// 배열 A
			int[] A = new int[sc.nextInt()];
			// 배열 B
			int[] B = new int[sc.nextInt()];

			// 연산결과
			int resultLength = A.length - B.length;
			int sum[] = new int[Math.abs(resultLength) + 1];

			for (int j = 0; j < A.length; j++) {
				A[j] = sc.nextInt();

			}
			for (int j = 0; j < B.length; j++) {
				B[j] = sc.nextInt();

			}

			int idx = 0;
			int temp = 0;

//			 합 배열
			if (A.length < B.length) {
				for (int j = 0; j < sum.length; j++) {

					// 곱
					for (int k = idx, l = 0; k < j + A.length; l++, k++) {

						temp += A[l] * B[k];
					}

					idx++;
					sum[j] = temp;
					temp = 0;

				}

				Arrays.sort(sum);

				System.out.println("#" + i + " " + sum[sum.length - 1]);
			} else {

				for (int j = 0; j < sum.length; j++) {

					// 곱
					for (int k = idx, l = 0; k < j + B.length; k++, l++) {
						temp += A[k] * B[l];
					}

					idx++;
					sum[j] = temp;
					temp = 0;
				}

				Arrays.sort(sum);
				System.out.println("#" + i + " " + sum[sum.length - 1]);

			}

		}
	}
}
