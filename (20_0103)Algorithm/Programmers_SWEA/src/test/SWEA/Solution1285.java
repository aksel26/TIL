package test.SWEA;

import java.util.Arrays;
import java.util.Scanner;

class Solution1285 {

	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {

			// 던진 사람 수
			int ppl = sc.nextInt();

			//인원 수 제한
			if (ppl >= 1 && ppl <= 1000) {

				int distance[] = new int[ppl];

				// 유효거리 제한
				for (int j = 0; j < distance.length; j++) {
					if (distance[j] >= -100000 && distance[j] <= 100000) {
						distance[j] = sc.nextInt();
					}

				}

				int cnt = 0;
				int result[] = new int[ppl];

				for (int k = 0; k < result.length; k++) {
					result[k] = 0 - distance[k];

					result[k] = Math.abs(result[k]);

					if (result[k] == result[0]) {
						cnt++;
					}
				}

				Arrays.sort(result);

				System.out.println("#" + i + " " + result[0] + " " + cnt);

			}
		}

	}
}

========================================================================

//		2
//		2
//		-100 100
//		#1 100 2
//		3
//		-5 -1 3
//		#2 1 1
		
