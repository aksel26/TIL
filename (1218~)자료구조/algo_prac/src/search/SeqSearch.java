package search;

import java.util.Scanner;

public class SeqSearch {
	//  While문 이용
//	static int seqSearch(int[] a , int n, int key) {
//		int i = 0;
//		while(true) {
//			if(i==n) {
//				return -1; //검색 실패 : -1 을 반환
//				
//			}
//			if(a[i]==key) {
//				return i; //검색 성공 :인덱스를 반환
//				
//			}
//			i++;
//		}
//	}

	// FOR문 이용
	static int seqSearch(int[] a, int n, int key) {
		for (int i = 0; i < n; i++) {
			if (a[i] == key)
				return i;
		}
		return -1;
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("요솟 수 :");
		int num = scn.nextInt();
		int[] x = new int[num];

		for (int i = 0; i < num; i++) {
			System.out.println("x[" + i + "]");
			x[i] = scn.nextInt();

		}
		System.out.println("검색할 값 :");
		int ky = scn.nextInt();
		int idx = seqSearch(x, num, ky); // 배열x에서 키 값이 ky 인 요소를 검색
		if (idx == -1) {
			System.out.println("그 값의 요소가 없다.");
		} else {
			System.out.println(ky + "은x[" + idx + "]에 있다.");
		}

	}

}

//	출력

//	요솟 수 :
//	3
//	x[0]
//	1
//	x[1]
//	2
//	3x[2]
//	
//	검색할 값 :
//	2
//	2은x[1]에 있다.
