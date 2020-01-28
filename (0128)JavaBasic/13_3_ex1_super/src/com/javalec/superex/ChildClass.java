package com.javalec.superex;

public class ChildClass extends ParentClass {
	
	public ChildClass() {
		// TODO Auto-generated constructor stub
		System.out.println("ChildClass");
		super.method();
		this.method();
	}
	
	@Override
	public void method() {
		// TODO Auto-generated method stub
		super.method();
		
		System.out.println("부모 클래스의 method()를 실행 하고, 자식 클래스의 나머지 작업을 합니다.");
	}
}
