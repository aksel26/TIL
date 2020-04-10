## Solution 17 (하샤드 수)

- 문제

  ###### 문제 설명

  양의 정수 x가 하샤드 수이려면 x의 자릿수의 합으로 x가 나누어져야 합니다. 예를 들어 18의 자릿수 합은 1+8=9이고, 18은 9로 나누어 떨어지므로 18은 하샤드 수입니다. 자연수 x를 입력받아 x가 하샤드 수인지 아닌지 검사하는 함수, solution을 완성해주세요.

  ##### 제한 조건

  - `x`는 1 이상, 10000 이하인 정수입니다.



```java
package test.solution17;

import java.util.Arrays;

public class solution17 {
	public boolean solution(int x) {
		boolean answer = true;

		int dec = x % 10;
		int one = x / 10;
		int answer1 = x % (dec + one);

		answer = answer1 == 0 ? true : false;

		return answer;
	}

	public static void main(String[] args) {
		solution17 sol17 = new solution17();
		sol17.solution(14);
		// 33= false

	}
}

```



- *접근1.*
  1. 자리수를 하나하나씩 가져오기 위해   `Integer.toString();` 을 사용하였다.
  2. `charAt` 으로 배열에 합으로 유도하려 했으니 String의 합으로 되어 이상한 수가 나옴

- *접근2.*
  1. 일단 예제에서 10의자리 수밖에 없어서 10으로 나누어 단위 수를 구함
  2. 그 수를 합한 뒤 나누어 떨어지면 `true` 를 반환



- 다른사람의 코드

  ```java
  package test.solution17;
  
  import java.util.Arrays;
  
  public class solution17_1 {
  	public boolean solution(int x) {
  		boolean answer = true;
  
  		String x1 = Integer.toString(x);
  		String[] x2 = x1.split("");
  		
  		
  		int[] x3 = new int[x2.length];
  
  		for (int i = 0; i < x2.length; i++) {
  			x3[i] = Integer.parseInt(x2[i]);
  		}
  
  		if (x % Arrays.stream(x3).sum() == 0) {
  			answer = true;
  		} else
  			answer = false;
  
  		return answer;
  
  	}
  
  	public static void main(String[] args) {
  		solution17_1 sol17 = new solution17_1();
  		sol17.solution(14);
  		// 33= false
  
  	}
  }
  ```

  - String으로 변환하는 방식은 같았다.
  - 하지만, `Arrays.stream(x3).sum() == 0` 이 부분에서 `stream`의 개념을 잘 몰랐고, `sum` 이란게 있는줄 이제 배웠다.





### Stream

> 컬렉션의 요소를 하나씩 참조해 람다식으로 처리할 수 있는 반복자.

```java
List<String> list = Arrays.asList("홍길동", "신용권", "김남준");	
	Stream<String> stream = list.stream();
	stream.forEach(name -> System.out.println(name));
```

- `sum()` 은 최종처리
  - 최종처리 : `sum()`, `average()`, `count()`, 반복

