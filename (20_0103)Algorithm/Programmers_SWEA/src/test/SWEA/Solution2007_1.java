package test.SWEA;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

class Solution2007_1 {
	public static void main(String args[]) throws Exception {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(br.readLine());

		for (int i = 1; i <= T; i++) {
			String s = br.readLine();
			for (int j = 1; j <= s.length(); j++) {
				String pattern = s.substring(0, j);
				String tmp = s.substring(j, j + j);
				if (pattern.equals(tmp)) {
					System.out.println("#" + i + " " + pattern.length());
					break;
				}
			}

		}
	}
}