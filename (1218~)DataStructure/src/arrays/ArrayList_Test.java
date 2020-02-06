package arrays;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class ArrayList_Test {

	

	public static void main(String[] args) {
		ArrayList arrayList = new ArrayList(10);
		
		arrayList.add(new Integer(20));
		arrayList.add( new Integer(10));
		arrayList.add( new Integer(15));
		arrayList.add( new Integer(20));
		arrayList.add( new Integer(4));
		
		ArrayList arrayList2 = new ArrayList(arrayList.subList(1, 4));
		
		print(arrayList,arrayList2);
		
		Collections.sort(arrayList);
		Collections.sort(arrayList2);
		
		print(arrayList,arrayList2);
		
		System.out.println("arrayList1.containsAll(arrayList2) : " + arrayList.containsAll(arrayList2));
		
		arrayList2.add("B");
		arrayList2.add("C");
		arrayList2.add("A");
		
		print(arrayList,arrayList2);
		
		arrayList2.set(3, "AA");
		
		
		
		System.out.println("arrayList1.retainAll(arrayList2) : " + arrayList.retainAll(arrayList2));
		print(arrayList,arrayList2);
		
		System.out.println(arrayList2.size());
		
		for(int i = arrayList2.size()-1 ; i>= 0 ; i --) {	//증가시켜가면서 삭제하면 앞에 빈 공간을 채우기 위해 나머지 요소들이 공강을 이동해야 하기 때문에 올바른 결과가 나올 수 없다.
			if(arrayList.contains(arrayList2.get(i))) {
				arrayList2.remove(i);
			}
		}
		print(arrayList,arrayList2);
		
		
		
	

	}
	static void print(ArrayList arrayList, ArrayList arrayList2) {
		System.out.println("arrayList : " +arrayList);
		System.out.println("arrayList2 : " +arrayList2);
		System.out.println();
	}

}


//	출력

//	arrayList : [20, 10, 15, 20, 4]
//	arrayList2 : [10, 15, 20]
//	
//	arrayList : [4, 10, 15, 20, 20] -->> 정렬됨 (sort())
//	arrayList2 : [10, 15, 20]
//	
//	arrayList1.containsAll(arrayList2) : true
//	arrayList : [4, 10, 15, 20, 20]
//	arrayList2 : [10, 15, 20, B, C, A]
//	
//	arrayList1.retainAll(arrayList2) : true
//	arrayList : [10, 15, 20, 20]
//	arrayList2 : [10, 15, 20, AA, C, A]
//	
//	6
//	arrayList : [10, 15, 20, 20]
//	arrayList2 : [AA, C, A]
