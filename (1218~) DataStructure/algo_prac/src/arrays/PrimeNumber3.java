package arrays;

//1000이하의 소수 열거 (버전 3)
public class PrimeNumber3 {

	public static void main(String[] args) {
		int counter = 0;
		int ptr = 0;
		int[] prime = new int[500];

		prime[ptr++] = 2; // 2는 소수임
		prime[ptr++] = 3; // 3은 소수임

		for (int n = 5; n <= 1000; n += 2) { // 바깥쪽 for문은 홀수만
			
			boolean flag = false;


			for (int i = 1; prime[i] * prime[i] <= n; i++) { // 사각형을 기준으로대칭을 이루고 있고 제곱근을 구해 판단.
//																n의 제곱근 이하의 어떤 소수로도 나누어 떨어지지 않는다.
//																제곱근보다 제곱을 구하는 것이 더 빠르기 때문에 prime[i] * prime[i]해준다.
				
				counter += 2; //prime[i] * prime[i], n % prime[i[ 연산의 수행 횟수를 알기 위
				if (n % prime[i] == 0) {
					flag = true;
				break;
			}
			}

			if (!flag) { // 마지막까지 나누어 떨어지지 않
				prime[ptr++] = n; // 소수라고 배열에 저
				counter++;
			}

		}
		for (int i = 0; i < ptr; i++) {
			System.out.println(prime[i]);
		}
		System.out.println("나눗셈을 수행하횟수 : " + counter);
	}

}

//출력
//
//2
//3
//5
//...
//991
//997
//나눗셈을 수행하횟수 : 3774
