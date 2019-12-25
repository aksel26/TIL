package search;

import java.util.Arrays;
import java.util.Scanner;

public class BinarySearchTester {

	public static void main(String[] args) {
		Scanner scn  = new Scanner(System.in);
		System.out.println("요솟 수 :");
		int num  = scn.nextInt()	;
		int x[] = new int[num];
		
		System.out.println("오름차순으로 입력하세요");
		System.out.println("x[0]:");
		
		x[0] = scn.nextInt();
		
		for(int i = 1 ; i<num ; i++) {
			do {
				System.out.println("x[" +i + "]");
				x[i] = scn.nextInt()	;
				
			}while(x[i]<x[i-1]);
		}
		System.out.println("검색할 값 : ");
		
		int ky = scn.nextInt();
		
		int idx= Arrays.binarySearch(x, ky);
		
		if(idx<0) {
		
			System.out.println("요소 없음");
			System.out.println(idx);
			
		}else {
			System.out.println(ky +"은 x[" + idx + "]에 있다.");
		}
		
	}

}


//	출력
	
//	요솟 수 :
//		3
//		오름차순으로 입력하세요
//		x[0]:
//		1
//		x[1]
//		2
//		x[2]
//		3
//		검색할 값 : 
//		3
//		3은 x[2]에 있다.


// 검색 실패 시 삽입포인트는 -x-1

//	요솟 수 :
//	2
//	오름차순으로 입력하세요
//	x[0]:
//	1
//	x[1]
//	2
//	검색할 값 : 
//	4
//	요소 없음
//	-3


