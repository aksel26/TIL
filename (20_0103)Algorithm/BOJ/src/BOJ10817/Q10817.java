package BOJ10817;

import java.util.Arrays;
import java.util.Scanner;

public class Q10817 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		int[] num = new int[3];
		
		
		for (int i = 0; i < num.length; i++) {
			num[i] = scn.nextInt();
			
			
		}
		
		Arrays.sort(num);
		System.out.println(num[num.length/2]);
		
		
	}

}
