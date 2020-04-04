package test;

import java.util.*;
import java.util.stream.Collectors;

public class Solution8 {
	public long solution(int a, int b) {

		long answer = 0;
		if (a <= b) {
			for (int i = a; i <= b; i++) {

				answer += a;
				++a;

			}
		} else if (a > b) {
			for (int i = b; i <= a; i++) {

				answer += b;
				++b;

			}

		}
		System.out.println(answer);
		return answer;
	}

	public static void main(String[] args) {
		Solution8 sol8 = new Solution8();
		sol8.solution(3, 3);
	}
}