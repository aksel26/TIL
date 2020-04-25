package test.SWEA;

import java.util.Scanner;

class Solution2007 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {

			String[] input = sc.next().split("");

			// 최대길이 30, 마디 최대길이 10이므로 30/3
			for (int j = input.length / 3; j > 0; j--) {
//				if (input[j - 1].equals(input[0])) {

//					System.out.println("#" + i + " " + (j - 1));
				if (input[(j - 1) / 2].equals(input[0])) {
					System.out.println("#" + i + " " + (j - 1) / 2);
					break;

				} else if (input[j - 1].equals(input[0])) {

					if (input[(j - 1) / 3].equals(input[0])) {
						System.out.println("#" + i + " " + (j - 1) / 3);
						break;
					}
					System.out.println("#" + i + " " + (j - 1));
					break;
				}
			}
		}

//		}

	}
}
