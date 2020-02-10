package Map;

import java.util.HashSet;

public class HashSet2 {

	public static void main(String[] args) {
		HashSet set = new HashSet();
		set.add("abc");
		set.add("abc");
		set.add(new Person("David", 10));
		set.add(new Person("David", 10));

		System.out.println(set);
	}

}

class Person {
	String name;
	int age;

	Person(String name, int age) {
		this.name = name;
		this.age = age;

	}

	public String toString() {
		return name + ":" + age;
	}
}

//Ãâ·Â

//[David:10, abc, David:10]
