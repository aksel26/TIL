//반복구조 ( 루프 )


package method_for_while;

import java.util.Scanner;

public class SumWhile {
	public static void main(String[] args) {
		Scanner stdIn = new Scanner(System.in);
		System.out.println("1부터 n까지의 합 구하기");
		System.out.println("n의 값 : ");
		int n = stdIn.nextInt();
		
	//합을 구하기 위한 준비
		int sum =0;
		int i =1;
		
	//루프 본문
		while(i<=n) {
			sum+=i;
			i++;
		}
		System.out.println("1부터 n까지의 합은" + sum +" 입니다");
		
		//연습문제 Q6. 
		// while문 종료 시 변수 i 값이 n+1이 됨을 확인하기 
		System.out.println("변수 i 값은 : " + i);
	}
}

//###### 하나의 변수 사용시 For문을 사용하는 것이 낫다 ######
