package method_for_while;

import java.util.Scanner;

public class Max3_2 {

//연습문제 1 : 매개변수 4개
	
	static int max4(int a, int b, int c, int d) {
		int max=a;
		if(b>max)
			max=b;
		if(c>max)
			max=c;
		if(d>max)
			max=d;
		return max;
	}
	
//연습문제 2 : 최솟값 구하기
	
	static int min(int a, int b, int c) {
		int min=a;
		if(b<min)
			min=b;
		if(c<min)
			min=c;
		return min;
	}
	public static void main(String[] args) {
		
		System.out.println("max4(3,2,5,19) = " + max4(3,2,5,19));
		
		System.out.println("min(1,2,3) = "+min(1,2,3));
		

	}

}


//####### 추가 #######
	//	세 값의 대소 관계 : 13가지 동류 -- 결정 트리



