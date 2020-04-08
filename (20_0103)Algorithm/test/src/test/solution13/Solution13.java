package test.solution13;

public class Solution13 {
	boolean solution(String s) {

		boolean answer = true;
		int countP = 0;
		int countY = 0;

		for (int i = 0; i < s.length(); i++) {
			if (s.charAt(i) == 'p' || s.charAt(i) == 'P') {
				countP++;

			}
			if (s.charAt(i) == 'y' || s.charAt(i) == 'Y') {
				countY++;

			}

		}
		if (countP == countY) {
			answer = true;

		} else {
			answer = false;
		}

		return answer;

	}

	public static void main(String[] args) {
		Solution13 sol13 = new Solution13();
		sol13.solution("pPoooYY");
	}
}