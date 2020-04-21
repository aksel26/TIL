package BOJ10809;

import java.util.Scanner;

public class BOJ10809 {

	public static void main(String[] args) {

		String input = "";
		Scanner scn = new Scanner(System.in);
		int cnt = 0;
		input = scn.nextLine();

		String words[] = input.split("");

		String alpha = "abcdefghijklmnopqrstuwvxyz";
		String[] alphabet = alpha.split("");
		int[] result = new int[alphabet.length];
		for (int i = 0; i < result.length; i++) {
			result[i] = -1;

		}
		for (int i = 0; i < alphabet.length; i++) {
			for (int j = 0; j < words.length; j++) {
				if (alphabet[i].equals(words[j])) {
					
					if(alphabet[i].equals("o")) {
						System.out.println("@222");
						j = 5;
						result[i] = j;
						break;
					}
					result[i] = j;
					
					continue;
				}
			}

		}

		for (int i = 0; i < result.length; i++) {
			
			System.out.print(result[i] + " ");
		}

	}

}




//	baekjoon
//	1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 6 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 