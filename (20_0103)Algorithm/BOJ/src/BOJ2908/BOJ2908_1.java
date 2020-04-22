package BOJ2908;

import java.util.Scanner;

public class BOJ2908_1 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String num1 = scn.nextLine();
		String num2 = scn.nextLine();
		
		String result ="";
		
		for (int i = num1.length()-1; i >=0; i--) {
			result += num1.charAt(i);
		}
		num1 = result;
		
		result = "";
		for (int i = num2.length()-1; i >=0; i--) {
			result += num2.charAt(i);
		}
		num2 = result;
		
		int number1 = Integer.parseInt(num1);
		int number2 = Integer.parseInt(num2);
		
		if (number1>number2) {
			System.out.println(number1);
		}else {
			System.out.println(number2);
		}
	}

}
