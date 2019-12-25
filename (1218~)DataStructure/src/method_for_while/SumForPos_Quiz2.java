package method_for_while;

import java.util.Scanner;

public class SumForPos_Quiz2 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("정수를 입력하세요");
		int a= 0;
		int result= 0;
		
		
		a = scn.nextInt();
		do {
			a/=10;
			result++; //마지막에는 int형이니까 바로 0으로 표시되고 do 구문을 빠져나간다
		}while(a>0);
		

		System.out.println("그 수는 " +result +"자리 입니다");
			}

}
