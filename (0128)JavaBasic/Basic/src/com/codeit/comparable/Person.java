package com.codeit.comparable;

public class Person implements Comparable<Person>{
	public final String name;
	public final int age;
	
	public Person(String name, int age) {
		this.age=age;
		this.name = name;
	}
	
	@Override
	public String toString() {
		
		return name + " : " + age + "세";
	}
	
	@Override
	public int compareTo(Person o) {
		
//		나이순
//		return age - o.age;
		
//		알파벳 순서
		return name.compareTo(o.name);
	}
	
	
}
