## Solution 22

- 문제

  ###### 

  함수 solution은 정수 n을 매개변수로 입력받습니다. n의 각 자릿수를 큰것부터 작은 순으로 정렬한 새로운 정수를 리턴해주세요. 예를들어 n이 118372면 873211을 리턴하면 됩니다.

- 내꺼

  ```java
  package test.solution22;
  
  import java.util.*;
  
  public class solution22 {
  	public long solution(long n) {
  		long answer = 0;
  
  		int nm = (int) (n);
  
  		// int to String (CharAt을 사용하기 위해)
  		String str = Integer.toString(nm);
  
  		int[] digits = new int[str.length()];
  
  		for (int i = 0; i < str.length(); i++) {
  			digits[i] = str.charAt(i) - '0';
  		}
  
  		for (int i = 0; i < digits.length; i++) {
  			for (int j = i + 1; j < digits.length; j++) {
  				if (digits[i] <= digits[j]) {
  					int temp = digits[j];
  					digits[j] = digits[i];
  					digits[i] = temp;
  				} else {
  					break;
  				}
  			}
  
  		}
  
  		String str2 = "";
  		for (int i = 0; i < digits.length; i++) {
  			str2 += Integer.toString(digits[i]);
  
  		}
  		answer = Long.parseLong(str2);
  
  		System.out.println(answer);
  
  //		ReversOrder를 사용하기 위해 int to Integer 하는 작업
  //			Integer[] Iinteger = Arrays.stream(digits).boxed().toArray(Integer[]::new);
  //			Arrays.sort(Iinteger, Collections.reverseOrder());
  
  		return answer;
  	}
  
  	public static void main(String[] args) {
  		solution22 sol22 = new solution22();
  		sol22.solution(8293028);
  
  	}
  
  }
  ```

- *접근1.*

  자리수 단위로 구분하기 위해 String으로 바꿔줌. (`Integer.toString()`)

- *접근2.*

  자리수 단위로 나뉜 String형을 다시 Int형 배열로 넣어줌, 그 후, 내림차순으로 정렬.

  <u>수가 같을땐 이상한 숫자가 나왔다.</u>

- *접근3.*

  String형으로 변환 후, `Long.parseLong()` 으로 Long형으로 변환함.



### 다른사람의 코드

```java
package test.solution22;

import java.util.*;

public class solution22_1 {
	public long solution(long n) {
		long answer = 0;

		int len = Long.toString(n).split("").length;

		String[] arr = new String[len];
		arr = Long.toString(n).split("");

		String tmp = "";
		Arrays.sort(arr, Collections.reverseOrder());

		for (int i = 0; i < len; i++) {
			tmp += (long) Integer.parseInt(arr[i]);
		}

		answer = Long.parseLong(tmp);

		System.out.println(answer);
		return answer;
	}

	public static void main(String[] args) {
		solution22_1 sol22 = new solution22_1();
		sol22.solution(8293028);

	}

}
```

- `Long.toString(n).split("");` 

  String으로 변환, 자리수별로 자른다

- `		Arrays.sort(arr, Collections.reverseOrder());` 을 활용

- `arr[i]` 각 요소에 `tmp`를 더한다

- `long`형으로 변환

