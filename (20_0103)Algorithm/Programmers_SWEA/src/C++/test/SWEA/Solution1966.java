package test.SWEA;

import java.util.Arrays;
import java.util.Scanner;

class Solution1966 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {
			int length = sc.nextInt();
			int[] nums = new int[length];

			for (int j = 0; j < nums.length; j++) {

				nums[j] = sc.nextInt();
				if (nums.length < 4) {
					continue;
				}

			}
			System.out.print("#" + i + " ");
			Arrays.sort(nums);
			for (int k = 0; k < nums.length; k++) {
				System.out.print(nums[k] + " ");
			}
			System.out.println();

		}

	}
}
