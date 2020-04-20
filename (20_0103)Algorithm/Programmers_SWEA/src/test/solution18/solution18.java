package test.solution18;

import java.util.*;

public class solution18 {
	public int solution(int n) {
		int answer = 0;

		String x1 = Integer.toString(n);

		String x2[] = x1.split("");

		int[] x3 = new int[x2.length];

		for (int i = 0; i < x3.length; i++) {
			x3[i] = Integer.parseInt(x2[i]);

		}

		answer = Arrays.stream(x3).sum();

		return answer;
	}

	public static void main(String[] args) {
		solution18 sol17 = new solution18();
		sol17.solution(987);
		// 33= false

	}
}
