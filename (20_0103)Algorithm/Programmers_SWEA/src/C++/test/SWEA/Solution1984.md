## Solution 1984

- 문제

  <img src="Solution1984.assets/image-20200504185532484.png" alt="image-20200504185532484" width="80%" />

- 소스

  ```java
  package test.SWEA;
  
  import java.util.Arrays;
  import java.util.Scanner;
  
  public class Solution1984 {
  	public static void main(String[] args) {
  		Scanner scn = new Scanner(System.in);
  
  		int T = scn.nextInt();
  
  		for (int i = 1; i <= T; i++) {
  
  			int numbers[] = new int[10];
  
  			for (int j = 0; j < numbers.length; j++) {
  				numbers[j] = scn.nextInt();
  
  			}
  
  			Arrays.sort(numbers);
  			double sum = 0;
  
  			for (int j = 0; j < numbers.length - 1; j++) {
  				sum += numbers[j + 1];
  			}
  			sum = sum - numbers[numbers.length - 1];
  
  			double average = sum / 8;
  			int result = (int) Math.round(average);
  			System.out.println("#" + i + " " + result);
  
  		}
  	}
  }
  
  ================================================================
    3      
    3 17 1 39 8 41 2 32 99 2 
    22 8 5 123 7 2 63 7 3 46 
    6 63 2 3 58 76 21 33 8 1
  
  	#1 18
  	#2 20
  	#3 24
  
  ```

  

- *접근*
  1. 배열 오름차순 정렬 후 인덱스 1번부터 더한다.
  2. 총 합에서 맨 마지막 수를 뺀다.
  3. 그 후 평균 계산