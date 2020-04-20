package test.solution22;

import java.util.*;

public class solution22 {
	public long solution(long n) {
		long answer = 0;

		int nm = (int) (n);

		// int to String (CharAt을 사용하기 위해)
		String str = Integer.toString(nm);

		int[] digits = new int[str.length()];

		for (int i = 0; i < str.length(); i++) {
			digits[i] = str.charAt(i) - '0';
		}

		for (int i = 0; i < digits.length; i++) {
			for (int j = i + 1; j < digits.length; j++) {
				if (digits[i] <= digits[j]) {
					int temp = digits[j];
					digits[j] = digits[i];
					digits[i] = temp;
				} else {
					break;
				}
			}

		}

		String str2 = "";
		for (int i = 0; i < digits.length; i++) {
			str2 += Integer.toString(digits[i]);

		}
		answer = Long.parseLong(str2);

		System.out.println(answer);

//		ReversOrder를 사용하기 위해 int to Integer 하는 작업
//			Integer[] Iinteger = Arrays.stream(digits).boxed().toArray(Integer[]::new);
//			Arrays.sort(Iinteger, Collections.reverseOrder());

		return answer;
	}

	public static void main(String[] args) {
		solution22 sol22 = new solution22();
		sol22.solution(8293028);

	}

}