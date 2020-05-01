## Solution1204 

> 최빈수 구하기

- 문제

  <img src="Solution1204.assets/image-20200501184050042.png" alt="image-20200501184050042" width="80%" />

- 내 풀이

  ```java
  package test.SWEA;
  
  import java.util.Arrays;
  import java.util.Scanner;
  
  class Solution1204 {
  	public static void main(String args[]) throws Exception {
  		Scanner sc = new Scanner(System.in);
  		int T;
  
  		T = sc.nextInt();
  
  		for (int i = 1; i <= T; i++) {
  			
  			int Tcase = sc.nextInt();
  
  //			점수
  			int score[] = new int[1000];
  
  //			그릇
  			int nums[] = new int[1000];
  
  //			횟수
  			int cnt[] = new int[1000];
  
  			for (int j = 0; j < score.length; j++) {
  				int idx = sc.nextInt();
  				nums[j] = idx;
  				score[idx] = idx;
  			}
  
  			int count = 0;
  
  			for (int j = 0; j < score.length; j++) {
  				if (score[nums[j]] == nums[j]) {
  					count++;
  
  					cnt[nums[j]] += count;
  
  				}
  
  				count = 0;
  			}
  
  			int max = cnt[0];
  			int maxIndex = 0;
  			for (int k = 1; k < cnt.length; k++) {
  				if (cnt[k] >= max) {
  					max = cnt[k];
  					maxIndex = k;
  				}
  			}
  
  			System.out.println("#" + Tcase + " " + maxIndex);
  		}
  
  	}
  
  }
  
  
  
  ======================================================================
  10
  1
  41 85 72 38 80 69 65 68 96 22 49 67 51 61 63 87 66 24 80 83 71 60 64 52 90 60 49 31 23 99 94 11 25 24 51 15 13 39 67 97 19 76 12 33 99 18 92 35 74 0 95 71 39 33 39 32 37 45 57 71 95 5 71 24 86 8 51 54 74 24 75 70 33 63 29 99 58 94 52 13 35 99 46 57 71 23 17 3 94 48 77 18 83 11 83 25 59 62 2 78 86 7 94 65 80 32 39 84 60 65 72 61 58 84 8 72 12 19 47 49 49 59 71 52 34 22 21 20 92 33 80 39 74 9 28 97 100 93 29 25 4 66 79 81 98 21 91 62 82 4 59 100 34 1 51 80 92 69 77 39 38 97 51 34 35 19 22 1 67 9 90 31 82 11 51 84 78 70 74 42 100 88 53 80 57 62 32 51 48 63 92 46 4 61 31 98 69 52 88 20 68 41 48 79 97 98 56 44 73 3 63 100 87 87 41 65 10 ..... 생략
    
    
  #1 71
  #2 76
  #3 79
  #4 80
  #5 52
  #6 66
  #7 35
  #8 97
  #9 92
  #10 72
  
  ```

  
  - *접근*

    1. 입력 숫자를 배열에 차례차례 넣는다
    2. 그릇 배열에 입력 숫자에 맞는 인덱스로 넣어준다.
    3. 같은 숫자가 있으면 cnt배열에 nums배열 인덱스에 대응하도록 숫자 추가
    4. 그 후 배열안에서 최댓값에 대응하는 `maxIndex` 값을 출력했다.

    

  - 마지막에 평소처럼 Tcase와 구분을 하지 않았더니 3번째에서 79인데 77이 나오는 문제가 생겼다. 따로 따로 할땐 79가 나왔지만 테스트하면 77이 떠서 오답이 됐다. 

    `Tcase` 입력줄과 그 아래에 1의 `Tcase` 를 독립적으로 생각해주어야했다.

  