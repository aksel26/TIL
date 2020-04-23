package BOJ8958;

import java.util.Arrays;
import java.util.Scanner;

public class Q8958 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		// testCase
		int tcase = scn.nextInt(); 
		String[] cases = new String[tcase];
		for (int i = 0; i < tcase; i++) {
			cases[i] = scn.next();
		}
		scn.close();

		
		for (String OXresult : cases) {
			int result = 0;
			int scoreO = 0;

			for (int j = 0; j < OXresult.length(); j++) {

				if (OXresult.charAt(j) == 'O') {

					result += ++scoreO;
				} else {
					scoreO = 0;
				}

			}
			System.out.println(result);

		}

	}

}

//		3
//		OXOXOXOXOXOXOX
//		OOOOOOOOOO
//		OOXXOXXOOO
//		7
//		55
//		10
