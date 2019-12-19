package algo_prac;

import java.util.Scanner;

public class SumForPos_Quiz {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("a를 입력하세요");
		int a = scn.nextInt();
		System.out.println("b를 입력하세요");
		int b= scn.nextInt();
		int minus;
		do {
			System.out.println("a보다 큰 값을 입력하세요");
			System.out.println("b의 값 : ");
			b= scn.nextInt();
			minus=b-a;
		}while(b<a);
		System.out.println("b-a값은 : " + minus + " 입니다.");
	}

}
