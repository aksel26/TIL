package test.SWEA;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

class Solution1954_1 {
	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(br.readLine());

		int dx[] = { 0, 1, 0, -1 };
		int dy[] = { 1, 0, -1, 0 };

		for (int tc = 1; tc <= T; tc++) {
			int N = Integer.parseInt(br.readLine());

			if (N == 1) {
				System.out.println("#" + tc);
				System.out.println();
				continue;
			}

			int[][] arr = new int[N][N];

			int x = 0;
			int y = 0;

			int dir = 0; // 처음방향은 0 (우 방향)
			

			for (int i = 0; i < N * N; i++) {

				arr[x][y] = i + 1;
				x += dx[dir];
				y += dy[dir];
				
					
//				범위를 벗어나는 경우 방향 전환
				if (x >= N || y >= N || x < 0 || y < 0) {
					
//					원래위치로
					x -= dx[dir];
					y -= dy[dir];

					
//					방향전환 ( 0 -> 1 : 우 ->하  , 1 -> 2 : 하 -> 좌 , 2 -> 3 : 좌 -> 상, 3 -> 0 : 상 -> 우)
					dir = (dir + 1) % 4;

					
//					전환한 방향으로 이동
					x += dx[dir];
					y += dy[dir];
				}
				
				
				
//				이동할 곳에 값이 있는 경우 방향전환
				if (arr[x][y] != 0) {
					x -= dx[dir];
					y -= dy[dir];

					dir = (dir + 1) % 4;
					x += dx[dir];
					y += dy[dir];

				}
			}

			System.out.println("#" + tc);
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {

					System.out.print(arr[i][j] + " ");
				}
				System.out.println();

			}
		}

	}

}
