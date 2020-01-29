package com.javalec.robotPrac;

import com.javalec.robotInter.IFly;
import com.javalec.robotInter.Iknife;
import com.javalec.robotInter.Imissile;

public abstract class Robot {

	IFly fly;
	Imissile missile;
	Iknife knife;

	public Robot() {
		// TODO Auto-generated constructor stub
	}

	public void actionWalk() {
		System.out.println("걸을 수 있다.");
	}

	public void actionRun() {
		System.out.println("뛸 수 있다.");
	}

	public abstract void shape();

 

	public void setFly(IFly fly) {
		this.fly = fly;
	}

	public void setMissile(Imissile missile) {
		this.missile = missile;
	}

	public void setKnife(Iknife knife) {
		this.knife = knife;
	}
	
	
	public void actionknife() {
		this.knife.knife();

	}
	
	public void actionMissile() {
		this.missile.missile();
	}
	
	public void actionFly() {
		this.fly.fly();
	}
}
