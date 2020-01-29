package com.javalec.robotPrac;

import com.javalec.robotInter.FlyNo;
import com.javalec.robotInter.FlyYes;
import com.javalec.robotInter.KnifeLazer;
import com.javalec.robotInter.MissileYes;

public class MainClass {
	
	public static void main(String[] args) {
		
		System.out.println("SuperRobot을 만들어 주세요");
		
		
		
		Robot superRobot =new SuperRobot();

		
		// 주석
		// superRobot객체 생성 시 
		// 아예  Fly, missile, Kinfe 객체를 생성하는 방법.
		
		
		
		superRobot.shape();
		superRobot.actionWalk();
		
		superRobot.actionRun();
//		superRobot.setFly(new FlyYes());
		superRobot.actionFly();
		
//		superRobot.setMissile(new MissileYes());
		superRobot.actionMissile();
		
//		superRobot.setKnife(new KnifeLazer());
		superRobot.actionknife();
		
//		superRobot.setFly(new FlyNo());
		superRobot.actionFly();
		
		
	}
}
