package com.javalec.childlunch;

public class Child2 extends LunchMenu {

	public Child2(int rice, int bulgogi, int banana, int milk, int almond) {
		// TODO Auto-generated constructor stub
		super(rice, bulgogi, banana, milk, almond);
	}
	
	@Override
	public int calculating() {
		// TODO Auto-generated method stub
		return rice + bulgogi + milk + almond;
	}

}
