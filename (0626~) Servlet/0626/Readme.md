# JSP 시작하기

## 중요 배경지식



<img src="Readme.assets/image-20200308010424090.png" alt="image-20200308010424090" style="zoom:33%;" />

<img src="Readme.assets/image-20200308015544034.png" alt="image-20200308015544034" style="zoom:33%;" />

- jsp파일은 반드시 WebContent아래에 있어야 한다.

<img src="Readme.assets/image-20200308010523946.png" alt="image-20200308010523946" style="zoom:33%;" />





# Servlet 시작하기

- jsp는 안에 html코드를 넣는거고 servlet은 순수 java파일을 이용하는 것.
  - **jsp**는 <u>뷰</u> 부분
  - **servlet** <u>controller, model</u> 서블렛을 이용

## Servlet Mapping

- <img src="Readme.assets/image-20200308022313100.png" alt="image-20200308022313100" style="zoom:33%;" />
- servlet이 많아지면 구분이 필요하다 (중복불가)
- full path를 보완한 mapping path



### mapping을 어떻게 할까?

- 방법1. web.xml을 이용하는 방법

  ```xml
    <servlet>
    	<servlet-name>testServlet</servlet-name>
    	<servlet-class>com.testPjt.testServlet</servlet-class>
    </servlet>
  
  	<servlet-mapping>
  		<servlet-name>testServlet</servlet-name>
  		<url-pattern>/test</url-pattern>
  	</servlet-mapping>
  ```

  - `servlet-name`은 위아래가 반드시 같아야한다.
  - `servlet-class`는 패키지명.class이름까지 적어줘야 한다.

- 방법2. annotation활용

  `@WebServlet("/ts")`

  - test로도 매핑이 되고, ts로도 매핑이 되서 각각 모두 출력이 된다.

### Response, Request

1. #### httpServlet

> 추상클래스
>
> httpServlet만 상속받아서 사용하게 되면 아래에 많은 표준화된 기능들을 사용할 수 있게 편의기능을 이용 가능하다.

<img src="Readme.assets/image-20200311002828927.png" alt="image-20200311002828927" style="zoom:33%;" />



1. httpServletRequest
2. httpServletResponse