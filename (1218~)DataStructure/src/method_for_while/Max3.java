package method_for_while;

import java.util.Scanner;

public class Max3 {

	public static void main(String[] args) {
		Scanner stdIn = new Scanner(System.in);
		
		System.out.println("세 정수의 쵀댓값 구하기");
		System.out.println("a의 값 : "); 
			int a = stdIn.nextInt();
		System.out.println("b의 값 : "); 
			int b = stdIn.nextInt();
		System.out.println("c의 값 : "); 
			int c = stdIn.nextInt();
		
			
//순차적 구조	
		int max =a;

		//선택구조 (if) 
		if(b>max) max=b;
		if(c>max) max=c;
		System.out.println( "최대값은 "+max+"입니다");
		

	}

}
