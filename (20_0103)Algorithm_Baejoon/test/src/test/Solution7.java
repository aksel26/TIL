package test;

import java.util.*;
import java.util.stream.Collectors;

public class Solution7 {
	 public String solution(String[] seoul) {
		 String answer = "";
		
		 
		 for(int i = 0 ; i<seoul.length;i++) {

			 if(seoul[i].contains("Kim")) {
				 
				 answer = "김서방은 " +i + "에 있다.";
		break;
			 }
			  
		 }
System.out.println(answer);

	      return answer;
	}
        
  
	
	public static void main(String[] args) {
		
		Solution7 sol7 = new Solution7();
		String input[] = {"Jane","do","Kim"};
		sol7.solution(input);
	}
}