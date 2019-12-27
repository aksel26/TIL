## 재귀 알고리즘

1. 재귀의 기본

​	1-1. 재귀란 ?

> 자기 자신을 포함하고 다시 자기 자신을 사용해 정의될 때 재귀적이라고 한다.

​	1-2. 팩토리얼 구하기

​		n!

​		(1) 0! = 0
​		(2) n>0 이면 n! = n x (n-1) !



### 재귀호출

: 메서드 자신을 호출한다기 보다 자신과 똑같은 메서들르 호출한다고 이해하는 것이 자연스럽다.

```java
package recursive;

import java.util.Scanner;

public class Factorial {
	static int factorial(int n) {
		if (n> 0 ) {
			return n * factorial(n-1);
			
		}else {
			return 1;
			
		}
		
	}


public static void main(String[] args) {
	Scanner scn = new Scanner(System.in)	;
	System.out.println("숫자를 입력하세요");
	int num = scn.nextInt();
	System.out.println(num + "의 팩토리얼은 " + factorial(num) +" 입니다");
}
}


//	출력
	
//	숫자를 입력하세요
//	4
//	4의 팩토리얼은 24 입니다
```

- 알고리즘에 알맞는 경우

  풀어야할 문제

  계산할 메서드

  처리할 데이터 구조가 재귀로 정의되는 경우

### 유클리드 호제법

> 두 정수의 최대공약수를 재귀적으로 구하는 방법

i ) 두 정수를 직사각형의 두 변의 길이로 생각해보자
	<--> 직사각형을 정사각형으로 완전히 채운다. 이렇게 만들 수 있는 정사각형의 가장 긴 변의 길이를 구하자.

1. 22 * 8 사각형의 큰 변을 나눈다.
2. 8*8 정사각형 2개 8x6 사각형 1개 2x6사각형 한개가 생긴다.
3. 2x6사각형을 나누면 2x2정사각형이 3개 생긴다
4. 결국 2가 최대공약수.

x,y의 최대공약수 : gcd(x,y)로 표기하면
x=za, y=zb를 만족하는 정수 a,b와 최대의 정수 z가 존재할 때 z를 gcd(x,y)라고 할 수 있다. 

최대공약수는 y가 0이면 x이고, y가 0이 아니면 gcd(y,x%y)로 구한다.

```java
package recursive;

import java.util.Scanner;

public class EuclidGCD {
	static int gcd(int x , int y) {
		if (y==0) {
			return x;
			
		}else {
			return gcd(y, x%y);
		}
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner (System.in);
		System.out.println("두 정수의 최대공약수를 구합니다.");
		System.out.println("정수를 입력하세요");
		System.out.println("a:");
		int a = scn.nextInt()	;
		System.out.println("b:");
		int b = scn.nextInt();
		
		System.out.println("두 정수의 최대공약수는 " + gcd(a,b) + "입니다.");
		
	}

}


//	출력
	
//	두 정수의 최대공약수를 구합니다.
//	정수를 입력하세요
//	a:
//	4
//	b:
//	10
//	두 정수의 최대공약수는 2입니다.

```



## 재귀 알고리즘 분석

- 상향식 분석
- 하향식 분석

### 재귀알고리즘의 분석

```java
package recursive;

import java.util.Scanner;

public class Recur {
	static void recur(int n) {
		if (n > 0) {
			recur(n - 1);
			System.out.println(n);
			recur(n - 2);
		}
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("정수를 입력하세요");
		int num = scn.nextInt();

		recur(num);
	}

}


//	정수를 입력하세요
//	4
//	1
//	2
//	3
//	1
//	4
//	1
//	2
```

- 메서드 안에서 재귀 호출을 2번 실행한 결과.

#### 하향식분석

- 매개변수 4를 전달 시 recur 메서드 실행 순서
  1. Recur (3)	실행
  2. 4 출력
  3. recur(2)   실행

<img src="recursive.JPG" alt="recursive" style="zoom:50%;" />

- 같은 호출이 여러번 -> 효율적이지 못함.

#### 상향식 분석

- recur(1) 	수행 순서

  1. recur(0) 실행

  2. 1을 출력

  3. recur(-1) 실행

     ---> 1,2 에서 출력 내용이 없으므로 1만 출력됨

- recur(2)  수행순서

  1. recur(1). --> 1출력

  2. 2출력

  3. recur(2) --> recur(0) 출력 내용 없음

     ----> 1, 2출력

     <img src="../../../../../../Desktop/recur(-1) 1.jpg" alt="recur(recur(-1) 1-7432756.jpg) 1" style="zoom:33%;" />