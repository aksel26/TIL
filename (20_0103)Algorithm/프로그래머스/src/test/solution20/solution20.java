package test.solution20;

import java.util.*;

public class solution20 {
	  public String solution(int num) {
	      String answer = "";
	     
	      answer = num % 2 == 0 ? "Even" : "Odd";
	      return answer;
	  }

	public static void main(String[] args) {
		solution20 sol20 = new solution20();
		System.out.println(sol20.solution(0));
		
	
	}
}
