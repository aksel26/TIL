package test.solution11;

import java.util.*;

public class Solution11_Stream {
	public int[] solution(int[] arr, int divisor) {

		return Arrays.stream(arr).filter(element -> element % divisor == 0).toArray();
	}

	public static void main(String[] args) {
		Solution11_Stream sol11 = new Solution11_Stream();
		int[] arr = { 2, 36, 1, 3 };
		
		
  System.out.println( Arrays.toString( sol11.solution(arr, 1)));	
	}
}