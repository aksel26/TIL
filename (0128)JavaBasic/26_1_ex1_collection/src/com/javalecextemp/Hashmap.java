package com.javalecextemp;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

public class Hashmap {
	public static void main(String[] args) {
		
	
		HashMap<Integer, String> hashmap = new HashMap<Integer, String>()	;
		
		hashmap.put(0,"str0");
		hashmap.put(1,"str1");
		hashmap.put(2,"str2");
		hashmap.put(3,"str3");
		
		System.out.println(hashmap.toString());
//		{0=str0, 1=str1, 2=str2, 3=str3}

		hashmap.remove(2);
		System.out.println(hashmap.toString());
//		{0=str0, 1=str1, 3=str3}
		
		hashmap.clear();
		System.out.println(hashmap.toString());
//		{}
		
		
		hashmap.put(0,"str0");
		hashmap.put(1,"str1");
		hashmap.put(2,"str2");
		hashmap.put(3,"str3");
		System.out.println(hashmap.toString());
		
		Iterator<Integer> iterator = hashmap.keySet().iterator();
		while(iterator.hasNext()	) {
			System.out.println(hashmap.get(iterator.next()));
		}
		
//		str0
//		str1
//		str2
//		str3
		
	}
}
