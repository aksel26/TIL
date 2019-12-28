package sort;

import java.util.Scanner;

public class InsertionSort {
	static void insertionSort(int [] a, int n) {
		for(int i =0  ;i <n ; i++) {
			int j ;
			int tmp= a[i];
			for(j=i; j>0 && a[j-1]> tmp; j--) {
				a[j]  = a[j-1];
			}
			a[j] = tmp;
		}
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in)	;
		System.out.println("단순 삽입 정렬");
		System.out.println("요솟 수 : ");
		int nx = scn.nextInt()	;
		int[] x = new int[nx];
		
		for(int i = 0 ; i< nx; i++)	{
			System.out.println("x[" + i+"]:");
			x[i] =scn.nextInt()	;
		}
		
		
		insertionSort(x, nx);
		
		System.out.println(" 배열 완료");
		for(int i = 0; i<nx; i++) {
			System.out.println("x[" + i + "] =" + x[i]);
		}
	}

}
