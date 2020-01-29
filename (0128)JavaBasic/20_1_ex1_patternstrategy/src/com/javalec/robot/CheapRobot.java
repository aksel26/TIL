package com.javalec.robot;

import com.javalec.robot.actions.FireNo;
import com.javalec.robot.actions.FireOk;
import com.javalec.robot.actions.FlyNo;
import com.javalec.robot.actions.FlyOk;
import com.javalec.robot.actions.KnifeNo;
import com.javalec.robot.actions.KnifeWithLazer;
import com.javalec.robot.actions.KnifeWithWood;

public class CheapRobot extends Robot {

	public CheapRobot() {
		// TODO Auto-generated constructor stub
		flyAction = new FlyNo();
		fireAction = new FireNo();
		knifeAction = new KnifeNo();
	}
	
	@Override
	public void shape() {
		// TODO Auto-generated method stub
		System.out.println("기본적으로 팔, 다리, 머리, 몸통으로 이루어져 있습니다. 그리고 걷고, 달릴 수 있습니다.");
	}
	

}
