package Map;

import java.util.Collections;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.Set;

public class HashSetLotto {

	public static void main(String[] args) {
		Set set = new HashSet();
		for(int i = 0 ;set.size()<6 ; i++	) {
			int num = (int)(Math.random()*45)+1;
			set.add(new Integer(num));
			System.out.println("set : " + set);
			
		}
		
		List list = new LinkedList(set);
		
		System.out.println("list : " +list);
		
		Collections.sort(list);	//오름차순 정렬
		
		System.out.println(list);
		
	}

}



//	출력

//	set : [23]
//	set : [1, 23]
//	set : [1, 4, 23]
//	set : [1, 4, 23, 40]
//	set : [1, 4, 23, 40, 12]
//	set : [1, 4, 23, 40, 12, 29]
//	list : [1, 4, 23, 40, 12, 29]
//	[1, 4, 12, 23, 29, 40]

