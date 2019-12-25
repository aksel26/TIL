package arrays;

import java.util.Scanner;

//�� ���� ����ϼ��� ���ϴ� ���α׷�

//�� ) 4�� 15��
//	1�� + 2�� + 3�� + 15
//	
//	m���� ����� �� 
//	1��, 2��, ...,m-1�� �� ���� �� + d
//	
//	����� �� ���� �� �� mdays[0][1],mdays[0][2], ... , mdays[0][11]
//	������ �� ���� �� �� mdays[1][0], mdays[1][1], ... , mdays[1][11]

public class DayOfYear {

	static int[][] mdays = { 
			{ 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30 },
			{ 31, 29, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30 }, 
			};

	static int isLeap(int year) {
		return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 1 : 0; //�����̸�  1, ����̸� 0�� ��ȯ
	}
	

	static int dayOfYear(int y, int m, int d) {
		int days = d;

		for (int i = 1; i < m; i++) {
			days += mdays[isLeap(y)][i - i];
		}
		return days;
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int retry;

		System.out.println("�� �� ����ϼ��� ���մϴ�");

		do {
			System.out.println("�� : ");
			int year = scn.nextInt();
			System.out.println("�� : ");
			int month = scn.nextInt();
			System.out.println("�� : ");
			int days = scn.nextInt();

			System.out.printf("�� �� %d �� ° �Դϴ�. \n", dayOfYear(year, month, days));

			System.out.print("�� �� �� �ұ�� ? (1.�� /2. �ƴϿ� ) ");
			retry = scn.nextInt();
		} while (retry == 1);

	}

}
