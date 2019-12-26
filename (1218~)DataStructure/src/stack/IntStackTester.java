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



//	출력
	
//	현재 데이터 수: 0/64
//	(1) 푸시 (2) 팝 (3) 피크 (4)덤프 (0)종료
//	1
//	데이터 : 
//	2
//	현재 데이터 수: 1/64
//	(1) 푸시 (2) 팝 (3) 피크 (4)덤프 (0)종료
//	1
//	데이터 : 
//	3
//	현재 데이터 수: 2/64
//	(1) 푸시 (2) 팝 (3) 피크 (4)덤프 (0)종료
//	1
//	데이터 : 
//	5
//	현재 데이터 수: 3/64
//	(1) 푸시 (2) 팝 (3) 피크 (4)덤프 (0)종료
//	1
//	데이터 : 
//	6
//	현재 데이터 수: 4/64
//	(1) 푸시 (2) 팝 (3) 피크 (4)덤프 (0)종료
//	4
//	2 3 5 6 
//	현재 데이터 수: 4/64
//	(1) 푸시 (2) 팝 (3) 피크 (4)덤프 (0)종료
//	3
//	피크한 데이터는 : 6입니다
//	현재 데이터 수: 4/64
//	(1) 푸시 (2) 팝 (3) 피크 (4)덤프 (0)종료
//	2
//	팝한 데이터는 : 6입니다
//	현재 데이터 수: 3/64
//	(1) 푸시 (2) 팝 (3) 피크 (4)덤프 (0)종료
//	2
//	팝한 데이터는 : 5입니다
//	현재 데이터 수: 2/64
//	(1) 푸시 (2) 팝 (3) 피크 (4)덤프 (0)종료
//	2
//	팝한 데이터는 : 3입니다
//	현재 데이터 수: 1/64
//	(1) 푸시 (2) 팝 (3) 피크 (4)덤프 (0)종료
//	2
//	팝한 데이터는 : 2입니다
//	현재 데이터 수: 0/64
//	(1) 푸시 (2) 팝 (3) 피크 (4)덤프 (0)종료
//	0
