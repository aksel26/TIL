package test;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

class Solution12 {
	public int solution(int n) {

		int answer = 0;

		if (n == 1)
			return 0;

		for (int i = 2; i <= n; i++) {
			boolean isPrime = true;
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					isPrime = false;
				}
			}
			if (isPrime) {
				answer++;

			}

		}

		return answer;
	}

	public static void main(String[] args) {
		Solution12 sol12 = new Solution12();

		sol12.solution(10);

	}
}