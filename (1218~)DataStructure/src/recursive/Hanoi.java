package recursive;

import java.util.Scanner;

//하노이의 탑

public class Hanoi {

	
//	no개의 원반을 x번 기둥에서 y번 기둥으로 옮김,,  y : 횟수 x : 기둥 번호 no: 원반 갯수
	static void move(int no, int x, int y ) {
		if (no >1) {
			move(no-1,x,6-x-y);  // 기둥번호 1,2,3 이므로 총 합인 6으로 ----> 중간기둥은 6-x-y로 구할 수 있다.
			
		}
		System.out.println("원반 [" +no +"을 " + x +" 기둥에서 " + y+ "기둥으로 올김");
	
		
		if( no>1) {
			move(no -1, 6-x-y, y);
			
		}
	}
	
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		
		System.out.println("하노이의 탑");
		System.out.println("원반 갯수 : ");
		
		int n = scn.nextInt();
		
		move(n,1,3);
	}

}

//	출력
	
//	하노이의 탑
//	원반 갯수 : 
//	4
	
//	원반 [1을 1 기둥에서 2기둥으로 올김
//	원반 [2을 1 기둥에서 3기둥으로 올김
//	원반 [1을 2 기둥에서 3기둥으로 올김
//	원반 [3을 1 기둥에서 2기둥으로 올김
//	원반 [1을 3 기둥에서 1기둥으로 올김
//	원반 [2을 3 기둥에서 2기둥으로 올김
//	원반 [1을 1 기둥에서 2기둥으로 올김
//	원반 [4을 1 기둥에서 3기둥으로 올김
//	원반 [1을 2 기둥에서 3기둥으로 올김
//	원반 [2을 2 기둥에서 1기둥으로 올김
//	원반 [1을 3 기둥에서 1기둥으로 올김
//	원반 [3을 2 기둥에서 3기둥으로 올김
//	원반 [1을 1 기둥에서 2기둥으로 올김
//	원반 [2을 1 기둥에서 3기둥으로 올김
//	원반 [1을 2 기둥에서 3기둥으로 올김
