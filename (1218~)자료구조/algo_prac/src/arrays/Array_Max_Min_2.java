package arrays;

import java.util.Random;
import java.util.Scanner;

public class Array_Max_Min_2 {

//���� �����? �迭�� ��ڰ�? �����ϱ�
	static int maxOf(int[] a) {
		int max=a[0];
		for(int i =0; i<a.length;i++) {
			if(a[i]>max) max=a[i];
			
		}
		return max;
	}
	
	public static void main(String[] args) {
		Random rand= new Random();
		Scanner scn = new Scanner(System.in);
		
		System.out.println("Ű�� �ִ��� ���մϴ�");
		int num= rand.nextInt(10);
		System.out.print("���? �� : " +num + "��");
		
		int height[]=new int[num];
		
		System.out.println("Ű ���� �Ʒ��� �����ϴ�");
		
		for(int i =0; i<num;i++) {
			height[i]=100 + rand.nextInt(90);
			System.out.println("height[" +i + "] : " +height[i]);
			
		}
		System.out.println("�ִ��� " + maxOf(height)+ " �Դϴ�");
	}

}


//�ο� ���� ���� ��

//Ű�� �ִ��� ���մϴ�
//���? �� : 5
//Ű ���� �Ʒ��� �����ϴ�
//height[0] : 171
//height[1] : 117
//height[2] : 159
//height[3] : 138
//height[4] : 143
//�ִ��� 171 �Դϴ�


//�ο� ���� ���� ��
//
//Ű�� �ִ��� ���մϴ�
//���? �� : 7��Ű ���� �Ʒ��� �����ϴ�
//height[0] : 122
//height[1] : 105
//height[2] : 127
//height[3] : 149
//height[4] : 166
//height[5] : 116
//height[6] : 149
//�ִ��� 166 �Դϴ�
