package test.SWEA;

import java.util.Scanner;

class Solution2005 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {
			
			int size = sc.nextInt();
			
			int triangle[][] = new int[size][size];
			
			for (int j = 0; j <= i; j++) {
				
				if(i == j ) {
					triangle[i][j] = 1;
				}else if( j==0) {
					triangle[i][j] = 1;
				}else {
					triangle[i][j] = triangle[i - 1][j] + triangle[i-1][j-1];
				}
				
					
				
			}
			
		}
			
	}

}