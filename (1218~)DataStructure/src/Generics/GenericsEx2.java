package Generics;

import java.util.ArrayList;



public class GenericsEx2 {
	public static void main(String[] args) {
		Box<Fruit> fruitBox = new Box<Fruit>();
		Box<Apple> appleBox = new Box<Apple>();
//		Box<Grape> grapeBox = new Box<Grape>();
		Box<Toy> toy = new Box<Toy>();
		
		
		fruitBox.add(new Fruit());
		fruitBox.add(new Apple());
		
		appleBox.add(new Apple());
		appleBox.add(new Apple());
//		appleBox.add(new Toy());	//	Box<Apple>에는 Apple만 들어갈 수 있다....
		
		toy.add(new Toy());
//		toy.add(new Apple());
		
		System.out.println(fruitBox);
		System.out.println(appleBox);
		System.out.println(toy);
		
		
		
		
	}

}



//	[Fruit, Apple]
//	[Apple, Apple]
//	[Toy]
