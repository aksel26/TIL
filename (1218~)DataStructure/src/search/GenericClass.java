package search;


//제네릭
//:처리해야 할 대상의	자료형에 의존하지 않는 클래스(인터페이스)구현 방식
//
//class 클래스이름 <파라미터> {  ... }
//interface 인터페이스이름 <파라미터> { ... }
//	파라미터 여러개는 <파라미터, 파라미터>
	
//	매개변수로 정의한 '자료형'을 전달 받을 수 있다.
	
//	파라미터 이름 작성법
//	1. 1개의 대문자로 사용한다.
//	2. 컬렉션의 자료형은 element의 E를 사용
//		컬렉션은 자바에서 제공하는 기본 자료구조를 모은 것
//	3. 맵의 키,값은 K,V 사용
//	4. 일반적으로 T를 사용한다.

//형변수에는 와일드카드 지정 가능
//< ? extends T > : 클래스 t의 서브클래스를 전달받는다.
//< ? super T > : 클래스 t의 슈퍼클래스 전달받는다.

class GenericClass {
	static class GenericClassTest<T>{
		
		private T xyz;
		
		GenericClassTest(T t){ //생성자
			this.xyz=t;
		}
		
		T getXyz() {
			return xyz;
		}
	}
	public static void main(String[] args) {
		//다음과 같이 파라미터에 String 을 넘길수도 있고 Integer도 넘길 수 있다.
		GenericClassTest<String> s = new GenericClassTest<String>("ABC");
		GenericClassTest<Integer> n = new GenericClassTest<Integer>(123);
		
		System.out.println(s.getXyz());
		System.out.println(n.getXyz());
		
	}

}


	
//	출력
	
//	ABC
//	123

