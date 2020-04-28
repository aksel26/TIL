## Solution 1945

- 문제

  <img src="readme.assets/image-20200428154607820.png" alt="image-20200428154607820" width="80%"/>

- ### 내꺼

  ```java
  package test.SWEA;
  
  import java.util.Arrays;
  import java.util.Scanner;
  
  class Solution1945 {
  
  	public static void main(String args[]) throws Exception {
  		Scanner sc = new Scanner(System.in);
  		int T;
  		T = sc.nextInt();
  
  		for (int i = 1; i <= T; i++) {
  
  			int[] divisor = { 2, 3, 5, 7, 11 };
  			int[] result = new int[divisor.length];
  			// 대상 숫자
  			int N = sc.nextInt();
  
  			// 나누기 숫자
  			int cnt = 0;
  
  			// divisor 배수인 경우
  			for (int j = 0; j < divisor.length; j++) {
  
  				if (N % divisor[j] == 0) {
  
  					while (true) {
  						if(N % divisor[j] == 0) {
  							
  							N = N / divisor[j];
  							cnt++;
  							continue;							
  						}else {
  							
  							N /= divisor[j+1];
  									
  							break;
  						}
  
  						
  					}
  					result[j] = cnt;
  				}
  
  			}
  
  
  			for (int j = 0; j < result.length; j++) {
  				System.out.print(result[j]);
  			}
  
  		}
  	}
  }
  
  
  
  ======================================================
      1
      125
      00300
  ```

- *접근1*

  1. 나눌 숫자들을 배열로 지정한다.
  2. 나머지가 0이면 계속해서 나누고 횟수를 `cnt++`
  3. <u>나머지가 1일때 처리를 하지 못함...</u>



- 다른사람의 풀이

  ```java
  package test.SWEA;
  
  import java.util.Arrays;
  import java.util.Scanner;
  
  class Solution1945_1 {
  
  	public static void main(String args[]) throws Exception {
  		Scanner sc = new Scanner(System.in);
  		int T;
  		T = sc.nextInt();
  
  		for (int i = 1; i <= T; i++) {
  			int n = sc.nextInt();
  			int a = 0;
  			int b = 0;
  			int c = 0;
  			int d = 0;
  			int e = 0;
  
  			while (n % 2 == 0) {
  				n /= 2;
  				a++;
  			}
  			;
  			while (n % 3 == 0) {
  				n /= 3;
  				b++;
  			}
  			;
  			while (n % 5 == 0) {
  				n /= 5;
  				c++;
  			}
  			;
  			while (n % 7 == 0) {
  				n /= 7;
  				d++;
  			}
  			;
  			while (n % 11 == 0) {
  				n /= 11;
  				e++;
  			}
  			;
  
  			System.out.format("#%d %d %d %d %d %d \n", i, a, b, c, d, e);
  
  		}
  	}
  }
  
  ```

- while문을 여러개 만들어서 각 숫자가 거쳐가야 할 것처럼 만듦

- 너무나 간단하게 구현할 수 있는 문제였다......