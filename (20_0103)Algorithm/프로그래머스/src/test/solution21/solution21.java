package test.solution21;

import java.util.*;

public class solution21 {
	public double solution(int[] arr) {
	      double answer = 0;
	      
	      for (int i = 0; i < arr.length; i++) {
			answer += arr[i];
			
		}
	      
	      return answer/arr.length;
	  }

	public static void main(String[] args) {
		solution21 sol20 = new solution21();
		int []arr = {5};
	System.out.println(sol20.solution(arr));	
	
	}
}
