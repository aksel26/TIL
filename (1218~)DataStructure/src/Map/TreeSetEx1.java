package Map;

import java.util.TreeSet;

public class TreeSetEx1 {

	public static void main(String[] args) {
		TreeSet set = new TreeSet();
		
		String from ="b";
		String to = "d";
		
		
		set.add("abc");
		set.add("alien");
		set.add("bat");
		set.add("disc");
		set.add("dizzy");
		set.add("fan");
		set.add("elevator");
		set.add("dzzzz");
		set.add("flower");
		set.add("Car");
		
		System.out.println(set);
		System.out.println("rangeSearch : from " + from + " to " + to);
		System.out.println("result1 : " + set.subSet(from, to));
		System.out.println("result2 : " + set.subSet(from, to + "zzz"));
		
	}

}



//	출력

//	[Car, abc, alien, bat, disc, dizzy, dzzzz, elevator, fan, flower]	// 대문자가 소문자보다 우선이기 때문에 Car가 먼저 나옴,
										// 대문자 소문자 각각 통일하는 것이 좋음.
										// 아니면 comparator를 쓴다.
//	rangeSearch : from b to d	
//	result1 : [bat]		// 처음은 포함되지만 끝범위는 포함되지 않으므로 bat만 나옴
//	result2 : [bat, disc, dizzy]	//"zzz"를 붙여줌으로써 끝 범위까지 검색 가능

