package test;

import java.util.*;
import java.util.stream.Collectors;

public class Solution9 {
	public String solution(String s) {

		String answer = "";
		int oddCenter = s.length() / 2;
		int evenCenter = s.length() / 2 - 1;

		if (s.length() % 2 == 1) {
			String result = s.substring(oddCenter, oddCenter + 1);

			answer = result;
		} else if (s.length() % 2 == 0) {
			String result = s.substring(evenCenter, evenCenter + 2);
			System.out.println(result);
			answer = result;
		}

		return answer;
	}

	public static void main(String[] args) {
		Solution9 sol8 = new Solution9();

	}

}