package Stack_Queue;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;



public class StackQueueEx {

	public static void main(String[] args) {
		Stack st = new Stack();
		Queue qu = new LinkedList();	//Queue인터페이스의 구현체인 LinkdedList 사용
		
		
		
		st.push("A");
		st.push("B");
		st.push("C");
		
		qu.offer("0");
		qu.offer("1");
		qu.offer("2");
		
		
		
		System.out.println(" === stack ==== ");
		
		while(!st.empty()) {
			System.out.println(st.pop());
		}
		

		System.out.println(" === queue ==== ");
		
		while(!qu.isEmpty()) {
			System.out.println(qu.poll());
		}
		
		
		
		
		
	}

}



//	=== stack ==== 
//	C
//	B
//	A
//	=== queue ==== 
//	0
//	1
//	2
