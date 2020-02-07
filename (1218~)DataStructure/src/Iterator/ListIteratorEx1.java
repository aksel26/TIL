package Iterator;

import java.util.ArrayList;
import java.util.ListIterator;

public class ListIteratorEx1 {

	public static void main(String[] args) {
		ArrayList list = new ArrayList();
		
		list.add("1");
		list.add("2");
		list.add("3");
		list.add("4");
		list.add("5");
		
		ListIterator li = list.listIterator();
		
		while(li.hasNext()) {
			Object obj = li.next();
			System.out.print(obj);
		}
		
		System.out.println();
	
		while(li.hasPrevious()){
			System.out.print(li.previous());
		}
	}

}


//	Iterator 는 마지막에 다다르면 사용할 수 없지만
//	ListIteraotr는 양방향으로 사용이 가능하다 (previous())


//	출력
//	
//	12345
//	54321