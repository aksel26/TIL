

## Brute-Force

> [조합 가능한 모든 문자열을 하나씩 대입해 보는 방식](https://namu.wiki/w/노가다(수학))으로 문제를 푸는 것인데, 얼핏 무식하다고 생각할 수도 있겠지만 **항상 정확도 100%를 보장**한다는 점에서, [자원만](https://namu.wiki/w/시간) [충분하면 가장 무서운](https://namu.wiki/w/이론상 최강) 방법이다. 이론적으로 가능한 모든 경우의 수를 다 검색해 보는 것이라 정확도 100%가 항상 보장되니, 암호학에서는 가장 확실한 방법으로 통용되고 있다.

텍스트에서 패턴(pat)를 검색해 텍스트의 위치(index)를 반환한다.

패턴이 여러개인 경우 가장 앞쪽에 위치한 텍스트의 인덱스를 반환,
실패하면 -1을 반환한다.

텍스트 스캔을 위한 변수 : 패턴(pt)
패턴을 스캔하기 위한 변수 : pp

```java
package bf;

import java.util.Scanner;

public class BruteForce {
	static int bfMatch(String txt, String pat) {
		int pt = 0; // txt커서
		int pp = 0; // pat커서

		while (pt != txt.length() && pp != pat.length()) {
			if (txt.charAt(pt) == pat.charAt(pp)) {
				pt++;
				pp++;
			} else {
				pt = pt - pp + 1;
				pp = 0;
			}

		}

		if (pp == pat.length()) {
			return pt - pp;
		}
		return -1;

	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("텍스트1 : ");
		String s1 = scn.next();

		System.out.println("패턴:");
		String s2 = scn.next();

		int idx = bfMatch(s1, s2);

		if (idx == 1) {
			System.out.println("패턴이 없다 .");

		} else {

			// 일치하는 문자 바로 앞까지의 길이를 구한다.

			int len = 0;
			for (int i = 0; i < idx; i++) {
				len += s1.substring(i, i + 1).getBytes().length;
			}
			len += s2.length();

			System.out.println((idx + 1) + " 번째 문자부터 일치합니다.");
			System.out.println("텍스트 : " + s1);
			System.out.printf(String.format("패턴 : %%%ds\n", len), s2);
		} 

	}

}


//	출력

//	텍스트1 : 
//	abcdefghiii
//	패턴:
//	hiii
//	8 번째 문자부터 일치합니다.
//	텍스트 : abcdefghiii
//	패턴 :        hiii

```

