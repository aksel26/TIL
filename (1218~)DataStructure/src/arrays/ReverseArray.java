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
		
		System.out.println("�迭 a���� �Է��ϼ���");
		na=scn.nextInt()	;
		int[] a= new int[na];
		
	
		
		for(int i = 0; i<na; i++) {
			System.out.println("a[" + i +"]:");
			a[i]=scn.nextInt();
		}
		
		System.out.println("�迭b�ñ��̸� �Է��ϼ���");
		ba= scn.nextInt();
		int[] b=new int [ba];
		
		for(int i =0; i<ba ; i++) {
			System.out.println("b[" + i + "]:");
			b[i]=scn.nextInt();
		}
		System.out.println("�迭 b�� a�� " + (equals(a,b)? "�����ϴ�":"�ٸ��ϴ�"));
		
//�޼��� equals�� �迭a�� b�� ������ �Ǵ����� :type�� boolean
		
	
	}

}


// ���

//	��� �� : 
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
//	��ҷ� �������� �����ߴ�
//	x[0]=5
//	x[1]=4
//	x[2]=3
//	x[3]=2
//	x[4]=1
