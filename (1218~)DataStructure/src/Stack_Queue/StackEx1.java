package Stack_Queue;

import java.util.Stack;

public class StackEx1 {
	public static Stack backward = new Stack();
	public static Stack forward = new Stack();
	public static void goURL(String url) {
		backward.push(url);
		if(!forward.empty()) {
			forward.clear();
		}
	}
	
	
	public static void printStatus() {
		System.out.println("backward : " + backward);
		System.out.println("forward : " + forward);
		System.out.println("현재 화면은 :" +backward.peek());
		
		System.out.println();
	}
	
	public static void goBack() {
		if(!backward.empty()) {
			forward.push(backward.pop());
		}
		
		

	}
	
	public static void goForward() {
		if(!forward.empty()) {
			backward.push(forward.pop());
		}
	}
	public static void main(String[] args) {
		
		
		goURL("1.다음");
		goURL("2.네이버");
		goURL("3.구글");
		goURL("4.야후");
		
		
		printStatus();
		
		
		goBack();
		System.out.println(" == 뒤로가기 버튼 클릭 후 ==");
		printStatus();
		

		goBack();
		System.out.println(" == 뒤로가기 버튼 클릭 후 ==");
		printStatus();
		
		
		goForward();
		System.out.println(" == 앞으로 버튼 클릭 후 ==");
		printStatus();
		
		goURL("helloWorld.com");
		System.out.println("== 새로운 주소 이동 후 == ");
		printStatus();
	}

}
