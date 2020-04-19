## Q 1110

- 문제

  0보다 크거나 같고, 99보다 작거나 같은 정수가 주어질 때 다음과 같은 연산을 할 수 있다. 먼저 주어진 수가 10보다 작다면 앞에 0을 붙여 두 자리 수로 만들고, 각 자리의 숫자를 더한다. 그 다음, 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를 이어 붙이면 새로운 수를 만들 수 있다. 다음 예를 보자.

  26부터 시작한다. 2+6 = 8이다. 새로운 수는 68이다. 6+8 = 14이다. 새로운 수는 84이다. 8+4 = 12이다. 새로운 수는 42이다. 4+2 = 6이다. 새로운 수는 26이다.

  위의 예는 4번만에 원래 수로 돌아올 수 있다. 따라서 26의 사이클의 길이는 4이다.

  N이 주어졌을 때, N의 사이클의 길이를 구하는 프로그램을 작성하시오.

</br>



- 내꺼

  ```java
  package test.BOJ;
  
  import java.util.Scanner;
  
  public class Q1110 {
  
  	public int solution(int num) {
  		int cnt = 0;
  		String rst = "";
  		String[] str = {};
  
  		while (!str.equals(num)) {
  			str = Integer.toString(num).split("");
  
  			int ten = Integer.parseInt(str[0]);
  			int one = Integer.parseInt(str[1]);
  
  			int result = one + ten;
  			if (result < 10) {
  				rst = str[1] + Integer.toString(result);
  
  			} else if (result > 10) {
  				rst = str[1] + Integer.toString(result).charAt(1);
  
  			}
  
  			num = Integer.parseInt(rst);
  			System.out.println(num);
  
  			cnt++;
  		}
  
  		return cnt;
  	}
  
  	public static void main(String[] args) {
  		Scanner scn = new Scanner(System.in);
  
  		Q1110 q = new Q1110();
  		q.solution(scn.nextInt());
  
  	}
  
  }
  
  ```

  - 접근

    숫자를 문자열로 바꿔 자리수대로 합한다.

    그 후, 자리수 규칙에 맞춰서 `while`문으로 반복

  - 문제

    1. 배열과 자리수별로 나누다 보니 '05' 와 같은 수를 처리할 때 문제가 생김

    

  </br>

- 다른사람의 풀이

  ```java
  import java.util.Scanner;
  public class asdfffs {
      public static void main(String[] args) {
          // TODO Auto-generated method stub
          Scanner sc = new Scanner(System.in);
          int fn=sc.nextInt();
          int cnt=0; int x=fn;
          
          while(true) {
              if(x<10) {
                  x=10*x+x;
                  cnt++;
              }else {
                  x=((x%10+x/10)%10)+10*(x%10);
                  cnt++;
              }
              if(x==fn)break;
          }
          System.out.println(cnt);
      }
  }
  ```

  

---

- 너무 어렵게 생각한 것 같다. 숫자놀이에는 최대한 숫자로 구현해야겠다.



