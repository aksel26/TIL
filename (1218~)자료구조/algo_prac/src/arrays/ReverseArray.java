package arrays;

import java.util.Scanner;



public class ReverseArray {	
	static boolean equals(int a[],int b[]) {
		if(a.length!=b.length) {
			return false;
		}
		for(int i =0; i<a.length; i++) {
			if (a[i] !=b[i]) {
				return false;
			}
			
		}
		return true;
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int na, ba;
		
		System.out.println("배열 a길이 입력하세요");
		na=scn.nextInt()	;
		int[] a= new int[na];
		
	
		
		for(int i = 0; i<na; i++) {
			System.out.println("a[" + i +"]:");
			a[i]=scn.nextInt();
		}
		
		System.out.println("배열b읙길이를 입력하세요");
		ba= scn.nextInt();
		int[] b=new int [ba];
		
		for(int i =0; i<ba ; i++) {
			System.out.println("b[" + i + "]:");
			b[i]=scn.nextInt();
		}
		System.out.println("배열 b와 a는 " + (equals(a,b)? "같습니다":"다릅니다"));
		
//메서드 equals는 배열a와 b가 같은지 판단해줌 :type은 boolean
		
	
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
