package sort;

import java.util.Scanner;

public class MergeArray {
	static void merge(int[]a, int na, int []b, int nb, int[]c) {
		int pa = 0;
		int pb = 0;
		int pc = 0;
		
		while(pa< na && pb<nb) {
			c[pc++]	= (a[pa] <= b[pb])? a[pa++] : b[pb++];
		}
		while(pa<na)
			c[pc++] = a[pa++];
		while(pb<nb)
			c[pc++] = b[pb++];
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		
		int a[] = {2,4,6,8,11,13};
		int b[]= {1,2,3,4,9,16,21};
		int c[] = new int [13];
		
		System.out.println("두 배열의 병합");
			merge(a, a.length, b, b.length, c);
			
			System.out.println("배열 a와 배열 b를 병합하여 c에 저장하였다.");
			System.out.println("배열 a:");
			for(int i = 0; i< a.length ; i++) {
				System.out.println("a["+i+"]="+a[i]);
				
			}
			System.out.println("배열b:");
			for(int i = 0; i< b.length; i++) {
				System.out.println("b[" + i + "[=" + b[i]);
				
			}
			System.out.println("배열 c: ");
			for(int i = 0; i<c.length ; i++) {
				System.out.println("c[" + i + "]=" +c[i]);
			}
		
		
	}

}



//	출력

//	두 배열의 병합
//	배열 a와 배열 b를 병합하여 c에 저장하였다.
//	배열 a:
//	a[0]=2
//	a[1]=4
//	a[2]=6
//	a[3]=8
//	a[4]=11
//	a[5]=13
//	배열b:
//	b[0[=1
//	b[1[=2
//	b[2[=3
//	b[3[=4
//	b[4[=9
//	b[5[=16
//	b[6[=21
//	배열 c: 
//	c[0]=1
//	c[1]=2
//	c[2]=2
//	c[3]=3
//	c[4]=4
//	c[5]=4
//	c[6]=6
//	c[7]=8
//	c[8]=9
//	c[9]=11
//	c[10]=13
//	c[11]=16
//	c[12]=21
