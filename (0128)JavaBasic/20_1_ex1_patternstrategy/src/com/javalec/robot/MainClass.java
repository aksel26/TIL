package com.javalec.robot;

public class MainClass {
	
	public static void main(String[] args) {
		
		System.out.println("SuperRobot이 주문 들어 왔어요. 만들어 주세요.");
		Robot superRobot = new SuperRobot();
		superRobot.shape();
		superRobot.actionBasic();
		superRobot.actionFly();
		superRobot.actionFire();
		superRobot.actionKnife();
		System.out.println("----------------------------------------------");
		
		System.out.println("StandardRobot이 주문 들어 왔어요. 만들어 주세요.");
		Robot standardRobot = new StandardRobot();
		standardRobot.shape();
		standardRobot.actionBasic();
		standardRobot.actionFly();
		standardRobot.actionFire();
		standardRobot.actionKnife();
		System.out.println("----------------------------------------------");
		
		System.out.println("CheapRobot이 주문 들어 왔어요. 만들어 주세요.");
		Robot cheapRobot = new CheapRobot();
		cheapRobot.shape();
		cheapRobot.actionBasic();
		cheapRobot.actionFly();
		cheapRobot.actionFire();
		cheapRobot.actionKnife();
		System.out.println("----------------------------------------------");
	}
	
}
