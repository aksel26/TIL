package algo_prac;

import java.util.Scanner;

public class SumFor {

	public static void main(String[] args) {
		Scanner stdIn = new Scanner(System.in);
		System.out.println("정수 입력 : ");
		int a = stdIn.nextInt();
		
		int sum = 0;
		for( int i =1 ; i<=a ; i++) {
			sum += i;
		}
		System.out.println("합은 ? " + sum);

	}

}
