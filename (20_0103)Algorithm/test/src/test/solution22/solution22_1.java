package test.solution22;

import java.util.*;

public class solution22_1 {
	public long solution(long n) {
		long answer = 0;

		int len = Long.toString(n).split("").length;

		String[] arr = new String[len];
		arr = Long.toString(n).split("");

		String tmp = "";
		Arrays.sort(arr, Collections.reverseOrder());

		for (int i = 0; i < len; i++) {
			tmp += (long) Integer.parseInt(arr[i]);
		}

		answer = Long.parseLong(tmp);

//		ReversOrder를 사용하기 위해 int to Integer 하는 작업
//			Integer[] Iinteger = Arrays.stream(digits).boxed().toArray(Integer[]::new);
//			Arrays.sort(Iinteger, Collections.reverseOrder());

		System.out.println(answer);
		return answer;
	}

	public static void main(String[] args) {
		solution22_1 sol22 = new solution22_1();
		sol22.solution(8293028);

	}

}