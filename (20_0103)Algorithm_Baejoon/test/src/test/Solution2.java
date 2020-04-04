package test;

import java.util.Arrays;
import java.util.Scanner;

class Solution2 {
    public int[] solution() {
    	
    	
//    	Scanner scn  = new Scanner(System.in);
    
    	int[] nums = {1,5,2,6,3,7,4};
    	
		
		int newAr[] = new int[6];
    		
    		for(int i = 1 ; i< nums.length ; i++) {
//    			System.out.println(nums[i]);
//    			
    			newAr[i-1] = nums[i];
    		System.out.print(newAr[i-1]);	
    			
    		}
    		
    		System.out.println();
    		
    		Arrays.sort(newAr);
    		
    		for(int i = 0 ; i<newAr.length; i++) {
    			System.out.print(newAr[i]);
    		}
    		
//    		System.out.println(newAr);
//    		System.out.println(newAr);
    	
//    	Arrays.sort(output);
        int[] answer = {};
        return answer;
    }
    
    public static void main(String[] args) {
    	Solution2 sol = new Solution2();
    	
		sol.solution();
    	
	}
}