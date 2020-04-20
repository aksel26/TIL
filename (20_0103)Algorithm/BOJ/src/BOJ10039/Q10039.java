package BOJ10039;

import java.util.Arrays;
import java.util.Scanner;

public class Q10039 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		int[] score = new int[5];
		int sum = 0;
		for (int i = 0; i < score.length; i++) {
			score[i] = scn.nextInt();
			
			if(score[i] < 40 ) {
				score[i] = 40;
			}
			
			sum += score[i];
		}
		
		System.out.println(sum/ score.length);
		
		
		
	}

}
