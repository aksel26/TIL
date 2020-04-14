package test.solution19;

import java.util.*;

public class solution19 {
	public int[] solution(int[] arr) {

		int[] answer = {};

		if (arr.length == 1) {
			answer = new int[arr.length];
			answer[0] = -1;

			return answer;

		}

		else if (arr.length > 1) {

			for (int i = 0; i < arr.length; i++) {

				answer = new int[arr.length+1];

				answer[i] = arr[i];
				
				
			if(answer[i]<answer[i+1]) {
				
				int tmp = answer[i+1];
				answer[i+1] = answer[i];
				answer[i] = tmp;
				
			}
			
			System.out.println(Integer.min(answer[i], 4));
			
//			System.out.println(answer[i+1]);
					
				
			}
			
			
		
			

			
		}

		return answer;

	}

	public static void main(String[] args) {
		solution19 sol19 = new solution19();
		int[] arr = { 1, 2, 3, 5 ,4};
		sol19.solution(arr);
		// 33= false

	}
}
