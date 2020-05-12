package test.solution30;

import java.util.*;

class Solution30 {

	public String solution(int[] numbers) {
		String answer = "";

		String temp = "";

//		최댓값
		int max = 0;

		String str_num[] = new String[numbers.length];

//		배열 숫자 조합
		for (int i = 0; i < numbers.length; i++) {

			str_num[i] = String.valueOf(numbers[i]);
//			temp += Integer.toString(numbers[i]);
		}

		Arrays.sort(str_num, new Comparator<String>() {
			@Override
			public int compare(String o1, String o2) {

				return (o2 + o1).compareTo(o1 + o2);
			}
		});

		if (str_num[0].startsWith("0")) {
			answer += "0";
		} else {
			for (int j = 0; j < str_num.length; j++) {
				answer += str_num[j];

			}
		}

//			Integer로 변환
//		for (int k = 0; k < num.length; k++) {
//
//			num[k] = Integer.parseInt(temp);
//		}
//
//		for (int i = 0; i < num.length; i++) {
//
//			System.out.println(i + " 번째 : " + num[i]);
//		}

//			최댓값 입력
//			if (max < num) {
//				max = num;
//				answer = Integer.toString(max);
//
//			}
		System.out.println(answer);

		return answer;
	}

	public static void main(String[] args) {
		
		
		

		Solution30 sol30 = new Solution30();

		int numbers[] = { 3, 30, 34, 5, 9 };
		sol30.solution(numbers);
	}
}