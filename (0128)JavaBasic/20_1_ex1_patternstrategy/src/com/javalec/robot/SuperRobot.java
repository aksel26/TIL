package com.javalec.robot;

import com.javalec.robot.actions.FireOk;
import com.javalec.robot.actions.FlyOk;
import com.javalec.robot.actions.KnifeWithLazer;

public class SuperRobot extends Robot {

	public SuperRobot() {
		// TODO Auto-generated constructor stub
		flyAction = new FlyOk();
		fireAction = new FireOk();
		knifeAction = new KnifeWithLazer();
	}
	
	@Override
	public void shape() {
		// TODO Auto-generated method stub
		System.out.println("기본적으로 팔, 다리, 머리, 몸통으로 이루어져 있습니다. 그리고 걷고, 달릴 수 있습니다.");
	}
	

}
