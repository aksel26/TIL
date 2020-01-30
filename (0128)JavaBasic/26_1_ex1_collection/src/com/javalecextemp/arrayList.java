package com.javalecextemp;

import java.util.ArrayList;

public class arrayList {
	public static void main(String[] args) {
		
		ArrayList<String> arrayList = new ArrayList<String>();
		
		arrayList.add("str0");
		arrayList.add("str1");
		arrayList.add("str2");
		arrayList.add("str3");
		
		System.out.println(arrayList);
		
//		[str0, str1, str2, str3]
		
		arrayList.set(2, "str2222");
		System.out.println(arrayList);
		
//		[str0, str1, str2222, str3]
		
		arrayList.remove(3);
		System.out.println(arrayList);
		System.out.println(arrayList.size()); 

//		[str0, str1, str2222]
//		3
		
		arrayList.clear();
		System.out.println(arrayList);
		
//		[]

		arrayList=null;
//		System.out.println(arrayList.toString());
		System.out.println(arrayList);
		
//		Exception in thread "main" java.lang.NullPointerException
//		at com.javalecextemp.MainClass.main(MainClass.java:37)
		
//		null

		
	}
}
