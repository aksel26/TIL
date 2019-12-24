package method_for_while;

import java.util.Scanner;

public class Max3_1 {

//	최대값을 여러번 반복해서 출력하는 경우 메서드를 활용
//	메서드 정의 시 메서드에 전달되는 값을 저장하기 위해 변수를 사용 : 매개변수

	//	형식매개변수 : 가인수
//	매개변수 호출 시 사용하는 매개변수의 값 : 실인수
//	--> 메서드 정의 : 매개변수, 호출시 : 실인수
	
	static int max3(int a, int b, int c) {
		int max=a;
		if(b>max)
			max=b;
		if(c>max)
			max=c;
		return max;
	}
	public static void main(String[] args) {
		System.out.println("max3(3,2,1) = "+ max3(3,2,1));
		System.out.println("max3(5,2,2) = "+ max3(5,2,1));
		System.out.println("max3(6,2,1) = "+ max3(6,2,1));
		System.out.println("max3(7,2,1) = "+ max3(7,2,1));
		System.out.println("max3(8,2,1) = "+ max3(8,2,1));
		System.out.println("max3(9,2,1) = "+ max3(9,2,1));
		

	}

}
