package test.SWEA;

import java.util.Scanner;

class Solution2058 {
	public static void main(String args[]) throws Exception {

		Scanner scn= new Scanner(System.in);
		
		int num = scn.nextInt();
		
		int result = 0;
		
		result= num / 1000 + num /100 % 10 + num / 10 % 100 ;
		
			int result1 = num % 10 ; // 1의자리
			int result2 = num % 100 / 10 ; //10의자리
			int result3 = num % 1000 / 100 ; // 100 의자리
			int result4 = num % 10000 / 1000; //1000의 자리  
			
			result = result1 + result2 + result3 +result4;
			
			System.out.println(result);
	}
}
