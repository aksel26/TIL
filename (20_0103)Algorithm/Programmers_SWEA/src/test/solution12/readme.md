## Solution12

문제)

1부터 입력받은 숫자 n 사이에 있는 소수의 개수를 반환하는 함수, solution을 만들어 보세요.

소수는 1과 자기 자신으로만 나누어지는 수를 의미합니다.
(1은 소수가 아닙니다.)

* 제한 조건
  * n은 2이상 1000000이하의 자연수입니다.

</br>



- 런타임오류 ㅠ..

```java
package test.solution12;

class Solution12 {
	public int solution(int n) {

		int answer = 0;

		if (n == 1)
			return 0;

		for (int i = 2; i <= n; i++) {
			boolean isPrime = true;
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					isPrime = false;
				}
			}
			if (isPrime) {
				answer++;

			}

		}

		return answer;
	}

	public static void main(String[] args) {
		Solution12 sol12 = new Solution12();

		sol12.solution(10);

	}
}
```

- 문제없이 실행되었지만, 런타임오류가 났다.



### **에라토스테네스의 체**

```java
package test.solution12;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;



// 에라토스테네스의 체 이용

class Solution12_1 {
	public int solution(int n) {

		int answer = 0;

	int[] number = new int[n+1];
	
	// 2부터 n 까지의 수를 배열에 넣는다.
	for(int i =2; i<=n ; i++) {
		number[i] =i;
		
	}
	
	//2부터 시작해서 그의 배수들을 0으로 만든다.
	//후에 0이면 넘어가고 아니면 그의 배수들을 다시 0으로 만든다.
	
	for (int i = 2; i <= n; i++) {	
		if(number[i] ==0 ) continue;
		for(int j = 2 * i ; j<=n ; j+=i) {
			number[j]= 0;
		}
	}
	
	
	//배열에서 0이 아닌 것들의 개수를 세준다.
	for(int i = 0; i< number.length ; i++) {
		if(number[i]!=0) {
			answer++;
		}
	}

		return answer;
	}

	public static void main(String[] args) {
		Solution12_1 sol12 = new Solution12_1();

		sol12.solution(10);

	}
}
```

1. 2부터 n까지의 수를 모두 담는다.
2. 2의 배수, 3의 배수 ... 배수 수를 늘려가면서 배열 공간에 0을 만든다.
3. 그 후, 0이 아닌 수들을 세면 끝!

실행속도 차이가 현저하게 빨랐다.

