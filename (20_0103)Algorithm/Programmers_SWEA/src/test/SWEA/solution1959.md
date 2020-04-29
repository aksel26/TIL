## Q1959 

### 두개의 숫자열

- 문제

  <img src="solution1959.assets/image-20200429120557667.png" alt="image-20200429120557667" width="80%" />



- ### 내꺼

  ```java
  package test.SWEA;
  
  import java.util.Arrays;
  import java.util.Scanner;
  
  class Solution1959 {
  
  	public static void main(String args[]) throws Exception {
  		Scanner sc = new Scanner(System.in);
  		int T;
  		T = sc.nextInt();
  
  		for (int i = 1; i <= T; i++) {
  
  			// 배열 A
  			int[] A = new int[sc.nextInt()];
  			// 배열 B
  			int[] B = new int[sc.nextInt()];
  
  			// 연산결과
  			int resultLength = A.length - B.length;
  			int sum[] = new int[Math.abs(resultLength) + 1];
  
  			for (int j = 0; j < A.length; j++) {
  				A[j] = sc.nextInt();
  
  			}
  			for (int j = 0; j < B.length; j++) {
  				B[j] = sc.nextInt();
  
  			}
  
  			int idx = 0;
  			int temp = 0;
  
  // B 배열의 길이가 더 큰 경우
  			if (A.length < B.length) {
          //			 합 배열
  				for (int j = 0; j < sum.length; j++) {
  
  					// 곱
  					for (int k = idx, l = 0; k < j + A.length; l++, k++) {
  
  						temp += A[l] * B[k];
  					}
  
  					idx++;
  					sum[j] = temp;
  					temp = 0;
  
  				}
  
  				Arrays.sort(sum);
  
  				System.out.println("#" + i + " " + sum[sum.length - 1]);
          
          
  // A 배열의 길이가 더 큰 경우
  			} else {
  //			 합 배열
  				for (int j = 0; j < sum.length; j++) {
  
  					// 곱
  					for (int k = idx, l = 0; k < j + B.length; k++, l++) {
  						temp += A[k] * B[l];
  					}
  
  					idx++;
  					sum[j] = temp;
  					temp = 0;
  				}
  
  				Arrays.sort(sum);
  				System.out.println("#" + i + " " + sum[sum.length - 1]);
  
  			}
  
  		}
  	}
  }
  
  
  =======================================================
      1
      11 3
      3 -4 -7 7 -2 5 5 0 -2 -8 4
      -1 1 3
    
      #1 22
  
  ```

- *접근*

  1. 배열 결과를 따로 담는 `sum` 배열을 생성 ( 배열 길이는 A배열 길이 - B배열 길이 +1 )
  2. 길이가 더 작은 배열로 기준을 정함.
  3. 합 결과를 sum 배열에 넣고
  4. `Arrays.sort` 로 정렬 후 맨 뒤 값을 출력함.

  