package BOJ2309;

import java.util.Arrays;
import java.util.Scanner;

public class Q2309 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		int[] burger = new int[3];
		int[] drink = new int[2];

		System.out.println("버거 입력");
		for (int i = 0; i < burger.length; i++) {
			burger[i] = scn.nextInt();
		}
		Arrays.sort(burger);
		int burgerMin = burger[0];

		Math.min(burger[0], burger[1]);
		System.out.println("음료 입력");
		for (int i = 0; i < drink.length; i++) {
			drink[i] = scn.nextInt();
		}
		Arrays.sort(drink);
		int drinkMin = drink[0];

		int setPrice = burgerMin + drinkMin - 50;
		
		System.out.println(setPrice);

	}

}
