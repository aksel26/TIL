package test;

import java.util.Arrays;
import java.util.Scanner;

class Solution3 {
	public boolean solution(String s) {

		   int length = s.length();
	        if (length != 4 && length != 6)
	            return false;
	        for (int i = 0; i < length; ++i) {
	            char c = s.charAt(i);
	            if (c < '0' || c > '9'){
	                return false;
	            // 똑같은데 ASCII 값으로 적음
//	            if (c < 48 || c > 57) {
//	                return false;
//	            }
	            }
	        }
	        return true;
	    }
}
	 
    
