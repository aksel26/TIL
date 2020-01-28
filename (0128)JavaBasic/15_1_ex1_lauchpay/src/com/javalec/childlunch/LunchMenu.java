package com.javalec.childlunch;

public abstract class LunchMenu {

	public int rice;
	public int bulgogi;
	
	public int banana;
	public int milk;
	public int almond;
	
	public LunchMenu(int rice, int bulgogi, int banana, int milk, int almond) {
		// TODO Auto-generated constructor stub
		this.rice = rice;
		this.bulgogi = bulgogi;
		this.banana = banana;
		this.milk = milk;
		this.almond = almond;
	}
	
	public abstract int calculating();
	
}
