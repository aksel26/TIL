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
