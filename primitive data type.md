primitive data type

wrapper type 	===Mybatis

collection type    sql Mapping		jdbc API  ==sql==>    [database]
JAVA POJO 			Framework



confing.xml(->myBatis)   		mapper.xml (namespace선언) (->myBatis)
db연결정보								selectid , insertid ...
logging 설정
wrapper.xml리스트
mode설정 (운영, 개발)

---

Connection 해당하는 객체

sqlSessionfactory builder
^
(생성) 

sqlSessionFactory.openSession()

sqlSession (query()update())

---

[sqlSessionTemplate] -> sqlSession --주입--> DAO 

Spring MVC 

- 구조

  DispatcherServlet, HandlerMapping, Controller, Interceptor, ViewResolver, View

- DispatcherServlet
  - Spring MVC Framework의 Front Controller, 웹요청과 응답의 Life Cycle을 주관.
    맨 앞단에서 모든 요청을 처리함 
  - 모든 요청을 처리 하는 것이 아니고 HandlerMapping (Command Pattern이 정해져 있음) 으로 넘김
    모든 빈 클래스에 대해 이름을 설정. 
    요청이오면 이름에 맞춰 controller 이름을 보내줌
    controller  bean을 만듦
    서비스 (-DAO or ) ->controller ->view선택 -> ,viewResolver - View Dispatcher Service에 보내 응답한다.![1563151419081](C:\Users\student\AppData\Roaming\Typora\typora-user-images\1563151419081.png)
  - EventController (web.xml)
  - IoC Container (빈 설정파일)
- RequestMapping
  - 요청에 대해 어떤 Controller, 어떤 메서드가 처리할 지를 맵핑하기 위한 어노테이션
    - value : String[] - URL 값으로 매핑 조건을 부여(default)
    - method
    - 책 참조
  - 