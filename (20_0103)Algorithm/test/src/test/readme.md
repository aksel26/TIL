## Solution11.

문제) 
array의 각 element 중 divisor로 나누어 떨어지는 값을 오름차순으로 정렬한 배열을 반환하는 함수, solution을 작성해주세요. divisor로 나누어 떨어지는 element가 하나도 없다면 배열에 -1을 담아 반환하세요.

```java
package test;

import java.util.*;
import java.util.regex.Pattern;


public class Solution11 {
	public int[] solution(int[] arr, int divisor) {

		int[] answer= {};
		ArrayList<Integer> al = new ArrayList<Integer>();
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] % divisor == 0) {
				al.add(arr[i]);
			}
		}
		if(al.isEmpty()) {
			al.add(-1);
		}
		answer = new int[al.size()];
		
		for(int i = 0 ; i<al.size(); i++) {
			answer[i] = al.get(i);
		
		}
		
		
		return answer;

	}

	public static void main(String[] args) {
		Solution11 sol11 = new Solution11();
		int[] arr = { 5, 9, 7, 10 };
		sol11.solution(arr, 5);
	}
}


결과 :
[5, 10 ]
```

- *접근1.* 
  - 조건문에 맞는 결과에 따라 int형 배열의 크기가 정해지게 하기 위해 초기 배열 크기 0을 주었고, 조건에 맞으면 count++ 방식으로 배열 크기를 바꿔주려고 했다. 
  - -> 하지만 자꾸 인덱스 오류가 발생 (0 으로 설정한 값 때문에 배열에 들어가질 않음)

</br>

- *접근2.* 
  - 그래서, arr배열 크기대로 answer배열의 크기를 지정해주었다.
    - -> 오류는 해결하였지만, 5 / 0 /. 0 /  10  이런식으로 들어가게되었다.
    - 이유는 이해함!

</br>

- **해결**
- 그래서, 원하는 요소만 배열에 넣을 수는 없을까?
  - **ArrayList를 떠올림.**
  - add메서드를 사용하자!
  - 그 후, get메서드로 int형 배열로 맞춰주자