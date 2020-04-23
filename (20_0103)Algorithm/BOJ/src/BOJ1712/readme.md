## Q1712

- 문제

  <img src="/Users/hxmkim/Library/Application Support/typora-user-images/image-20200423152430386.png" alt="image-20200423152430386" width="70%" />

- ### 내꺼

  ```java
  package BOJ1712;
  
  import java.util.Arrays;
  import java.util.Scanner;
  
  public class Q1712 {
  
  	public static void main(String[] args) {
  		Scanner scn = new Scanner(System.in);
  
  		System.out.println("고정비용");
  		int fixed = scn.nextInt(); // 고정비용
  
  		System.out.println("가변비용");
  		int variable = scn.nextInt(); // 가변비용
  //		 total = 1070
  		System.out.println("노트북가격");
  		int price = scn.nextInt(); // 노트북 가격
  
  		int i = 1;
  
  		while (true) {
  			i++;
  			int totalCost = (variable * i) + fixed;
  			int income = price * i;
  			if (income > totalCost) {
  				System.out.println(i);
  				break;
  			}
  
  		};
  	}
  }
  ```

  - 접근

    답은 구했지만 런타임..

</br>

- ### 다른사람의 풀이

  ```java
  package BOJ1712;
  
  import java.util.Arrays;
  import java.util.Scanner;
  
  public class Q1712_1 {
  
  	public static void main(String[] args) {
  		Scanner scn = new Scanner(System.in);
  
  		System.out.println("고정비용");
  		int fixed = scn.nextInt(); // 고정비용
  
  		System.out.println("가변비용");
  		int variable = scn.nextInt(); // 가변비용
  //		 total = 1070
  		System.out.println("노트북가격");
  		int price = scn.nextInt(); // 노트북 가격
  		int result = 0;
  		if (price - variable <= 0)
  			result = -1;
  		else {
  			result = (fixed / (price - variable) + 1);
  		}
  		System.out.println(result);
  	}
  }
  ```

  - `result = (fixed / (price - variable) + 1);`

    : 이부분을 생각하지 못했다. 손익분기점 공식 찾아보니까 `고정비 / (1 - (변동비/매출액))` 이 있었다.

