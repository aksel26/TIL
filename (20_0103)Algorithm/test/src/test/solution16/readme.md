## Solution 16

- 문제

  1937년 Collatz란 사람에 의해 제기된 이 추측은, 주어진 수가 1이 될때까지 다음 작업을 반복하면, 모든 수를 1로 만들 수 있다는 추측입니다. 작업은 다음과 같습니다.

  ```
  1-1. 입력된 수가 짝수라면 2로 나눕니다. 
  1-2. 입력된 수가 홀수라면 3을 곱하고 1을 더합니다.
  2. 결과로 나온 수에 같은 작업을 1이 될 때까지 반복합니다.
  ```

  예를 들어, 입력된 수가 6이라면 6→3→10→5→16→8→4→2→1 이 되어 총 8번 만에 1이 됩니다. 위 작업을 몇 번이나 반복해야하는지 반환하는 함수, solution을 완성해 주세요. 단, 작업을 500번을 반복해도 1이 되지 않는다면 –1을 반환해 주세요.

  ##### 제한 사항

  입력된 수, `num`은 1 이상 8000000 미만인 정수입니다.



- 내가 한 것.

```java
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

```

- *접근*1.

   입력된 숫자에 따라 반복 횟수가 달라지기 때문에 while문으로 접근..

  홀수입력하면 성공했지만 짝수 입력하면 오답이 나온다.

  (while문 조건에 짝수 조건이 없었으니 당연하다.)

  짝수가 적용되는 while문을 만들었지만 너무 비효율적일것같다..

  

- *접근2.*

  삼항연산자도 생각했지만 딱히 방법이 안떠올라서 시도를 안함.



- 다른사람의 풀이

  ```java
  package test.solution16;
  
  public class solution16_1 {
  	public int solution(int num) {
  
  		long n = (long) num;
  		for (int i = 0; i < 500; i++) {
  			if (n == 1)
  				return i;
  			n = (n % 2 == 0) ? n / 2 : n * 3 + 1;
  		}
  		return -1;
  
  	}
  
  	public static void main(String[] args) {
  		solution16_1 sol16 = new solution16_1();
  		System.out.println(sol16.solution(626331));
  	}
  }
  
  ```

  - 삼항연산자 사용...
  - for문의 다른 접근!

