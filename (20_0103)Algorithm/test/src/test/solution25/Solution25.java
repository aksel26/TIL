package test.solution25;

import java.util.*;

public class Solution25 {
	public String solution(String phone_number) {
		String answer = "";

		String[] splitN = phone_number.split("");

		for (int i = splitN.length - 5; i >= 0; i--) {
			splitN[i] = "*";

		}
		for (int i = 0; i < splitN.length; i++) {
			answer += splitN[i];
		}

		return answer;
	}

	public static void main(String[] args) {
		Solution25 sol24 = new Solution25();
		sol24.solution("025622023");

	}
}
