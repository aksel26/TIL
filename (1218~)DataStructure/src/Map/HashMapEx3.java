package Map;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

public class HashMapEx3 {
static HashMap phoneBook = new HashMap();
	public static void main(String[] args) {
		addPhoneNo("친구1" , "이자바","010-1234-1234");
		addPhoneNo("친구1" ,"김자바", "010-1111-1111");
		addPhoneNo("친구1" , "김자바","010-2222-2222");
		addPhoneNo("회사" , "김대리","010-3333-7777");
		addPhoneNo("회사" , "이대리","010-4444-7777");
		addPhoneNo("회사" ,"박대리", "010-5555-7777");
		addPhoneNo("회사" , "이과장","010-6666-7777");
		addPhoneNo("세탁1" ,"010-1234-1234");
		
		printList();
	}
	
	
	static void addPhoneNo(String groupName, String name, String tel) {
		addGroup(groupName);
		HashMap group = (HashMap)phoneBook.get(groupName);
		group.put(tel, name);

	}
	
	static void addGroup(String groupName) {
		if(!phoneBook.containsKey(groupName)) {
			
			phoneBook.put(groupName,new HashMap());
		}
	}
	
	static void addPhoneNo(String name, String tel) {
		addPhoneNo("기타", name, tel);
	}
	
	
	static void printList() {
		Set set = phoneBook.entrySet();
		Iterator it = set.iterator();
		
		while(it.hasNext()) {
			Map.Entry e = (Map.Entry)it.next();
			Set subSet = ((HashMap)e.getValue()).entrySet();
			Iterator subIt = subSet.iterator();
			
			System.out.println(" * " + e.getKey() + "[" + subSet.size() + "]" );
			
			while(subIt.hasNext()) {
				Map.Entry subE = (Map.Entry)subIt.next();
				String telNo= (String)subE.getKey();
				String name = (String)subE.getValue();
				System.out.println(name + " " + telNo);
				
			}
			System.out.println();
		}
	}

}


//	출력
	

//	 * 기타[1]
//	 세탁1 010-1234-1234
//
//	  * 친구1[3]
//	 김자바 010-1111-1111
//	 이자바 010-1234-1234
//	 김자바 010-2222-2222
//
//	  * 회사[4]
//	 이과장 010-6666-7777
//	 박대리 010-5555-7777
//	 김대리 010-3333-7777
//	 이대리 010-4444-7777
//
