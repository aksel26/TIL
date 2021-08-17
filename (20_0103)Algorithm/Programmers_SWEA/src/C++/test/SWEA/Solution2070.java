package test.SWEA;
import java.util.Scanner;

class Solution2070 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int j = 1; j <= T; j++) {
			int num = sc.nextInt();
			int num2 = sc.nextInt();
			if (num > num2) {
				System.out.println("#" + j + " " + ">");
				continue;
			} else if (num < num2) {
				System.out.println("#" + j + " " + "<");
				continue;
			} else if (num == num2) {
				System.out.println("#" + j + " " + "=");
				continue;
			}
		}

	}

}
