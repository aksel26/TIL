package method_for_while;

import java.util.Scanner;



public class TriangleLB_Quiz2 {
	
	//n단의 피라미드 만들기
	static void spira(int n ) {
		for(int i =1; i<=n; i++) {
			for(int j = 1; j<=n-i; j++)
				System.out.print(" ");
			for(int j = 1; j<=(i-1)*2+1; j++)
				System.out.print("*");
			System.out.println();
		}
	}
		
	//숫자 피라미드 만들기 
	static void npira(int n) {
		for (int i=1; i<=n ;i ++) {
			for(int j =1;j<=n-i;j++) 
				System.out.print(" ");
			for(int j =1;j<=(i-1)*2+1;j++)
				System.out.print(i%10);
			System.out.println();
		}	
		
	}
		
	
	
	public static void main(String[] args) {
//		spira(10);
		
//	        *
//	       ***
//	      *****
//	     *******
//	    *********
//	   ***********
//	  *************
//	 ***************
//	*****************
//     *******************
	
		
//		npira(4);
//		
//		   1
//                222
//		 33333
//		4444444

		

	}

}
