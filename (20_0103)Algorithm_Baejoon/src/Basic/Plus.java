package Basic;

import java.util.Scanner;

public class Plus {

	public static void main(String[] args) {

//		1000번 
//		int num1,num2=0;
//		Scanner scn1 = new Scanner(System.in);
//		Scanner scn2 = new Scanner(System.in);
//		 num1 = scn1.nextInt();
//		 num2 = scn1.nextInt();
//		System.out.println(num1+num2);

		
//		2558번
//		두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
//
//		입력
//		첫째 줄에 A, 둘째 줄에 B가 주어진다. (0 < A, B < 10)
//
//		출력
//		첫째 줄에 A+B를 출력한다.

//		int a,b =0 ;
//		Scanner scn = new Scanner(System.in);
//		Scanner scn2 = new Scanner(System.in);
//		a =  scn.nextInt();
//		b = scn.nextInt();
//			if(0<a && b<10) {
//				System.out.println(a+b);
//			}

		
//		10950번
//		두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
//
//		입력
//		첫째 줄에 테스트 케이스의 개수 T가 주어진다.
//
//		각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
//
//		출력
//		각 테스트 케이스마다 A+B를 출력한다.

//		int tcase = 0;
//
//		Scanner scn = new Scanner(System.in);
//
//		tcase = scn.nextInt();
//		int a, b = 0;
//		for (int i = 0; i < tcase; i++) {
//			a = scn.nextInt();
//			b = scn.nextInt();
//			System.out.println(a + b);
//		}
	
		
//		10951번
//		두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
//
//		입력
//		입력은 여러 개의 테스트 케이스로 이루어져 있다.
//
//		각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
//
//		출력
//		각 테스트 케이스마다 A+B를 출력한다.
		
		
		
//		Scanner scn = new Scanner(System.in);
//		
//		int a,b = 0;
//	
//		while(scn.hasNextInt()) {
//			a =scn.nextInt();
//			b = scn.nextInt();
//			System.out.println(a+b);
//		}
//		
		
		
		
//		10952번
//		두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
//
//		입력
//		입력은 여러 개의 테스트 케이스로 이루어져 있다.
//
//		각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
//
//		입력의 마지막에는 0 두 개가 들어온다.
		
//		Scanner scn = new Scanner(System.in);
//		
//		int a,b = 0;
//		
//		do {
//			a = scn.nextInt();
//			b = scn.nextInt();
//			if(a!=0 && b!=0)
//			System.out.println(a+b);
//		}while(a != 0 && b!= 0);
		

		
		
//		10953번
//		첫째 줄에 테스트 케이스의 개수 T가 주어진다.
//
//		각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. A와 B는 콤마(,)로 구분되어 있다. (0 < A, B < 10)
		
		Scanner scn  = new Scanner(System.in);
		
		int a ,b, tcase= 0 ;
		tcase = scn.nextInt();
		
		//오답
//		for (int i = 0; i< tcase ; i++) {
//			a = scn.nextInt();
//			System.out.print(",");
//			b = scn.nextInt();
//			System.out.println(a+b);
//			
//		}
		
		for(int i=0;i<tcase;i++){
            String[] arr = scn.next().split(",");
            System.out.println(Integer.parseInt(arr[0])+Integer.parseInt(arr[1]));
        }
		
	
		
		
	}

}
