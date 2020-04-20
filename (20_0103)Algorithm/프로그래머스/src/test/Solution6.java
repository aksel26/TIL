package test;

import java.util.*;
import java.util.stream.Collectors;

public class Solution6 {
	public int[] solution(int []arr) {
        
        
        ArrayList<Integer> list = new ArrayList<Integer>();
        int current = 10;
        
        
        for(int i = 0 ; i< arr.length ;i++) {
        	if(arr[i]!=current) {
        		list.add(arr[i]);
        		current = arr[i];
        	}
        	
        }
        
        int answer[] = new int[list.size()];
        for(int i = 0 ; i<answer.length; i++) {
        	answer[i] = list.get(i);
        }
        
        
        return answer;
	}
	
	public static void main(String[] args) {
		int[] answer = {1,1,3,3,0,1,1};
		Solution6 sol6 = new Solution6();
		sol6.solution(answer);
	}
}