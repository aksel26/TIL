package com.javalec.poly;

public class Actress implements PoliceMan, Firefighter, Chef {

	@Override
	public void makePizza() {
		// TODO Auto-generated method stub
		System.out.println("피자를 만들 수 습니다.");
	}

	@Override
	public void makeSpaghetti() {
		// TODO Auto-generated method stub
		System.out.println("스파게티를 만들 수 있습니다.");
	}

	@Override
	public void outFire() {
		// TODO Auto-generated method stub
		System.out.println("불을 끌수있다..");
	}

	@Override
	public void saveMan() {
		// TODO Auto-generated method stub
		System.out.println("사람을 구할 수 있다.");

	}
	@Override
	public void canCatchCriminal() {
		// TODO Auto-generated method stub
		System.out.println("범인을 잡을 수 있다.");
	}

	@Override
	public void canSearch() {
		// TODO Auto-generated method stub
		System.out.println("물건을 찾을 수있다.");
	}

}
