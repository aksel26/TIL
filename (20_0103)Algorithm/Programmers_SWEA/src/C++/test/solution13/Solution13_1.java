package test.solution13;

public class Solution13_1 {
	boolean solution(String s) {

		s = s.toUpperCase();

		return s.chars().filter(e -> 'P' == e).count() == s.chars().filter(e -> 'Y' == e).count();

	}

	public static void main(String[] args) {
		Solution13_1 sol13 = new Solution13_1();
		
		System.out.println(sol13.solution("pPoooYY"));
	}
}