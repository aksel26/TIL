package test.SWEA;

import java.util.Scanner;

class Solution1989 {
	public static void main(String args[]) throws Exception {

		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {
			String[] input = sc.next().split("");
			if (input.length >= 3 && input.length <= 10) {
				int cnt = 0;
				// 길이가 짝수일 경우 무조건 -1
				if (input.length % 2 == 1) {
					for (int j = 0; j <= (input.length - 1) / 2; j++) {

						if (input[j].equals(input[(input.length - 1) - j])) {
							cnt++;
							if (cnt == input.length / 2 + 1) {
								System.out.println("#" + i + " " + "1");
							}

						} else {
							System.out.println("#" + i + " " + "0");
							break;
						}
					}

				} else {
					for (int j = 0; j <= input.length / 2; j++) {
						if (input[j].equals(input[(input.length - 1) - j])) {
							cnt++;
							if (cnt == input.length / 2 + 1) {
								System.out.println("#" + i + " " + "1");
							}
						} else {
							System.out.println("#" + i + " " + "0");
							break;
						}

					}

				}
			} else {
				System.out.println("#" + i + " " + "0");
			}

		}

	}
}
