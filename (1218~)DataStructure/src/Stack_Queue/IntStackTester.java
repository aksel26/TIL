package Stack_Queue;

import java.util.Scanner;

public class IntStackTester {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		IntStack s = new IntStack(64); //ìµœë? 64ê°œë?? ?‘¸?‹œ?•  ?ˆ˜ ?žˆ?Š” ?Š¤?ƒ
	
		
		while(true) {
			System.out.println("?˜„?ž¬ ?°?´?„° ?ˆ˜: " +s.size() + "/" + s.capacity());
			System.out.println("(1) ?‘¸?‹œ (2) ?Œ (3) ?”¼?¬ "+ "(4)?¤?”„ (0)ì¢…ë£Œ");
			
			int menu = scn.nextInt()	;
			if(menu ==0) break;
			
			
			int x ;
			switch(menu) {
			
//			?‘¸?‹œ
			case 1:
				System.out.println("?°?´?„° : ");
				x = scn.nextInt();
				try {
					s.push(x);
				}catch(IntStack.OverflowIntStackException e) {
					System.out.println("?Š¤?ƒ?´ ê°??“ ì°¼ìŠµ?‹ˆ?‹¤.");
					
				}
				break;

//			?Œ
			case 2:
			try {
				x=s.pop();
				System.out.println("?Œ?•œ ?°?´?„°?Š” : " +x+ "?ž…?‹ˆ?‹¤");
				
			}catch(IntStack.EmptyIntStackException e) {
				System.out.println("?Š¤?ƒ?´ ë¹„ì–´?žˆ?‹¤.");
				
			}
			break;
			
//			?”¼?¬
			case 3:
				try {
					x=s.peek();
					System.out.println("?”¼?¬?•œ ?°?´?„°?Š” : " + x + "?ž…?‹ˆ?‹¤");
				}catch(IntStack.EmptyIntStackException e) {
					System.out.println("?Š¤?ƒ?´ ë¹„ì–´?žˆ?‹¤.");
				}
				break;
				
				
//			?¤?”„
			case 4:			
				s.dump();
				break;
		}
	}

}
}



