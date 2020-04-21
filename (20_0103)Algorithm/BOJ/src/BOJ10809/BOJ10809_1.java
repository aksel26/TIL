package BOJ10809;

import java.util.*;

public class BOJ10809_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
		int[] start_pos = new int[26];
		int i, alp_pos;

		for (i = 0; i < start_pos.length; i++)
			start_pos[i] = -1;
		
		for (i = 0; i < input.length(); i++) {
			alp_pos = input.charAt(i) - 97; // 알파펫
			if (start_pos[alp_pos] == -1)
				start_pos[alp_pos] = i;
		}
		for (int j : start_pos) {
			System.out.print(j + " ");
		}
	}
}