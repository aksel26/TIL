package test.solution15;

import java.util.ArrayList;

public class solution15 {
	public String solution(String s) {
		String answer = "";
		String[] data = s.split("");
		int cnt = 0;

		for (int i = 0; i < data.length; i++) {
			if (data[i].equals("")) {
				cnt = 0;
			} else {
				if (cnt % 2 == 0) {
					data[i] = data[i].toUpperCase();
					cnt++;
				} else {
					data[i] = data[i].toLowerCase();
					cnt++;
				}
			}
			answer += data[i];

		}
		System.out.println(answer);
		return answer;
	}

	public static void main(String[] args) {
		solution15 sol15 = new solution15();
		sol15.solution("hello world");

	}
}
