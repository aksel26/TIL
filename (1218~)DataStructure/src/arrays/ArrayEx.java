package arrays;

import java.util.Arrays;

public class ArrayEx {

	public static void main(String[] args) {
		int[] arr = new int[]{1,2,3,4,5,6};
		
	    

		int[] arr2 = Arrays.copyOf(arr, arr.length);
		
		
		System.out.println(Arrays.toString(arr));
		
	}

}
