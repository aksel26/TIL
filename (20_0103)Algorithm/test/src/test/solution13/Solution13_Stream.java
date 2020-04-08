package test.solution13;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.stream.Stream;

public class Solution13_Stream {


	public static void main(String[] args) {
		String[] strArr = {"mash-up", "backend", "frontend"};
		
		List<String> strList = Arrays.asList(strArr);
		Arrays.sort(strArr);
		Collections.sort(strList);
		
		for(String str:strArr) {
			System.out.println(str);
		}
		
		for(String str:strList) {
			System.out.println(str);
		}
		
		
		Stream<String> listStream = strList.stream();
		Stream<String> arrayStream  = Arrays.stream(strArr);
		
		listStream.sorted().forEach(System.out::println);
		arrayStream.sorted().forEach(System.out::println);
	}
}