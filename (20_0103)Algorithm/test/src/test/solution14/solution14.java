package test.solution14;

public class solution14 {
	public int solution(int n) {
		int answer = 0;

		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				answer += i;
				
			}
		}
		System.out.println(answer);
		return answer;
	}
	public static void main(String[] args) {
		solution14 sol14 = new solution14();
		sol14.solution(5);
	}
}
