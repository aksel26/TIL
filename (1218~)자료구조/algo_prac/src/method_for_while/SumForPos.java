package method_for_while;

import java.util.Scanner;

public class SumForPos {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int n;
		System.out.println("1부터 n까지의 합 구하기");
		
		do {
			System.out.println("n의 값 : ");
			n=scn.nextInt();
			
		}while(n<=0); //n이 0이하이면 재반복 while(true) -> 재반복
			
		
		int sum=0;
		
		for(int i =0;i<=n;i++) {
			sum+=i;
			
		}
		System.out.println("1부터 n까지의 합은 : " +sum +" 입니다.");

	}

}
