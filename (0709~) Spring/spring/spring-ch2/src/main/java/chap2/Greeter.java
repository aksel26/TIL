package chap2;

public class Greeter {

	private String format;
	
	String greet(String guest) {
		return String.format(format, guest);

	}
	
	public void setFormat(String format) {
		this.format = format;
	}
	
	
	public static void main(String[] args) {
		Greeter greeter = new Greeter();
		greeter.setFormat("%s,안녕하세요");
		String msg = greeter.greet("스프링");
		
		
		

	}

}
