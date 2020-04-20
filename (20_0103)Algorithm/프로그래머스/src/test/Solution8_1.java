package test;

import java.util.*;
import java.util.stream.Collectors;

public class Solution8_1 {

	public long solution(int a, int b) {

		return sumAtob(Math.min(a, b), Math.max(b, a));
	}

	private long sumAtob(long a, long b) {
		
		// 등차수열의 합 공식 이용 
		// n(n+1) / 2
		return (b - a + 1) * (a + b) / 2;
	}

	public static void main(String[] args) {
		Solution8_1 sol8_1 = new Solution8_1();
		sol8_1.solution(3, 5);

	}
}
