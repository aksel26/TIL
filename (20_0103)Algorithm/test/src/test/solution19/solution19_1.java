package test.solution19;

import java.util.*;

public class solution19_1 {
	public int[] solution(int[] arr) {

		if (arr.length <= 1)
			return new int[] { -1 };

		int min = Arrays.stream(arr).min().getAsInt();

		return Arrays.stream(arr).filter(i -> i != min).toArray();

	}

	public static void main(String[] args) {
		solution19_1 sol19 = new solution19_1();
		int[] arr = { 1, 2, 3, 5, 4 };
		
		sol19.solution(arr);
		
		

	}
}
