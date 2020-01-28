package com.javalex.interex;

public class InterfaceClass implements InterfaceEx, InterfaceEx2 {

	@Override
	public String getStr() {
		// TODO Auto-generated method stub
		System.out.println("실제 구현은 여기서 해요");
		return null;
	}

	@Override
	public void calculate() {
		// TODO Auto-generated method stub
		System.out.println("실제 구현은 여기서 해요");
	}

}
