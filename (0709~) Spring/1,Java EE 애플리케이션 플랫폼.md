Hibernate Framework
데이터 영속성 관리

Mybatis SQL Mapping



레이어 아키텍쳐

- 프레젠테이션 레이어
  - 프레젠테이션 로직 구현 
- 레퍼지토리 레이어 : 업무 로직 구현
- 서비스 레이어 :업무 로직 구현



 **Maven 디렉토리 구조**



**Spring Framework**	

자바에서는 component 대신bean사용

java client Bean
JSP Bean(DTO)

단순java object - bean

뼈대

시스템구조+ 성능 검증기반+ 생성 환경 container

#### 제 어역행(IoC -Inversion of Control)

제어권 : 개발자가 제어역할을 가지고 있음	

관점지향(AOP Aspect-Oriented Programming)

​	객체 지향 프로그래밍을 보완

공통관심사항 로깅 보안 트랜잭션, 예외처리 중복이면?

핵심관심사항이자계산



### 결합도와 유지보수

결합도 : 소프트웨어 코드의 한 요소가 다른 것과 얼마나 연결되어 있는지 나타내는 말

객체 연결이란 : 한 객체 안에서 다른 객체의 메소드를 호출해 멤버 변수에 접근할 때 두 객체가 연결되어 있다는 것이다

결합도를 떨어뜨리는 방법 : Interface



### Spring IoC 컨테이너

- BeanFactory

  - bean의 생성과 소멸담당

  - bean 생성시 필요한 속성  설정

  - bean의 life cycle에 관련된 메서드 호출

  - Context시작 시 모든 singleton Bean을 실제 bean객체가 사용되는 시점에 로딩

    *singleton 아무리 요청해도 같은 빈 (기본 값)

- ApplicationContext (also DI Container)

  - 국제화 

- XML설정





