package BOJ2523;


import java.util.Scanner;

public class Q2523 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int N = scn.nextInt();

		for (int i = 1; i <= 2 * N - 1; i++) {

			if (i <= N) {
				for (int j = 0; j < i; j++) {
					System.out.print("*");
				}
				System.out.println();
			}

			else {
				for (int j = 0; j < 2 * N - i; j++) {
					System.out.print("*");
				}
				System.out.println();
			}

		}
	}

}

//	4
//	*
//	**
//	***
//	****
//	***
//	**
//	*
