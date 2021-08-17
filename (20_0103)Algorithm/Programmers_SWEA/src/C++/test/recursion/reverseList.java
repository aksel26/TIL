package test.recursion;

import java.util.List;

public class reverseList {

	public static String flip(String n) {
		 if ((null == n) || (n.length() <= 1)) {
		        return n;
		    }
		return flip(n.substring(1))+n.charAt(0);
	}

	public static void main(String[] args) {
		reverseList rl = new reverseList();
		System.out.println(rl.flip("1234567"));
	}

}
