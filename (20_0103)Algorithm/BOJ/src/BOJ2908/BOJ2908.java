package BOJ2908;

import java.util.Scanner;

public class BOJ2908 {

	public static void main(String[] args) {
		
		Scanner scn = new Scanner(System.in);
		
		int height[] = new int[9];
		
		for (int i = 0; i < height.length; i++) {
			height[i] =scn.nextInt();	
			System.out.println(height[i]);
		}
				
	}
}
