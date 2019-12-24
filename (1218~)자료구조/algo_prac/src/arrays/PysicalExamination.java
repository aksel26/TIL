package arrays;

import java.util.Scanner;

//클래스 
//	: 임의의 데이터형을 자유롭게 조합하여 만들 수 있는 자료구조
//	
//	클래스 선언
//		class XYZ{
//			int x;  //x는 int형 필드.
//			long y; // y는 Long형 필드.
//			double z; //z는 double 형 필드.
//		}
//	XYZ a; //XYZ형의 클래스형 변수  a 선언
//	
//	a=new XYZ(); //XY형의 클래스 인스턴스(실체) 생성
//	XYZ a = new XYZ() ; //한번에 선언하기.

//클래스의 배열 

public class PysicalExamination {

	static final int VMAX = 21; // 시력분포 (0.0 ~ 0.1 단위로 21개)

	static class PhyscData {
		String name;
		int height;
		double vision;

		// 생성자
		PhyscData(String name, int height, double vision) {
			this.name = name;
			this.height = height;
			this.vision = vision;
		}
	}

	// 키의 평균
	static double aveHeight(PhyscData[] dat) {
		double sum = 0;
		for (int i = 0; i < dat.length; i++) {
			sum += dat[i].height;
		}
		return sum / dat.length;
	}

	//시력분포
	static void distVision(PhyscData[] dat, int[] dist) {
		int i =0;
		dist[i] =0;
		for (i =0 ; i<dat.length; i++) {
			if(dat[i].vision >=0.0 && dat[i].vision <= VMAX / 10.0)
				dist[(int)(dat[i].vision*10)]++;
		}
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		PhyscData[] x= {
				new PhyscData("박현규",162,0.3),
				new PhyscData("황진이",173,0.7),
				new PhyscData("최윤미",185,2.0),
				new PhyscData("홍연의",165,1.5),
				new PhyscData("이수진",178,0.4),
				new PhyscData("김영준",169,1.2),
				new PhyscData("박용이",174,0.8),
				
		};
		
		int[] vdist= new int[VMAX];	//시력분포
		
		System.out.println("===== 신체검사 리스트 =====");
		System.out.println("이름      키    시력");
		System.out.println("-----------------------");
		for(int i =0; i<x.length;i++) {
			
			System.out.printf("%-8s%3d%5.1f\n",x[i].name,x[i].height,x[i].vision);
		}
		System.out.printf("\n평균 키 : %5.1fcm\n", aveHeight(x));
		
		distVision(x, vdist);  //시력분포를구함
		
		System.out.println("\n시력 분포");
		for(int i = 0; i<VMAX; i++) {
			System.out.printf("%3.1f ~ : %2d명\n", i/10.0, vdist[i]);
		}
	}

}
//	클래스 본체와 멤버
//	1.클래스 본체에서 선언할 수 있는 내용들	
//		멤버 (필드/ 메서드 /중첩 클래스/중첩 인터페이스)
//		클래스 초기화 / 인스턴스 초기화
//		생성자
//		
//	2.필드/ 메서드 / 생성자를 선언할 때 public/protected/private	을 지정할 수 있다.
//	3.메서드 / 생성자는 다중으로 정의 (오버로드) 할 수 있다.
//		오버로드 : 형식은 다르지만 같은 이름을 붙이는 것.
//	4.final로 선언한 필드는 한 번만 값을 대입할 수 있다.
//	5.생성자는 새로 생성한 인스턴스의 초기화를 위해 사용된다. 
	

//		===== 신체검사 리스트 =====
//		이름      키    시력
//		-----------------------
//		박현규     162  0.3
//		황진이     173  0.7
//		최윤미     185  2.0
//		홍연의     165  1.5
//		이수진     178  0.4
//		김영준     169  1.2
//		박용이     174  0.8
//		
//		평균 키 : 172.3cm
//		
//		시력 분포
//		0.0 ~ :  0명
//		0.1 ~ :  0명
//		0.2 ~ :  0명
//		0.3 ~ :  1명
//		0.4 ~ :  1명
//		0.5 ~ :  0명
//		0.6 ~ :  0명
//		0.7 ~ :  1명
//		0.8 ~ :  1명
//		0.9 ~ :  0명
//		1.0 ~ :  0명
//		1.1 ~ :  0명
//		1.2 ~ :  1명
//		1.3 ~ :  0명
//		1.4 ~ :  0명
//		1.5 ~ :  1명
//		1.6 ~ :  0명
//		1.7 ~ :  0명
//		1.8 ~ :  0명
//		1.9 ~ :  0명
//		2.0 ~ :  1명

