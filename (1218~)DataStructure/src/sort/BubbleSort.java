package sort;

import java.util.Scanner;

public class BubbleSort {
	static void swap(int[] a, int idx1, int idx2) {
		int t = a[idx1];
		a[idx1] = a[idx2];
		a[idx2] = t;
	}

	static void bubbleSort(int[] a, int n) {
		for (int i = 0; i < n - 1; i++) {

//			패스
			for (int j = n - 1; j > i; j--) {
				if (a[j - 1] > a[j])
					swap(a, j - 1, j);
			}
		}
	}

	static void bubbleSortV2(int[] a, int n) {
		for (int i = 0; i < n - 1; i++) {
			
			int exchg = 0;	//패스의 교환 횟수
			
			for (int j = n - 1; j > i; j--) {
				if (a[j - 1] > a[j]) {
					swap(a, j - 1, j);
					exchg++;
				}
				
			}
			if(exchg==0)break;
		}
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("버블정렬 버전1");
		System.out.println("요솟 수:");
		int n = scn.nextInt();
		int[] x = new int[n];

		for (int i = 0; i < n; i++) {
			System.out.println("x[" + i + "] : ");
			x[i] = scn.nextInt();
		}

		bubbleSortV2(x, n);

		System.out.println(" 오름차순으로 정렬 완료");
		for (int i = 0; i < n; i++) {
			System.out.println("[" + i + "]=" + x[i]);
		}
	}

}

//	출력

//	버블정렬 버전1
//	요솟 수:
//	4
//	x[0] : 
//	3
//	x[1] : 
//	2
//	x[2] : 
//	5
//	x[3] : 
//	6
//	 오름차순으로 정렬 완료
//	[0]=2
//	[1]=3
//	[2]=5
//	[3]=6
