package sort;

import java.util.Scanner;

public class QuckSort {
	static void swap(int[] a, int idx1,  int idx2) {
		
		int t = a[idx1];
		a[idx1]=a[idx2];
		a[idx2]=t;
		
	}
	static void quickSort(int[]a, int left, int right) {
		int pl =left;
		int pr = right;
		int x  = a[(pl+pr)/2];
	
		
//	+++++++ 분할 과정 출력 +++++++ 
		System.out.printf("a[%d]~a[%d]:{", left,right);
		for(int i = left ; i< right ; i++) {
			System.out.printf("%d , ", a[i]);
		}
		System.out.printf("%d}\n",a[right]);
//	+++++++++++++++++++++++++++ 
//		a[0]~a[8]:{5 , 8 , 4 , 2 , 6 , 1 , 3 , 9 , 7}
//		a[0]~a[4]:{5 , 3 , 4 , 2 , 1}
//		a[0]~a[2]:{1 , 3 , 2}
//		a[0]~a[1]:{1 , 2}
//		a[3]~a[4]:{4 , 5}
//		a[5]~a[8]:{6 , 8 , 9 , 7}
	
		
	do {
		while(a[pl]<x) pl++;
		while(a[pr]>x) pr--;
		if(pr<=pr) {
			swap(a,pl++,pr--);
		}
		
	}while(pl<=pr);
	
	if(left<pr) {
		quickSort(a, left, pr);
		
	}
	if(pl<right) {
		quickSort(a, pl, right);
	}
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		
		System.out.println("귁정렬");
		System.out.println("요솟 수:");
		int nx = scn.nextInt();
		int[]x = new int[nx];
		
		for(int i = 0; i<nx; i++) {
			System.out.println("x["+i+"]:");
			x[i] = scn.nextInt();
		}
		
		quickSort(x, 0, nx-1);
		
		System.out.println("퀵 정렬 완료");
		for(int i = 0; i< nx; i++) {
			System.out.println("x["+ i + "]="+ x[i]);
		}
	}

}


//	출력
	
//	귁정렬
//	요솟 수:
//	7
//	x[0]:
//	2
//	x[1]:
//	4
//	x[2]:
//	6
//	x[3]:
//	3
//	x[4]:
//	8
//	x[5]:
//	3
//	x[6]:
//	5

//	퀵 정렬 완료
//	x[0]=2
//	x[1]=3
//	x[2]=3
//	x[3]=5
//	x[4]=6
//	x[5]=8
//	x[6]=4
