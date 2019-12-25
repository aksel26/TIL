package arrays;

import java.util.Scanner;

//�迭��� �������� ������
//��ȯ Ƚ�� : ��� ����/2ȸ (Ȧ�� �� �������� ����)

//	for( i =0; i< n/2 ;i++)

//�� ���� ��ȯ
//	�۾��� ������ �ϳ� �����Ѵ�

public class ArrayEqul {	
//	��ȯ�ϰ�
	static void swap(int[] a, int idx1, int idx2) {
		int t = a[idx1];
		a[idx1] = a[idx2];
		a[idx2] = t;

	}
//	�����ϰ�
	static void reverse(int[] a) {
		for (int i = 0; i < a.length / 2; i++) {
			swap(a, i, a.length - i - 1);
		}
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("��� �� : ");
		int num = scn.nextInt();

		int[] x = new int[num]; // ��� ���� num�� �迭

//		�迭 ��� �Է¹ޱ�
		for (int i = 0; i < num; i++) {
			System.out.println("x[" + i + "]");
			x[i] = scn.nextInt();

		}
		
//		����
		reverse(x);

		System.out.println("��ҷ� �������� �����ߴ�");
		for (int i = 0; i < num; i++) {
			System.out.println("x[" + i + "]=" + x[i]);
		}

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
