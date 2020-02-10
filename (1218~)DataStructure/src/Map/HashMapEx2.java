package Map;

import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map.Entry;
import java.util.Set;

public class HashMapEx2 {

	public static void main(String[] args) {
		HashMap<String,Integer> map = new HashMap<String,Integer>();
		map.put("김자바",new Integer(50));
		map.put("김자바",new Integer(100));
		map.put("이자바",new Integer(70));
		map.put("강자바",new Integer(90));
		map.put("안자바",new Integer(70));
		
	Set<Entry<String,Integer>> set = map.entrySet();
	
	System.out.println(set);
	
	Iterator it = set.iterator();
	
	
	Set set1 = map.keySet();
		System.out.println("참가자 명단 : " +set1);
		
	Collection values =map.values();
	it=values.iterator();
	
	int total = 0;
	while(it.hasNext()) {
		Integer i = (Integer)it.next();
		total += i.intValue();
	}
	
	System.out.println("총점 : " + total);
	System.out.println("평균 ; " + (float)total/set.size());
	System.out.println("최고점수 : "+ Collections.max(values));
	System.out.println("최저점수 : "+ Collections.min(values));
	}

}


//	출력

//	[안자바=70, 김자바=100, 강자바=90, 이자바=70]
//	참가자 명단 : [안자바, 김자바, 강자바, 이자바]
//	총점 : 330
//	평균 ; 82.5
//	최고점수 : 100
//	최저점수 : 70
//	
