package arrays;

import java.util.Scanner;

//배열요소 역순으로 정렬하
//교환 횟수 : 요소 개수/2회 (홀수 시 나머지는 버림)

//	for( i =0; i< n/2 ;i++)

//두 값의 교환
//	작업용 변수를 하나 설정한다

public class ReverseArray {	
//	교환하고
	static void swap(int[] a, int idx1, int idx2) {
		int t = a[idx1];
		a[idx1] = a[idx2];
		a[idx2] = t;

	}
//	정렬하고
	static void reverse(int[] a) {
		for (int i = 0; i < a.length / 2; i++) {
			swap(a, i, a.length - i - 1);
		}
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("요소 수 : ");
		int num = scn.nextInt();

		int[] x = new int[num]; // 요소 수가 num인 배열

//		배열 요소 입력받기
		for (int i = 0; i < num; i++) {
			System.out.println("x[" + i + "]");
			x[i] = scn.nextInt();

		}
		
//		정렬
		reverse(x);

		System.out.println("요소룰 역순으로 정리했다");
		for (int i = 0; i < num; i++) {
			System.out.println("x[" + i + "]=" + x[i]);
		}

	}

}


// 출력

//	요소 수 : 
//	5
//	x[0]
//	1
//	x[1]
//	2
//	x[2]
//	3
//	x[3]
//	4
//	x[4]
//	5
//	요소룰 역순으로 정리했다
//	x[0]=5
//	x[1]=4
//	x[2]=3
//	x[3]=2
//	x[4]=1
