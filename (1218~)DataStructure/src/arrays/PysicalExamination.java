package arrays;

import java.util.Scanner;

//Ŭ���� 
//	: ������ ���������� �����Ӱ� �����Ͽ� ���� �� �ִ� �ڷᱸ��
//	
//	Ŭ���� ����
//		class XYZ{
//			int x;  //x�� int�� �ʵ�.
//			long y; // y�� Long�� �ʵ�.
//			double z; //z�� double �� �ʵ�.
//		}
//	XYZ a; //XYZ���� Ŭ������ ����  a ����
//	
//	a=new XYZ(); //XY���� Ŭ���� �ν��Ͻ�(��ü) ����
//	XYZ a = new XYZ() ; //�ѹ��� �����ϱ�.

//Ŭ������ �迭 

public class PysicalExamination {

	static final int VMAX = 21; // �÷º��� (0.0 ~ 0.1 ������ 21��)

	static class PhyscData {
		String name;
		int height;
		double vision;

		// ������
		PhyscData(String name, int height, double vision) {
			this.name = name;
			this.height = height;
			this.vision = vision;
		}
	}

	// Ű�� ���
	static double aveHeight(PhyscData[] dat) {
		double sum = 0;
		for (int i = 0; i < dat.length; i++) {
			sum += dat[i].height;
		}
		return sum / dat.length;
	}

	//�÷º���
	static void distVision(PhyscData[] dat, int[] dist) {
		int i =0;
		dist[i] =0;
		for (i =0 ; i<dat.length; i++) {
			if(dat[i].vision >=0.0 && dat[i].vision <= VMAX / 10.0)
				dist[(int)(dat[i].vision*10)]++;
		}
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		PhyscData[] x= {
				new PhyscData("������",162,0.3),
				new PhyscData("Ȳ����",173,0.7),
				new PhyscData("������",185,2.0),
				new PhyscData("ȫ����",165,1.5),
				new PhyscData("�̼���",178,0.4),
				new PhyscData("�迵��",169,1.2),
				new PhyscData("�ڿ���",174,0.8),
				
		};
		
		int[] vdist= new int[VMAX];	//�÷º���
		
		System.out.println("===== ��ü�˻� ����Ʈ =====");
		System.out.println("�̸�      Ű    �÷�");
		System.out.println("-----------------------");
		for(int i =0; i<x.length;i++) {
			
			System.out.printf("%-8s%3d%5.1f\n",x[i].name,x[i].height,x[i].vision);
		}
		System.out.printf("\n��� Ű : %5.1fcm\n", aveHeight(x));
		
		distVision(x, vdist);  //�÷º���������
		
		System.out.println("\n�÷� ����");
		for(int i = 0; i<VMAX; i++) {
			System.out.printf("%3.1f ~ : %2d��\n", i/10.0, vdist[i]);
		}
	}

}
//	Ŭ���� ��ü�� ���
//	1.Ŭ���� ��ü���� ������ �� �ִ� �����	
//		��� (�ʵ�/ �޼��� /��ø Ŭ����/��ø �������̽�)
//		Ŭ���� �ʱ�ȭ / �ν��Ͻ� �ʱ�ȭ
//		������
//		
//	2.�ʵ�/ �޼��� / �����ڸ� ������ �� public/protected/private	�� ������ �� �ִ�.
//	3.�޼��� / �����ڴ� �������� ���� (�����ε�) �� �� �ִ�.
//		�����ε� : ������ �ٸ����� ���� �̸��� ���̴� ��.
//	4.final�� ������ �ʵ�� �� ���� ���� ������ �� �ִ�.
//	5.�����ڴ� ���� ������ �ν��Ͻ��� �ʱ�ȭ�� ���� ���ȴ�. 
	

//	�������̽� ����
//		���� :
//			class Y implements X {
//				//...
//			}
//	
//	�߻� Ŭ���� (abstract)
//		: �ҿ����� Ŭ������ �ν��Ͻ��� ���� �� ����
//			�߻�޼��� : ��ü�� ���ǵ��� ���� �޼���, ����Ŭ�������� ��ü�� �����Ѵ�.
//		
//	��øŬ����
//		: ��� Ŭ���� : �� ������ �ٸ� Ŭ���� �Ǵ� �������̽� ���� �ѷ����� Ŭ����
//		  ���� Ŭ���� : �����, �Ϲ������ε� ����(static) ���� ������� �ʴ� ��øŬ����. ���� �ʱ�ȭ�� ��� �������̽� ������ �� �� ����. 
//		  ���� Ŭ���� : �̸��� �־��� ��øŬ������ ���� Ŭ����. � Ŭ���� ����� �� �� ����. 
	

//		===== ��ü�˻� ����Ʈ =====
//		�̸�      Ű    �÷�
//		-----------------------
//		������     162  0.3
//		Ȳ����     173  0.7
//		������     185  2.0
//		ȫ����     165  1.5
//		�̼���     178  0.4
//		�迵��     169  1.2
//		�ڿ���     174  0.8
//		
//		��� Ű : 172.3cm
//		
//		�÷� ����
//		0.0 ~ :  0��
//		0.1 ~ :  0��
//		0.2 ~ :  0��
//		0.3 ~ :  1��
//		0.4 ~ :  1��
//		0.5 ~ :  0��
//		0.6 ~ :  0��
//		0.7 ~ :  1��
//		0.8 ~ :  1��
//		0.9 ~ :  0��
//		1.0 ~ :  0��
//		1.1 ~ :  0��
//		1.2 ~ :  1��
//		1.3 ~ :  0��
//		1.4 ~ :  0��
//		1.5 ~ :  1��
//		1.6 ~ :  0��
//		1.7 ~ :  0��
//		1.8 ~ :  0��
//		1.9 ~ :  0��
//		2.0 ~ :  1��

