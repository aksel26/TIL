package test;

import java.util.Arrays;
import java.util.Scanner;

class Solution4 {
	  public int solution(String s) {
	      	int answer=0;

			if (s.length() < 6 && s.length() > 0) {
				if (s.charAt(0) != '0') {
					answer = Integer.parseInt(s);
				}
	        }
			return answer;
		}
	      

	  public static void main(String[] args) {
		Solution4 sol4 = new Solution4();
		System.out.println(sol4.solution("1234"));
		
	}
	  }


