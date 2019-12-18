package algo_prac;

import java.util.Scanner;

public class SumFor_1 {

	public static void main(String[] args) {
		System.out.println("정수 입력");
		Scanner scn = new Scanner(System.in);
		int n =scn.nextInt();
		int sum=0;
		if (n==7) {
			for(int i=1; i<=n ; i++) {
				if(i<n) {
					System.out.print(i + " + ");
				}
				else {
					System.out.print(i);
				}
				sum+=i;
				
			}
			System.out.println(" = " +sum);	
			System.out.println("7까지의 합은 : " + sum +" 입니다");
			
		
		}
		else{
			System.out.println("7 이외이 숫자를 입력하였습니다.");
		}
		

	}

}
