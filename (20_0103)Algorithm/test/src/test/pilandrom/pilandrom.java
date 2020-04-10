package test.pilandrom;

import java.util.ArrayList;
import java.util.Stack;

public class pilandrom {

	public boolean is_pilandrom(String s) {
		boolean answer = false;

		StringBuffer sb = new StringBuffer(s);

		sb.reverse();

		String str = sb.toString();

		if (s.equals(str)) {

			answer = true;

		}
		System.out.println(answer);
		return answer;
	}

	public static void main(String[] args) {
		pilandrom pil = new pilandrom();
		pil.is_pilandrom("토마토");

	}

}
