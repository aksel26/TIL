## Solution 23

- 문제

  자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 리턴해주세요. 예를들어 n이 12345이면 [5,4,3,2,1]을 리턴합니다.



### 내꺼

```java
package test.solution23;

import java.util.*;

public class solution23 {
	public int[] solution(long n) {
		int[] answer = {};

		String str = "";
		str = Long.toString(n); // String 자리수 split

		StringBuffer sb = new StringBuffer(str);
		sb.reverse();
		String str2[] = null;
		str2 = sb.toString().split("");


		
		// string[] -> int[] 배열에 넣기
		
		
		// 방법1. for문 사용
		answer = new int[str2.length];
		for (int i = 0; i < str2.length; i++) {
			answer[i] = Integer.parseInt(str2[i]);
		}
		
		// 방법2. stream 사용
		answer = Arrays.stream(str2).mapToInt(Integer::parseInt).toArray();

		
		
		return answer;
	}

	public static void main(String[] args) {
		solution23 sol23 = new solution23();
		sol23.solution(12345);

	}
}

```



- 단위별로 쪼개기 위해 String으로 바꿔줌

- 문자열을 뒤집기 위해 `StringBuffer` 의 `reverse()` 사용

- String[] --> Int[] 로 바꿔주기 위해 

  - 방법1. `Stream` 사용

    `		answer = Arrays.stream(str2).mapToInt(Integer::parseInt).toArray();`

  - 방법2. `for` 문 사용

    `	answer[i] = Integer.parseInt(str2[i]);`

    