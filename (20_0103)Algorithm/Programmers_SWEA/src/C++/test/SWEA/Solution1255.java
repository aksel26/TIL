package test.SWEA;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Solution1255 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		Queue<Integer> que = new LinkedList<Integer>();

		for (int i = 0; i < 10; i++) {
			int temp = 1;
			int T = scn.nextInt();
//			배열 넣기
			for (int j = 1; j < 9; j++) {
				que.add(scn.nextInt());
			}

//			수 빼기 사이클
			while (temp != 0) {

				for (int j = 1; j < 6; j++) {

					temp = que.poll();
					temp = temp - j;

					if (temp < 0) {
						temp = 0;
					}

					que.add(temp);
					if (temp == 0) {
						break;
					}
				}
			}

			System.out.print("#" + T + " ");

			for (int j = 0; j < 8; j++) {
				temp = que.poll();
				System.out.print(temp + " ");
			}
			System.out.println();

		}
	}

}
