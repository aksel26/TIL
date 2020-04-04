package test;

import java.util.Arrays;
import java.util.Scanner;

class Solution5 {
	public String solution(int n) {

		String answer = "";

		for (int j = 1; j <= n; j++) {
			if (j % 2 == 1) {
				answer += "수";
			} else {
				answer += "박";
			}

		}
		System.out.println(answer);
		return answer;
	}

	public static void main(String[] args) {
		Solution5 sol5 = new Solution5();
		sol5.solution(5);

	}
}
