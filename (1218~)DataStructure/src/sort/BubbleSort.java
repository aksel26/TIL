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
	
	
	static void bubbleSortV3(int[]a, int n) {
		int k = 0; //a[k] 보다 앞쪽은 정렬을 마친 상태, 0으로 하는 이유는 첫 번째 패스에서는 모든 요소를 검사해야 하기 때문
		
		
		while(k<n-1) {
			int last = n-1; // 마지막으로 요소를 교환한 위치, 각 패스에서 마지막으로 교환한 두 요소 가운데 오른쪽요소 (a[j])의 인덱스 저장.
			for(int j = n-1; j>k; j--) {
				if(a[j-1]>a[j]) {
					swap(a,j-1,j);
					last=j;
				}
			}
			k = last; //범위 제한
		}
	}
	
	
	
	//단순 선택 정
	static void selectionSort(int[]a , int n) {
		for (int i = 0;i<n-1; i++) {
			int min = i;
			for(int j= i+1; j<n ; j++) {
				if (a[j]<a[min]) {
					min = j;
				}
			}
			swap(a,i,min);
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

		selectionSort(x, n);

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
