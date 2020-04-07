package test;

import java.util.*;
import java.util.regex.Pattern;


public class Solution11 {
	public int[] solution(int[] arr, int divisor) {

		int[] answer= {};
		ArrayList<Integer> al = new ArrayList<Integer>();
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] % divisor == 0) {
				al.add(arr[i]);
			}
		}
		if(al.isEmpty()) {
			al.add(-1);
		}
		answer = new int[al.size()];
		
		for(int i = 0 ; i<al.size(); i++) {
			answer[i] = al.get(i);
		
		}
		
		
		return answer;

	}

	public static void main(String[] args) {
		Solution11 sol11 = new Solution11();
		int[] arr = { 5, 9, 7, 10 };
		sol11.solution(arr, 5);
	}
}