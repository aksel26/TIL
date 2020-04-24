package test.SWEA;
import java.util.Scanner;

class Solution2029 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int test_case = 1; test_case <= T; test_case++) {

			for (int i = 1; i <= T; i++) {
				int num = sc.nextInt();
				int div = sc.nextInt();

				int result = num / div;
				int quotient = num % div;

				System.out.println("#" + i + " " + result + " " +quotient);
			}
				
		}
	}
}