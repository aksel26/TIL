## Solution13

- 문제

  대문자와 소문자가 섞여있는 문자열 s가 주어집니다. s에 'p'의 개수와 'y'의 개수를 비교해 같으면 True, 다르면 False를 return 하는 solution를 완성하세요. 'p', 'y' 모두 하나도 없는 경우는 항상 True를 리턴합니다. 단, 개수를 비교할 때 대문자와 소문자는 구별하지 않습니다.

  예를 들어 s가 pPoooyY면 true를 return하고 Pyy라면 false를 return합니다.

  ##### 제한사항

  - 문자열 s의 길이 : 50 이하의 자연수
  - 문자열 s는 알파벳으로만 이루어져 있습니다.

```java
package test.solution13;

public class Solution {
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
		Solution sol13 = new Solution();
		sol13.solution("pPoooYY");
	}
}
```

- *접근*

  : 문자열 하나하나의 인덱스에서 일치하면 변수의 수자를 증가시키는 방식, 변수의 숫자가 같으면 true를 반환

</br>



- 다른사람의 풀이

```java
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
```

- 접근

  : Stream, 



---

### Stream

```java
package test.solution13;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.stream.Stream;

public class Solution13_Stream {


	public static void main(String[] args) {
		String[] strArr = {"mash-up", "backend", "frontend"};
		
		List<String> strList = Arrays.asList(strArr);
		Arrays.sort(strArr);
		Collections.sort(strList);
		
		for(String str:strArr) {
			System.out.println(str);
		}
		
		for(String str:strList) {
			System.out.println(str);
		}
		
		
		
		//Stream 사용 후
		
		Stream<String> listStream = strList.stream(); // 스트림 생성
		Stream<String> arrayStream  = Arrays.stream(strArr);
		
		listStream.sorted().forEach(System.out::println);
		arrayStream.sorted().forEach(System.out::println);
	}
}
```

- Stream sort정렬한다고 정렬이 정말로 되는 것은 아니고, 보여주는 것일 뿐 (스트림의 특징)



#### 스트림의 특징

- 데이터소스를 변경하지 않는다.
- 일회용이다
- 내부 반복

#### 스트림의 연산

- 중간연산 : 연산 후 스트림으로 반환되기 때문에 다시 연산 연결이 가능하다.
  - `map()`, `flatmap()`
- 최종연산 : 스트림의 요소 소모. 단 한번만 가능
  - `reduce()`, `collect()`





