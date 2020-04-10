package test.solution16;

public class solution16 {
	public int solution(int num) {

		int answer = 0;
		int cnt = 0;

		while (num % 2 == 1) {

			if (num % 2 == 1) {

				num = num * 3 + 1;
				cnt++;
				if (num != 1) {
					while (num % 2 == 0) {

						num = num / 2;
						cnt++;

						if (num % 2 == 1) {

							if (num == 1) {

								break;
							}

						}

					}
				}

			}
		}

		return answer;
	}

	public static void main(String[] args) {
		solution16 sol16 = new solution16();
		sol16.solution(3);
	}
}
