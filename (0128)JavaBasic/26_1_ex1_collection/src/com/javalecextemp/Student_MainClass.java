package com.javalecextemp;

import java.util.HashSet;

public class Student_MainClass {
	public static void main(String[] args) {
		HashSet<Student> hashset  = new HashSet<Student>()	;
		hashset.add(new Student("홍길동", 3));
		hashset.add(new Student("이순신", 5));
		hashset.add(new Student("장보고", 6));
		
		
		
		System.out.println(hashset.toString());
		
//		객체가 가리키는 주소값이 찍힘
//		[com.javalecextemp.Student@7852e922, com.javalecextemp.Student@70dea4e, com.javalecextemp.Student@4e25154f]

//		student 클래스에서 
//		toString을 오버리아딩 했더니 잘 찍힘
//		[홍길동3, 장보고6, 이순신5]
//		순서는 정해지지 않았기 때문에 바뀜.

		Student student = new Student("이순신",5);
		hashset.remove(student);
		System.out.println(hashset.toString());
		
		
//		[홍길동3, 장보고6] 삭제되었다.

	}
}
