package com.javalec.robotPrac;

import com.javalec.robotInter.FlyYes;
import com.javalec.robotInter.KnifeLazer;
import com.javalec.robotInter.MissileYes;

public class SuperRobot extends Robot {
	

	
	
//	IFly fly = new FlyYes();
//	Imissile missile = new MissileYes();
//	Iknife knife = new KnifeLazer();
	
	
	
	public SuperRobot() {
		fly = new FlyYes();
		missile = new MissileYes()	;
		knife = new KnifeLazer();
	}
	@Override
	public void shape() {
		System.out.println("SuperRobot입니다");
	}


}
