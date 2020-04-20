package test.solution24;

import java.util.*;

public class Solution24 {
	public long solution(long n) {
		long answer = 0;
		int inte = 0;
		@SuppressWarnings("deprecation")
		Long lg = new Long(n);

		double num = lg.doubleValue();

		num = Math.sqrt(num) == (int) (Math.sqrt(num)) ? Math.pow(Math.sqrt(num) + 1, 2) : -1;

		answer = (long) num;

		return answer;
	}

	public static void main(String[] args) {
		Solution24 sol24 = new Solution24();
		sol24.solution(121);

	}
}
