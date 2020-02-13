package Generics;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Fruit {
	String name;
	int weight;

	Fruit(String name, int weight) {
		this.name = name;
		this.weight = weight;

	}

	public String toString() {
		return name + "(" + weight + ")";
	}

}

class Apple extends Fruit {
	Apple(String name, int weight) {
		super(name, weight);
	}
}

class Grape extends Fruit {
	Grape(String name, int weight) {
		super(name, weight);
	}
}

class AppleComp implements Comparator<Apple> {
	public int compare(Apple a1, Apple a2) {
		return a2.weight - a1.weight;
	}
}

class GrapeComp implements Comparator<Grape> {
	public int compare(Grape g1, Grape g2) {
		return g2.weight - g1.weight;
	}
}

class FruitComp implements Comparator<Fruit> {
	public int compare(Fruit a1, Fruit a2) {
		return a1.weight - a2.weight;
	}
}

public class FruitBoxEx4 {

	public static void main(String[] args) {
		FruitBox<Apple> appleBox = new FruitBox<Apple>();
		FruitBox<Grape> grapeBox = new FruitBox<Grape>();

		appleBox.add(new Apple("GreenApple", 300));
		appleBox.add(new Apple("GreenApple", 100));
		appleBox.add(new Apple("GreenApple", 200));

		grapeBox.add(new Grape("GreenGrape", 400));
		grapeBox.add(new Grape("GreenGrape", 300));
		grapeBox.add(new Grape("GreenGrape", 200));

		Collections.sort(appleBox.getList(), new AppleComp());
		Collections.sort(grapeBox.getList(), new GrapeComp());

		System.out.println(appleBox);
		System.out.println(grapeBox);

		System.out.println();

		Collections.sort(appleBox.getList(), new FruitComp());
		Collections.sort(grapeBox.getList(), new FruitComp());

		System.out.println(appleBox);
		System.out.println(grapeBox);

	}

}

class FruitBox<T extends Fruit> extends Box<T> {

}

class Box<T> {
	ArrayList<T> list = new ArrayList<T>();

	void add(T item) {
		list.add(item);

	}

	T get(int i) {
		return list.get(i);

	}

	ArrayList<T> getList() {
		return list;
	}

	int size() {
		return list.size();

	}

	public String toString() {
		return list.toString();
	}
}


//	Ãâ·Â

//	[GreenApple(300), GreenApple(200), GreenApple(100)]
//	[GreenGrape(400), GreenGrape(300), GreenGrape(200)]
//	
//	[GreenApple(100), GreenApple(200), GreenApple(300)]
//	[GreenGrape(200), GreenGrape(300), GreenGrape(400)]
