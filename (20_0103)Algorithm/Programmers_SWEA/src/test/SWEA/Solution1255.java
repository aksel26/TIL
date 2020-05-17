package test.SWEA;

import java.util.Scanner;

public class Solution1255 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		int T = scn.nextInt();

		int[] array = new int[8];

		for (int i = 0; i < T; i++) {

			
//			배열 넣기
			for (int j = 0; j < array.length; j++) {
				array[j] = scn.nextInt();

			}
			
//			수 빼기 사이클
			for (int j = 0; j < array.length; j++) {
				int endNum = array[0] - 1;
				
				array[j] = array[j+1];
				
				array[0] = endNum;
			}
			
			for (int j = 0; j < array.length; j++) {
				System.out.print(array[j]+" ");
			}

		}
	}

}
