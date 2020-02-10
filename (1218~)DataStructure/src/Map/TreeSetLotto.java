package Map;

import java.util.Collections;
import java.util.Set;
import java.util.TreeSet;

public class TreeSetLotto {

	public static void main(String[] args) {
		Set set = new TreeSet();
		for(int i = 0 ; set.size()< 6 ; i++) {
			int num = (int)(Math.random()*45)+1;
			set.add(num);
			
		}
		
		System.out.println(set);
	}

}

//	출력


//	[11, 13, 24, 39, 44, 45]


//	TreeSet에는 이미 정렬되어 있기 때문에 
//	HashSet에서 했던 Collections.sort(list);	정렬이 따로 필요가 없다.