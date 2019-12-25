package arrays;

import java.util.Scanner;

public class CardConRev {

	static int CardConR(int x, int r, char[] d) {
		int digits = 0;
		String dChar = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

		
		// ������ ���� ������ & ������ ���� ������
//			������ ���� ������ (++a)
//				: �� ��ü �� ���� �ǿ������� ���� ����. 
//			������ ���� ������ (a++)
//				: ��ü �� �� �Ŀ� �ǿ������� ���� ����.
		do {
			d[digits++] = dChar.charAt(x % r);
			x/=r;
		} while (x != 0);
		return digits;

	}

	
	
	
//	���θ޼���� �����ȯ�� ��ȭ������ ������.
	
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		int no;
		int cd;
		int dno;
		int retry;
		char[] cno = new char[32];
		System.out.println("10������ ����� ��ȯ�մϴ�;");

		do {
			do {
				System.out.println("���� �ƴ� ����");
				no = scn.nextInt();

			} while (no < 0);
			do {
				System.out.println("� �����κ�ȯ�ұ���.");
				cd = scn.nextInt();

			} while (cd < 2 || cd > 36);

			dno = CardConR(no, cd, cno);
			System.out.println(cd + "�����δ� ");
			for (int i = dno - 1; i >= 0; i--) {
				System.out.print(cno[i]);
			}
			System.out.println("�Դϴ�");

			System.out.println("�ѹ��� ? 1.��  2.�ƴϿ� ");
			retry = scn.nextInt();

		} while (retry == 1);

	}

}

//	���
//	10������ ����� ��ȯ�մϴ�;
//	���� �ƴ� ����
//	43
//	� �����κ�ȯ�ұ���.
//	16
//	16�����δ� 
//	2B�Դϴ�
//	�ѹ��� ? 1.��  2.�ƴϿ� 
//	1
//	���� �ƴ� ����
//	23
//	� �����κ�ȯ�ұ���.
//	2
//	2�����δ� 
//	10111�Դϴ�
//	�ѹ��� ? 1.��  2.�ƴϿ� 
//	2


//String Ŭ����
//�� ����ؾ���  �޼���
//1.char charAt(int i)
//2. int length()
//3. boolean equals(String s)