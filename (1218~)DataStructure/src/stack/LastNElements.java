package stack;

import java.util.Scanner;


//	원하는 개수만큼 값을 입력 받아 요솟수가 N인 배열에 마지막 N개를 저장 

public class LastNElements {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		
		final int N = 10;
		int [] a = new int[N]	; //입력받은 값을 저장
		int cnt = 0;		//입력받은 갯
		int retry;
		
		System.out.println("정수 입력 :");
		
		do {
			System.out.printf("%d번째 정수 : ", cnt+1);
			a[cnt ++ %N] = scn.nextInt()	;
			
			System.out.print("계속할까요? (1:예/ 0:아니오) : ");
			retry=scn.nextInt();
			
		}while(retry==1);
		
		int i= cnt -N;
		if(i<0) i =0;
		
		
		for(;i<cnt;i++) {
			System.out.printf("%2d번째 정수 = %d\n",i+1,a[i%N]);
		}
	}

}
