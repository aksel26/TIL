package com.javalec.interfacephone;

public class CPhone implements IFunction {

	@Override
	public void callSenderReceive() {
		// TODO Auto-generated method stub
		System.out.println("가능 합니다.");
	}

	@Override
	public void canLte() {
		// TODO Auto-generated method stub
		System.out.println("가능 합니다. 4G 입니다.");
	}

	@Override
	public void tvRemoteController() {
		// TODO Auto-generated method stub
		System.out.println("미탑재 되어 있습니다.");
	}

}
