package test.solution23;

import java.util.*;

public class Solution23 {
	public int[] solution(long n) {
		int[] answer = {};

		String str = "";
		str = Long.toString(n); // String 자리수 split

		StringBuffer sb = new StringBuffer(str);
		sb.reverse();
		String str2[] = null;
		str2 = sb.toString().split("");


		
		// string[] -> int[] 배열에 넣기
		
		
		// 방법1. for문 사용
		answer = new int[str2.length];
		for (int i = 0; i < str2.length; i++) {
			answer[i] = Integer.parseInt(str2[i]);
		}
		
		// 방법2. stream 사용
		answer = Arrays.stream(str2).mapToInt(Integer::parseInt).toArray();

		
		
		return answer;
	}

	public static void main(String[] args) {
		Solution23 sol23 = new Solution23();
		sol23.solution(12345);

	}
}
