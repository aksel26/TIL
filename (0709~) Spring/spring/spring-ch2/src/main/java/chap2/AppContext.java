package chap2;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;



@Configuration // 해당클래스를 스프링 설정 클래스로 설정한다.
public class AppContext {

	
	@Bean	//스프링이 생성하는 객체 (스프링이 관리하는 객체)
	public Greeter greeter() {
		Greeter g = new Greeter();
		g.setFormat("%s,안녕하세요!");
		return g;
	}
}
