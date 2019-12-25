package search;


//클래스 메서드와 인스턴스 메서드
//
//	클래스 메서드 : 정적메서드
//		클래스 전체에 대한 처리를 담당.
//	인스턴스 메서드 : 비정적 메서드 (static을 붙이지 않음)
	

//	인스턴스 메서드 호출 시 :클래스형 변수.메서드 이름
//	클래스 메서드 호출 시 : 클래스 이름.메서드 이


public class IdTester {
	private static int counter = 0; // 아이디를 몇개 부여했는지 저장
	
	private int id ;	// 아이디
	
	
	//생성자
	public IdTester() {
		id=++counter;
	}
	
	//아이디를 반환하는 인스턴스 메서드
	public int getIdTester() {
		return id;
		
	}
	
	//counter를 반환하는 클래스 메서드
	public static int getCounter() {
		return counter;
	}
	
	public static void main(String[] args) {
		IdTester a = new IdTester();
		IdTester b = new IdTester();
		
		System.out.println("a의 아이디 : " + a.getIdTester());
		System.out.println("b의 아이디 : " + b.getIdTester());
		
		System.out.println("부여한 아이디의 갯수 : "+IdTester.getCounter());
		
		
	}

}
//	출력

//	a의 아이디 : 1
//	b의 아이디 : 2
//	부여한 아이디의 갯수 : 2

