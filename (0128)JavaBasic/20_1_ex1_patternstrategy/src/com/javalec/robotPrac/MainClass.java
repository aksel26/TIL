package com.javalec.robotPrac;

public class MainClass {
	
	public static void main(String[] args) {
		
		System.out.println("로봇을 만들어 주세요");
		
		
		
		Robot superRobot =new SuperRobot();
		
		superRobot.shape();
		superRobot.actionWalk();
		superRobot.actionRun();
		superRobot.actionFly();
		superRobot.actionMissile();
		superRobot.actionknife();
		
		
		
	}
}
