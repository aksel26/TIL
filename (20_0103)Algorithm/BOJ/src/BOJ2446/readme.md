## Q 2446

- 문제

  첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.


      //  	         *******
      //		  *****
      //		   ***
      //		    *
      //		   ***
      //		  *****
      //		 *******
</br>





- 내꺼

  ```java
  package BOJ2446;
  
  import java.util.Arrays;
  import java.util.Scanner;
  
  public class Q2446 {
  
  	public static void main(String[] args) {
  		Scanner scn = new Scanner(System.in);
  
  		int N = scn.nextInt();
  		for (int i = 0; i < N; i++) {
  
  			for (int j = 0; j < i; j++) {
  				System.out.print(" ");
  			}
  			for (int j = 0; j < (2 * N -1) - (i * 2) ; j++) {
  				System.out.print("*");
  			}
  
  			System.out.println();
  
  		}
  
  		for (int i = 0; i < N - 1; i++) {
  			for (int j = 1; j < (N - 1) - i; j++) {
  				System.out.print(" ");
  			}
  			for (int k = 0; k < 3 + 2 * i; k++) {
  				System.out.print("*");
  			}
  			System.out.println();
  		}
  	}
  
  }
  
  
  
  //		5
  //		*********
  //		 *******
  //		  *****
  //		   ***
  //		    *
  //		   ***
  //		  *****
  //		 *******
  //		*********
  
  ```

  - 접근

    1. 윗부분과 아랫부분을 나눈다.
    2. 공백과 별 부분을 나눈다.

    

</br>

- 다른사람의 풀이 (**StringBuilder 사용**)

  ```java
  package BOJ2446;
  
  import java.io.BufferedReader;
  import java.io.IOException;
  import java.io.InputStreamReader;
  import java.util.Arrays;
  import java.util.Scanner;
  
  public class Q2446_1 {
  
  	public static void main(String[] args) throws IOException {
  		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
  		
  		int N = Integer.parseInt(br.readLine());
  		StringBuilder sb = new StringBuilder();
  		
  		
  		for (int i = 0; i < N; i++) {
  			
  			for (int j = 0; j < i; j++) {
  				sb.append(" ");
  			}
			
  			for (int k = 0; k < (2*N-1) - (2* i); k++) {
  				sb.append("*");
  			}
  			
  			sb.append("\n");
  		}
  		
  		
  		for (int i = 0; i < N - 1; i++) {
  			
  			for (int j = 1; j < (N -1) - i; j++) {
  				sb.append(" ");
  			}
  			for (int k = 0; k < 3 + 2*i; k++) {
  				sb.append("*");
  			}
  			
  			sb.append("\n");
  		}
  		
  		
  		
  		System.out.println(sb);
  	}
  }
  
  
  
  //		5
  //		*********
  //		 *******
  //		  *****
  //		   ***
  //		    *
  //		   ***
  //		  *****
  //		 *******
  //		*********
  
  ```
  
  - StringBuilder에 append한 것을 한번에 출력
    - 출력속도가 빨라진다.

---





