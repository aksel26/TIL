package BOJ2839;

import java.util.Arrays;
import java.util.Scanner;

public class Q2839 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		int weight = scn.nextInt(); // 설탕 무게

		if (weight % 5 == 0) {
			System.out.println(weight / 5);
			return;

		} else {
			int quotient = weight / 5;
			for (int i = quotient; i > 0; i--) {
				int temp = weight - (i * 5);

				if (temp % 3 == 0) {
					System.out.println(i + (temp / 3));
					return;
				}
			}
		}
		if (weight % 3 == 0) {
			System.out.println(weight / 3);
		} else {
			System.out.println(-1);
		}
		return;

	}

}
