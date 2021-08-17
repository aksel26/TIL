package test.SWEA;

import java.util.Arrays;
import java.util.Scanner;

public class Solution1984 {
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		int T = scn.nextInt();

		for (int i = 1; i <= T; i++) {

			int numbers[] = new int[10];

			for (int j = 0; j < numbers.length; j++) {
				numbers[j] = scn.nextInt();

			}

			Arrays.sort(numbers);
			double sum = 0;

			for (int j = 0; j < numbers.length - 1; j++) {
				sum += numbers[j + 1];
			}
			sum = sum - numbers[numbers.length - 1];

			double average = sum / 8;
			int result = (int) Math.round(average);
			System.out.println("#" + i + " " + result);

		}
	}
}
