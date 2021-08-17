package test.solution17;

import java.util.Arrays;

public class solution17 {
	public boolean solution(int x) {
		boolean answer = true;

		int dec = x % 10;
		int one = x / 10;
		int answer1 = x % (dec + one);

		answer = answer1 == 0 ? true : false;

		return answer;
	}

	public static void main(String[] args) {
		solution17 sol17 = new solution17();
		sol17.solution(14);
		// 33= false

	}
}
