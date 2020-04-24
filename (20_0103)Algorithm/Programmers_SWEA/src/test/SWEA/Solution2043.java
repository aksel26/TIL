package test.SWEA;

import java.util.Scanner;

class Solution2043 {
	public static void main(String args[]) throws Exception {

		Scanner scn= new Scanner(System.in);
		
		int password = scn.nextInt();
		
		int num = scn.nextInt();;
		
		int result = password - num + 1;
			System.out.println(result);
		
	}
}
