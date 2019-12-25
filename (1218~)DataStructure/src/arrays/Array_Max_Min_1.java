package arrays;

import java.util.Scanner;

public class Array_Max_Min_1 {

	static int maxOf(int a[]) {
		int max=a[0];
		for(int i =0;i<a.length;i++) {
			if(a[i]>max) max=a[i];
			
		}
		return max;
	}
	
	public static void main(String[] args) {
		Scanner scn= new Scanner(System.in);
		System.out.println("��� Ű�� �ִ��� ���մϴ�");
		System.out.print("��� �� : ");
		int num= scn.nextInt();
		
		int height[]=new int[num];
		for(int i =0;i<num;i++) {
			System.out.println("height[" + i + "]");
			height[i]=scn.nextInt();
			
		}
		System.out.println("�ִ��� : " +maxOf(height) +" �Դϴ�.");
		

	}

}

//��� Ű�� �ִ��� ���մϴ�
//��� �� : 9
//height[0]
//177
//height[1]
//156
//height[2]
//176
//height[3]
//190
//height[4]
//189
//height[5]
//189
//height[6]
//185
//height[7]
//146
//height[8]
//165
//�ִ��� : 190 �Դϴ�.