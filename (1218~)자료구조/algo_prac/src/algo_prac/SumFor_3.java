package algo_prac;

import java.util.Scanner;

//매개변수 a,b 합
//정수 a,b 포함 그 사이 정수의 합을 구해 반환하는 메서드 작성

public class SumFor_3 {
	static int sumof(int a, int b) {
		int min = 0;
		int max = 0;
		if (a > b) {
			min = b;
			max = a;

		} else {
			min = a;
			max = b;

		}
		int sum = 0;
		for (int i = min; i <= max; i++) {
			sum += i;
		}
		return (sum);

	}

	public static void main(String[] args) {

		System.out.println("sumof(2,3) = " + sumof(3, 2));

	}

}
