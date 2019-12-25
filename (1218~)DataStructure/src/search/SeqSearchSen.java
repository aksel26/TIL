package search;

import java.util.Scanner;

// 선형 검색 ( 보초법)

public class SeqSearchSen {
	static int seqSearchSen(int a[], int n, int key) {
		int i = 0;
		a[n] = key; // 보초를 추가

		while (true) {
			if (a[i] == key)
				break;
			i++;

		}
		return i == n ? -1 : i;
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("요솟수 : ");

		int num = scn.nextInt();

		int[] x = new int[num + 1]; // 요솟수 num + 1

		for (int i = 0; i < num; i++) {
			System.out.println("x[" + i + "]:");
			x[i] = scn.nextInt();
		}

		System.out.println("검색 할 값 : ");
		int ky = scn.nextInt();

		int idx = seqSearchSen(x, num, ky); // 배열 x에서 값이 ky인 요소를 검

		if (idx == -1) {
			System.out.println("요소 없음");
		} else {
			System.out.println(ky + "은 x[" + idx + "]에 있다. ");
		}

	}

}

//	출력

//	요솟수 : 
//	3
//	x[0]:
//	2
//	x[1]:
//	1
//	x[2]:
//	4
//	검색 할 값 : 
//	4
//	4은 x[2]에 있다. 
