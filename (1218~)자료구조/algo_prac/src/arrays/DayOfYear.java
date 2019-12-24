package arrays;

import java.util.Scanner;

//한 해의 경과일수를 구하는 프로그램

//예 ) 4월 15일
//	1월 + 2월 + 3월 + 15
//	
//	m월의 경과일 수 
//	1월, 2월, ...,m-1월 일 수의 합 + d
//	
//	평년의 각 달의 일 수 mdays[0][1],mdays[0][2], ... , mdays[0][11]
//	윤년의 각 달의 일 수 mdays[1][0], mdays[1][1], ... , mdays[1][11]

public class DayOfYear {

	static int[][] mdays = { 
			{ 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30 },
			{ 31, 29, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30 }, 
			};

	static int isLeap(int year) {
		return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 1 : 0; //윤년이면  1, 평년이면 0을 반환
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

		System.out.println("그 해 경과일수를 구합니다");

		do {
			System.out.println("년 : ");
			int year = scn.nextInt();
			System.out.println("월 : ");
			int month = scn.nextInt();
			System.out.println("일 : ");
			int days = scn.nextInt();

			System.out.printf("그 해 %d 일 째 입니다. \n", dayOfYear(year, month, days));

			System.out.print("한 번 더 할까요 ? (1.예 /2. 아니오 ) ");
			retry = scn.nextInt();
		} while (retry == 1);

	}

}
