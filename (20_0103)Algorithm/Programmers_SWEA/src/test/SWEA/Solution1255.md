## Solution 1255

- 문제

  <img src="무제.assets/image-20200518165802252.png" alt="image-20200518165802252" width="80%" />

- 코드

  ```java
  package test.SWEA;
  
  import java.util.LinkedList;
  import java.util.Queue;
  import java.util.Scanner;
  
  public class Solution1255 {
  
  	public static void main(String[] args) {
  		Scanner scn = new Scanner(System.in);
  
  		Queue<Integer> que = new LinkedList<Integer>();
  
  		for (int i = 0; i < 10; i++) {
  			int temp = 1;
  			int T = scn.nextInt();
  //			배열 넣기
  			for (int j = 1; j < 9; j++) {
  				que.add(scn.nextInt());
  			}
  
  //			수 빼기 사이클
  			while (temp != 0) {
  
  				for (int j = 1; j < 6; j++) {
  
  					temp = que.poll();
  					temp = temp - j;
  
  					if (temp < 0) {
  						temp = 0;
  					}
  
  					que.add(temp);
  					if (temp == 0) {
  						break;
  					}
  				}
  			}
  
        
  //      testCase 출력
  			System.out.print("#" + T + " ");
  
  			for (int j = 0; j < 8; j++) {
  				temp = que.poll();
  				System.out.print(temp + " ");
  			}
  			System.out.println();
  
  		}
  	}
  
  }
  
  
  
  ============================================================
  
  
  1
  9550 9556 9550 9553 9558 9551 9551 9551
  #1 6 2 2 9 4 1 3 0 
    
  2
  2419 2418 2423 2415 2422 2419 2420 2415
  #2 9 7 9 5 4 3 8 0 
  
  ```

- Queue를 활용할 때 `poll` , `add` , `offer`, ... 등을 사용할 때 자동으로 일차원 배열안에서 연산이 이루어진다.

  - 즉, 따로 배열을 만들어줄 필요가 없다 ( 그자체가 배열 )