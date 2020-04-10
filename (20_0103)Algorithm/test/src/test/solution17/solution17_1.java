package test.solution17;

import java.util.Arrays;
import java.util.List;
import java.util.stream.Stream;

public class solution17_1 {
	public boolean solution(int x) {
		boolean answer = true;

		String x1 = Integer.toString(x);
		String[] x2 = x1.split("");
		
		
		int[] x3 = new int[x2.length];

		for (int i = 0; i < x2.length; i++) {
			x3[i] = Integer.parseInt(x2[i]);
		}

		if (x % Arrays.stream(x3).sum() == 0) {
			answer = true;
		} else
			answer = false;

		return answer;

	}

	public static void main(String[] args) {
		solution17_1 sol17 = new solution17_1();
		sol17.solution(14);
		// 33= false
		
		
	

	}
}
