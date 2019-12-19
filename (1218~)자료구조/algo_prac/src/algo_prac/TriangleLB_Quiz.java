package algo_prac;

import java.util.Scanner;

public class TriangleLB_Quiz {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int n ;
		do {
			System.out.println("몇 단 삼각형입니까?");
			n = scn.nextInt();
			
		}while(n<=0);
		
		for(int i=1; i<=n; i++) {
			
			for (int j =1 ; j<=i; j++) {
				System.out.print("*");}
			System.out.println();
		}


	}

}
