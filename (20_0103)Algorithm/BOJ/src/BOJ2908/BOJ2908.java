package BOJ2908;

import java.util.Scanner;

public class BOJ2908 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String result = "";
		String result2 = "";

		String[] num1 = scn.nextLine().split("");
		String[] num2 = scn.nextLine().split("");

		String temp = num1[num1.length - 1];
		num1[num1.length - 1] = num1[0];
		num1[0] = temp;
		for (int i = 0; i < num1.length; i++) {
			result += num1[i];
		}
		int res = Integer.parseInt(result);
		String temp2 = num2[num2.length - 1];
		num2[num2.length - 1] = num2[0];
		num2[0] = temp2;
		for (int i = 0; i < num2.length; i++) {
			result2 += num2[i];
		}

		int res2 = Integer.parseInt(result2);

		System.out.println(Math.max(res, res2));

	}

}
