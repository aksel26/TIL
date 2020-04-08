

## Solution 15

- 문제

  문자열 s는 한 개 이상의 단어로 구성되어 있습니다. 각 단어는 하나 이상의 공백문자로 구분되어 있습니다. 각 단어의 짝수번째 알파벳은 대문자로, 홀수번째 알파벳은 소문자로 바꾼 문자열을 리턴하는 함수, solution을 완성하세요.

  ##### 제한 사항

  - 문자열 전체의 짝/홀수 인덱스가 아니라, 단어(공백을 기준)별로 짝/홀수 인덱스를 판단해야합니다.
  - 첫 번째 글자는 0번째 인덱스로 보아 짝수번째 알파벳으로 처리해야 합니다.

```java
package test.solution15;

import java.util.ArrayList;

public class solution15 {
	public String solution(String s) {
		String answer = "";
		String[] data = s.split("");
		int cnt = 0;

		for (int i = 0; i < data.length; i++) {
			if (data[i].equals("")) {
				cnt = 0;
			} else {
				if (cnt % 2 == 0) {
					data[i] = data[i].toUpperCase();
					cnt++;
				} else {
					data[i] = data[i].toLowerCase();
					cnt++;
				}
			}
			answer += data[i];
		}
		return answer;
	}

	public static void main(String[] args) {
		solution15 sol15 = new solution15();
		sol15.solution("hello world");

	}
}

```

- *접근1.*

  반복문에서 2배수 증가로 charAt(i) 메서드를 사용해 짝수 부분만 대문자로 바꾸려고 했다.

  그리고, 공백 기준으로 공백이 발생하면 index를 다시 0으로 적용하기로 했다.

  --> `toUpperCase()` 는 String에서만 적용됨. `char` 타입에서는  `Character.toUpperCase( )` 로 사용가능

  ​		짝수 인덱스에만 대문자가 적용이 되더라도 홀수 캐릭터는 나오질 않는다...따로따로 조립하는 식으로 해야한다..

  

- *해결책*
  1. `split("")` 을 통해 한 단어마다 다 끊어놓는다
  2. 끊어놓은 캐릭터들을 배열에 넣는다
  3. 배열의 인덱스에 맞는 indexCnt변수를 설정하고 공백을 만나면 0으로 초기화, 짝수면 대문자로 바꾼다
  4. 그후, answer에 추가

`split("")`을 보기만하고 제대로 사용한 적은 없어서 떠올리지 못했던 것 같다.