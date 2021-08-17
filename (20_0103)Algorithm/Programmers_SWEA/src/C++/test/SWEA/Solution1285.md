## Solution 1285

- 문제

  <img src="Solution1285.assets/image-20200427134127923.png" alt="image-20200427134127923" width="80%" />



- 내꺼

  ```java
  package test.SWEA;
  
  import java.util.Arrays;
  import java.util.Scanner;
  
  class Solution1285 {
  
  	public static void main(String args[]) throws Exception {
  		Scanner sc = new Scanner(System.in);
  		int T;
  		T = sc.nextInt();
  
  		for (int i = 1; i <= T; i++) {
  
  			// 던진 사람 수
  			int ppl = sc.nextInt();
  
  			//인원 수 제한
  			if (ppl >= 1 && ppl <= 1000) {
  
  				int distance[] = new int[ppl];
  
  				// 유효거리 제한
  				for (int j = 0; j < distance.length; j++) {
  					if (distance[j] >= -100000 && distance[j] <= 100000) {
  						distance[j] = sc.nextInt();
  					}
  
  				}
  
  				int cnt = 0;
  				int result[] = new int[ppl];
  
  				for (int k = 0; k < result.length; k++) {
  					result[k] = 0 - distance[k];
  
  					result[k] = Math.abs(result[k]);
  
  					if (result[k] == result[0]) {
  						cnt++;
  					}
  				}
  
  				Arrays.sort(result);
  
  				System.out.println("#" + i + " " + result[0] + " " + cnt);
  
  			}
  		}
  
  	}
  }
  
  ========================================================================
  
  //		2
  //		2
  //		-100 100
  //		#1 100 2
  //		3
  //		-5 -1 3
  //		#2 1 1
  ```

- *접근*

  1. 0 에서 거리까지 차를 구하고 절댓값으로 변환
  2. `Arrays.sort()` 로 오름차순 정리 후 맨 앞에 값을 결과값으로 결정
  3. 같은 수는 맨 앞에 있는 값과 같은 값이 있으면 `cnt++` 해줌