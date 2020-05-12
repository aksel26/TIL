## Solution 30

- 문제

  <img src="무제.assets/image-20200512215517407.png" alt="image-20200512215517407" width="80%"/>

- 소스

  ```java
  package test.solution30;
  
import java.util.*;
  
  class Solution30 {
  
  	public String solution(int[] numbers) {
  		String answer = "";
  
  		String temp = "";
  
  //		최댓값
  		int max = 0;
  
  		String str_num[] = new String[numbers.length];
  
  //		배열 숫자 조합
  		for (int i = 0; i < numbers.length; i++) {
  			temp += Integer.toString(numbers[i]);
  		}
  
  
  //			Integer로 변환
  		for (int k = 0; k < num.length; k++) {
  
  			num[k] = Integer.parseInt(temp);
  		}
  
  //			최댓값 입력
  //			if (max < num) {
  //				max = num;
  //				answer = Integer.toString(max);
  //
  //			}
  		System.out.println(answer);
  
  		return answer;
  	}
  
  	public static void main(String[] args) {
  
  		Solution30 sol30 = new Solution30();
  
  		int numbers[] = { 3, 30, 34, 5, 9 };
  		sol30.solution(numbers);
  	}
  }
  ```
  
  - *접근*
  
    `numbers` 배열안의 원소들을 넣고 하나의 수로 만들기 위해 `String`으로 변환 후  다시 `integer` 로 바꿈.
  
  - 문제점
  
    주어진 배열을 모든 경우의 수 조합을 구하는 방법에서 막혔다..
  
    0,1,2 // 0, 2, 1 // 0, 2, 2 // ... 





- ### 다른사람의 풀이

  ```java
  package test.solution30;
  
  import java.util.*;
  
  class Solution30 {
  
  	public String solution(int[] numbers) {
  		String answer = "";
  
  		String temp = "";
  
  
  
  		String str_num[] = new String[numbers.length];
  
  //		배열 숫자 조합
  		for (int i = 0; i < numbers.length; i++) {
  
  			str_num[i] = String.valueOf(numbers[i]);
  		}
  
  // 문제를 아스키코드로 보면 내림차순으로 정렬하면 된다.
  		Arrays.sort(str_num, new Comparator<String>() {
  			@Override
  			public int compare(String o1, String o2) {
  
  				return (o2 + o1).compareTo(o1 + o2);
  			}
  		});
  
  		if (str_num[0].startsWith("0")) {
  			answer += "0";
  		} else {
  			for (int j = 0; j < str_num.length; j++) {
  				answer += str_num[j];
  
  			}
  		}
  
  		return answer;
  	}
  
  	public static void main(String[] args) {
  
  		Solution30 sol30 = new Solution30();
  
  		int numbers[] = { 3, 30, 34, 5, 9 };
  		sol30.solution(numbers);
  	}
  }
  ```

  1. 아스키 코드로 접근하는 방법
  2. `Comparator` 를 사용하는 방법
  3. `String.valueOf` 를 사용하는 방법