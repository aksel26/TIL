package test.SWEA;

import java.util.Arrays;
import java.util.Scanner;

class Solution1204 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;

		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {
			
			int Tcase = sc.nextInt();

//			점수
			int score[] = new int[1000];

//			그릇
			int nums[] = new int[1000];

//			횟수
			int cnt[] = new int[1000];

			for (int j = 0; j < score.length; j++) {
				int idx = sc.nextInt();
				nums[j] = idx;
				score[idx] = idx;
			}

			int count = 0;

			for (int j = 0; j < score.length; j++) {
				if (score[nums[j]] == nums[j]) {
					count++;

					cnt[nums[j]] += count;

				}

				count = 0;
			}

			int max = cnt[0];
			int maxIndex = 0;
			for (int k = 1; k < cnt.length; k++) {
				if (cnt[k] >= max) {
					max = cnt[k];
					maxIndex = k;
				}
			}

			System.out.println("#" + Tcase + " " + maxIndex);
		}

	}

}
