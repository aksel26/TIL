## Solution14

- 문제

  ###### 문제 설명

  정수 n을 입력받아 n의 약수를 모두 더한 값을 리턴하는 함수, solution을 완성해주세요.

  ##### 제한 사항

  - `n`은 0 이상 3000이하인 정수입니다.



```java
package test.solution14;

public class solution14 {
	public int solution(int n) {
		int answer = 0;

		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				answer += i;		
			}
		}

		return answer;
	}
	public static void main(String[] args) {
		solution14 sol14 = new solution14();
		sol14.solution(5);
	}
}
```

- *접근*

  : 나눠서 0이 되는 i 값들을 모두 더해준 answer값에 넣기

- *참고*

```java
class SumDivisor {
    public int sumDivisor(int num) {
        int answer = 0;
            for(int i = 1; i <= num/2; i++){
        if(num%i == 0) answer += i;
      }
        return answer+num;
    }
```

`n/2` 를 하면 도는 횟수가 떨어져 보다 효흉적이다.