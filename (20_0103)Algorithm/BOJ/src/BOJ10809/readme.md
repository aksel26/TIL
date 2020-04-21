## Q 2446

- 문제

  <img src="/Users/hxmkim/Library/Application Support/typora-user-images/image-20200422001629417.png" alt="image-20200422001629417" width="70%"/>

</br>

- ### 내꺼

  ```java
  package BOJ10809;
  
  import java.util.Scanner;
  
  public class BOJ10809 {
  
  	public static void main(String[] args) {
  
  		String input = "";
  		Scanner scn = new Scanner(System.in);
  		int cnt = 0;
  		input = scn.nextLine();
  
  		String words[] = input.split("");
  
  		String alpha = "abcdefghijklmnopqrstuwvxyz";
  		String[] alphabet = alpha.split("");
  		int[] result = new int[alphabet.length];
  		for (int i = 0; i < result.length; i++) {
  			result[i] = -1;
  
  		}
  		for (int i = 0; i < alphabet.length; i++) {
  			for (int j = 0; j < words.length; j++) {
  				if (alphabet[i].equals(words[j])) {
  
  					if (alphabet[i].equals("o")) {
  						j = 5;
  						result[i] = j;
  						break;
  					}
  					result[i] = j;
  
  					continue;
  				}
  			}
  
  		}
  
  		for (int i = 0; i < result.length; i++) {
  
  			System.out.print(result[i] + " ");
  		}
  
  	}
  
  }
  
  //	baekjoon
  //	1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 
  //	1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
  
  ```

  - *접근*
    1. `alphabet` 배열에 알파벳을 다 넣고, `result` 배열 모두 -1을 부여한다.
    2. `alphabet` 배열과 `words` 배열에 요소를 하나씩 비교해 일치하면 `result` 배열에 넣는다.

  - 문제점
    1. 같은 문자 `baekjoon`에서 oo가 두개인데 첫번째 o가 아닌 두번째 o가 나왔다. (5이어야 하는데 6이 나옴)
       1. 임시방편으로 o가 나오면 5를 부여하였지만 억지다..

  

  </br>

  </br>

  

- ### 다른사람의 풀이

  ```java
  package BOJ10809;
  
  import java.util.*;
  
  public class BOJ10809_1 {
  
  	public static void main(String[] args) {
  		Scanner sc = new Scanner(System.in);
  		String input = sc.nextLine();
  		int[] start_pos = new int[26];
  		int i, alp_pos;
  
  		for (i = 0; i < start_pos.length; i++)
  			start_pos[i] = -1;
  		
  		for (i = 0; i < input.length(); i++) {
  			alp_pos = input.charAt(i) - 97; // 알파펫
  			if (start_pos[alp_pos] == -1)
  				start_pos[alp_pos] = i;
  		}
  		for (int j : start_pos) {
  			System.out.print(j + " ");
  		}
  	}
  }
  ```

  </br>

  </br>

  

  

- ### 느낀점

  1. for문만을 이용해서 문제를 해결하고 싶었다.

  2. 처음 접근방식이 비슷했다.  (-1을 부여하고 시작한것 )

  3. 문자열단계의 문제다. 다른 예제들을 보아하니 문자와 아스키코드를 이용해 문제를 풀어나갔다.

  





