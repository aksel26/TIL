package test.SWEA;

import java.util.Scanner;

class Solution1288 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int T;
		T = sc.nextInt();

		for (int i = 1; i <= T; i++) {
			int N = sc.nextInt();
			int[] arr = new int[10];
			int cnt = 1;
			while (true) {

				int Number = N * cnt;
				String[] str = Integer.toString(Number).split("");
				for (int j = 0; j < str.length; j++) {
					int num = Integer.parseInt(str[j]);
					arr[num] = 1;
				}
				
				

				if (arr[0] >= 1 && arr[1] >= 1 && arr[2] >= 1 && arr[3] >= 1 && arr[4] >= 1 && arr[5] >= 1
						&& arr[6] >= 1 && arr[7] >= 1 && arr[8] >= 1 && arr[9] >= 1) {
					System.out.println("#" + i + " " + Number);
					break;
					
				}
				cnt++;
				
			}

		}
	}
}



//	testCase : 5

//	1
//	#1 10
//	2
//	#2 90
//	11
//	#3 110
//	1295
//	#4 6475
//	1692
//	#5 5076
