package test.SWEA;

import java.util.Scanner;

public class Solution1954_practice {

	
	static int N;  //배열 크기
	static int[][] map; //배열 선언
	
	
	static boolean inRange(int nx, int ny) {
		if(nx>=0 && nx<N && ny>=0 && ny<N) { //x, y 범위 값 설정
			return true;
			
		}else {
			
			return false;
		}
	}
	public static void main(String[] args) {
	 Scanner sc = new Scanner(System.in);
	 N = sc.nextInt();	// N 입력받기
	 map = new int[N][N];  //map 배열 생성
	 
	 
	int x = sc.nextInt();
	int y = sc.nextInt();
	
	
	//  4방향 확인
//	int dx[]	 = { -1, 1, 0 ,0 };
//	int dy[] = {0, 0, 1,-1};
//	
//	for (int i = 0; i < dx.length; i++) {
//		int nx = x + dx[i];
//		int ny  = y +dy[i];
//		if(inRange(nx, ny)) { // 범위설정
//			map[nx][ny] = 1;	// 범위가  true 면 1을 대입 아니면 안한다.
//		}
//	}
	
	
	
//	5
//	1
//	2
//	
//	0 0 1 0 0 
//	0 1 0 1 0 
//	0 0 1 0 0 
//	0 0 0 0 0 
//	0 0 0 0 0 

	
	
	
	
	// 8 방향 확인
	int dx[] = {-1,0,1,1,1,0,-1,-1};
	int dy[] = {-1,-1,-1,0,1,1,1,0};
	
	for (int i = 0; i < dx.length; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(inRange(nx, ny)) {
			map[nx][ny]= 1;
		}
	}
	
//	5
//	2
//	2
//	
//	0 0 0 0 0 
//	0 1 1 1 0 
//	0 1 0 1 0 
//	0 1 1 1 0 
//	0 0 0 0 0 

	
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			System.out.print(map[i][j]+" ");
			
			
		}
		System.out.println();
		
		
	}
	}

}
