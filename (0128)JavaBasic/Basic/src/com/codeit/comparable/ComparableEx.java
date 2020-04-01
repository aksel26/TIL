package com.codeit.comparable;

import java.util.ArrayList;
import java.util.Collections;

public class ComparableEx {

	public static void main(String[] args) {
		ArrayList<Integer> al = new ArrayList<>();
		al.add(1);
		al.add(5);
		al.add(6);
		al.add(3);
		al.add(6);
		al.add(6);
		
		Collections.sort(al);
		System.out.println(al);
		
		
		ArrayList<String> alString = new ArrayList<>();
		alString.add("John");
		alString.add("Sujie");
		alString.add("Sam");
		alString.add("Zaniac");
		
		
		
		Collections.sort(alString);
		System.out.println(alString);


		ArrayList<Person> personList = new ArrayList<>();

		String name;
		int age;
		
//		위에 al,alString은 정렬대상이 1개였다.
//		반면, personList는 정렬대상이 2개이므로 그냥 sort 메서드를 사용하면 오류가 발생.
//		Person클래스에서 implements Comparable을 해주고 CompareTo메서드를 작성하면 해결.
		
		
		personList.add(new Person(name="Puth", age=32));
		personList.add(new Person(name="Zaniac", age=15));
		personList.add(new Person(name="Tom", age=65));
		personList.add(new Person(name="Charlie", age=35));
		
		Collections.sort(personList);
		System.out.println(personList);
	}

}
