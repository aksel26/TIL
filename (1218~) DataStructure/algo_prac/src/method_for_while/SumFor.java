package method_for_while;

import java.util.Scanner;

public class SumFor {

	public static void main(String[] args) {
		Scanner stdIn = new Scanner(System.in);
		System.out.println("정수 입력 : ");
		int a = stdIn.nextInt();
		
		int sum = 0;
		for( int i =1 ; i<=a ; i++) {
			sum += i;
		}
		System.out.println("합은 ? " + sum);

	}

}


//For문에서 초기화, 제어식, 업데이트 부분은 생략 가능 * 세미콜론은 생략하면 안됨
//For 종료 후에도 변수를 사용하려면 For문 밖애서 선언해주어야 한다.

