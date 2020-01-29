package com.javalec.robot;

import com.javalec.robot.actions.FireAction;
import com.javalec.robot.actions.FlyAction;
import com.javalec.robot.actions.KnifeAction;

public abstract class Robot {
	
	public FlyAction flyAction;
	public FireAction fireAction;
	public KnifeAction knifeAction;
	
	public Robot() {
		// TODO Auto-generated constructor stub
	}
	
	public abstract void shape();
	
	public void actionFly() {
		// TODO Auto-generated method stub
		flyAction.fly();
	}
	
	public void actionFire() {
		// TODO Auto-generated method stub
		fireAction.fire();
	}
	
	public void actionKnife() {
		// TODO Auto-generated method stub
		knifeAction.knife();
	}
	
	public void actionBasic() {
		// TODO Auto-generated method stub
		System.out.println("팔, 다리, 머리, 몸통이 있습니다.");
	}

	public void setFlyAction(FlyAction flyAction) {
		this.flyAction = flyAction;
	}

	public void setFireAction(FireAction fireAction) {
		this.fireAction = fireAction;
	}

	public void setKnifeAction(KnifeAction knifeAction) {
		this.knifeAction = knifeAction;
	}
	
	
}
