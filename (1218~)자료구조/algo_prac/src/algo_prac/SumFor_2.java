package algo_prac;

import java.util.Scanner;

public class SumFor_2 {

	public static void main(String[] args) {
		// 가우스의 덧셈 방법으로 합 구하기
		// ex) 1부터 10까지의 합 : (1+10)*5 = 55

	 System.out.println("정수 입력 : ");
		Scanner scn = new Scanner(System.in);
	 
		
// 내꺼 : 홀수 합에 대한 처리를 하지 못함....		
	 int n = scn.nextInt();
	 int init = 1;
	 int mul = n/2;
	 int sum = (init + n)* mul;
	 System.out.println(sum);
	 
	 
	 
//	해답 
	int sum2 = (n + 1) * (n / 2) + (n % 2 == 1 ? (n + 1) / 2 : 0); // 합
	System.out.println("1부터 " + n + "까지의 합은 " + sum + "입니다.");
	}
	
	

}
