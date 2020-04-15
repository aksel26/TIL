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

			answer = new int[arr.length];
			for (int i = 0; i < arr.length; i++) {

				answer[i] = arr[i];
				
				
				
				
			}
			
			for (int i = 0; i < (answer.length)/2; i++) {
				
				 int max = answer.length- i -1; //6-0-1 , 6-1-1, 6-2-1
		         int temp = 0;
		         temp = answer[i];
		         answer[i] = answer[max];
		         answer[max] = temp;
				
				
				
				
				
				
			}
			
			for (int i = 0; i < answer.length; i++) {
				System.out.println(answer[i]);
			}
			
		
			
		
			
			
			

		}

		return answer;

	}

	public static void main(String[] args) {
		solution19 sol19 = new solution19();
		int[] arr = { 1, 2, 3, 5, 4 };
		sol19.solution(arr);
		// 33= false

	}
}
