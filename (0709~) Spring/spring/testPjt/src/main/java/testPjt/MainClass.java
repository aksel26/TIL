package testPjt;

import org.springframework.context.support.GenericXmlApplicationContext;

public class MainClass {
	public static void main(String[] args) {
//		moveWalk walk = new moveWalk();
//		walk.move();
		
		
//		xml파일에서 객체를 만든 후 사용
		GenericXmlApplicationContext ctx = new GenericXmlApplicationContext("classpath:applicationContext.xml"); //컨테이너를 가져옴
		
		moveWalk mw = ctx.getBean("move", moveWalk.class);
		
		mw.move();
		 
		ctx.close();
		
		
		
	}
}
