package BOJ1712;

import java.util.Arrays;
import java.util.Scanner;

public class Q1712 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("고정비용");
		int fixed = scn.nextInt(); // 고정비용

		System.out.println("가변비용");
		int variable = scn.nextInt(); // 가변비용
//		 total = 1070
		System.out.println("노트북가격");
		int price = scn.nextInt(); // 노트북 가격

		int i = 1;

		while (true) {
			i++;
			int totalCost = (variable * i) + fixed;
			int income = price * i;
			if (income > totalCost) {
				System.out.println(i);
				break;
			}

		}
		;

	}

}
