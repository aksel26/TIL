package Iterator;

import java.util.ArrayList;
import java.util.Iterator;

public class IteratorEx1 {

	public static void main(String[] args) {
		
		ArrayList list = new ArrayList();
		list.add("1");
		list.add("2");
		list.add("3");
		list.add("4");
		list.add("5");
		
		Iterator iter =  list.iterator();
		
		while(iter.hasNext()) {
			Object obj   = iter.next();
			System.out.println(obj);
		}
		
	}

}


//	Ãâ·Â

//	1
//	2
//	3
//	4
//	5
