package stack;

import java.util.Scanner;

public class IntStackTester {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		IntStack s = new IntStack(64); //최대 64개를 푸시할 수 있는 스택
	
		
		while(true) {
			System.out.println("현재 데이터 수: " +s.size() + "/" + s.capacity());
			System.out.println("(1) 푸시 (2) 팝 (3) 피크 "+ "(4)덤프 (0)종료");
			
			int menu = scn.nextInt()	;
			if(menu ==0) break;
			
			
			int x ;
			switch(menu) {
			
//			푸시
			case 1:
				System.out.println("데이터 : ");
				x = scn.nextInt();
				try {
					s.push(x);
				}catch(IntStack.OverflowIntStackException e) {
					System.out.println("스택이 가득 찼습니다.");
					
				}
				break;

//			팝
			case 2:
			try {
				x=s.pop();
				System.out.println("팝한 데이터는 : " +x+ "입니다");
				
			}catch(IntStack.EmptyIntStackException e) {
				System.out.println("스택이 비어있다.");
				
			}
			break;
			
//			피크
			case 3:
				try {
					x=s.peek();
					System.out.println("피크한 데이터는 : " + x + "입니다");
				}catch(IntStack.EmptyIntStackException e) {
					System.out.println("스택이 비어있다.");
				}
				break;
				
				
//			덤프
			case 4:			
				s.dump();
				break;
		}
	}

}
}