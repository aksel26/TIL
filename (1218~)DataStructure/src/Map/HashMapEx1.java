package Map;

import java.util.HashMap;
import java.util.Scanner;

public class HashMapEx1 {

	public static void main(String[] args) {
		HashMap map = new HashMap();
		map.put("myId","1234");
		map.put("asdf","1111");
		map.put("asdf","1234");
		
		Scanner s = new Scanner(System.in);
		
		while(true) {
			System.out.println("id와 pw를 입력하세요");
			System.out.println(" id : ");
			String id= s.next().trim();
			System.out.println(" pw : ");
			String pw = s.next().trim();
			System.out.println();
			if(!map.containsKey(id)) {
				System.out.println("id가 없습니다. 다시 입력");
				continue;
			}else {
				if(!(map.get(id)).equals(pw)	) {
					System.out.println("비밀번호가 일치하지 않습니다 다시 입력");
					
				}else {
					System.out.println("id와 비밀번호가 일치합니다");
					break;
				}
			}
		}
	}

}


//	출력

//	id와 pw를 입력하세요
//	id : 
//	asdf
//	pw : 
//	ddd
//	
//	비밀번호가 일치하지 않습니다 다시 입력
//	id와 pw를 입력하세요
//	id : 
//	asdf
//	pw : 
//	1111
//	
//	비밀번호가 일치하지 않습니다 다시 입력
//	id와 pw를 입력하세요
//	id : 
//	asdf
//	pw : 
//	1234
//	
//	id와 비밀번호가 일치합니다
//	
