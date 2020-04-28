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
			int sum[] = new int[Math.abs(resultLength)];
//			int sum[] = new int[10];

			
			for (int j = 0; j < A.length; j++) {
				A[j] = sc.nextInt();

			}
			for (int j = 0; j < B.length; j++) {
				B[j] = sc.nextInt();

			}

			int idx= 0;
			int temp = 0;
			
//			 합 배열
			
			for (int j = 0; j <= A.length; j++) {
					
				// 곱
				for (int k = idx, l = 0; k<= A.length; l++,k++) {

					temp += A[l] * B[k];
					System.out.println(A[l]);
				}
				
				idx++;
				sum[j] = temp;
				System.out.println(sum[j]);
				
			}

//			for (int j = 0; j < sum.length; j++) {
//				System.out.println(sum[j]);
//			}

		}
	}
}
