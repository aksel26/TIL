package algo_prac;

import java.util.Scanner;

public class TriangleLB_Quiz {
	
	
	//왼쪽 아래가 직각인 이등변 삼각형 출력
	static void trianglLB(int n) {
		for (int i =1 ; i <=n ; i++) {
			for( int j =1; j<=i; j++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}
	
	
	
	//왼쪽 위가 직각인 이등변 삼각형
	static void TriangleLU(int n ) {
		for(int i =1; i<=n ; i ++) {
			for(int j =i ; j<=n ; j++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}
	
	
	//오른쪽 위가 직각인 이등변 삼각형

	static void triangleRU(int n) {
		for (int i = 1; i <= n; i++) { 				// i행 (i = 1, 2, … ,n)
			for (int j = 1; j <= i - 1; j++) 		// i-1개의 ' '를 나타냄
				System.out.print(' ');
			for (int j = 1; j <= n - i + 1; j++) 	// n-i+1개의 '*'를 나타냄
				System.out.print('*');
			System.out.println();					// 개행(줄변환)
		}
	}

	
	//오른쪽 아래가 직각인 이등변 삼각형
	
	static void triangleRB(int n) {
		for(int i =1; i<=n; i++) {
			
			for (int j =1 ; j<=n-i; j++)   // i - 1 개의  ' '  
				System.out.print(" ");
			
			for(int j =1; j<=i; j++)   		//i 행 갯수 만큼 
				System.out.print("*");
			System.out.println();
		}
		
	}
	public static void main(String[] args) {
		
//		trianglLB(9);
//		
//		*
//		**
//		***
//		****
//		*****
//		******
//		*******
//		********
//		*********
		
//		TriangleLU(8);
//		
//		********
//		*******
//		******
//		*****
//		****
//		***
//		**
//		*
		
//		triangleRU(4);
//		
//		****
//		 ***
//		  **
//		   *

		
//		triangleRB(4);
//		
//		   *
//		   **
//		  ***
//		 ****


	}

}
