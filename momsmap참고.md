### 순서

1. docker 켜고 연결

    `$ docker run -d -p 59160:22 -p 59161:1521 wnameless/oracle-xe-11g-r2` 

   --> 이후, sqldeveloper에서 계속 비밀번호오류 뜸..

   

2. wnameless컨테이너 말고 jaspeen 컨테이너를 이용

   `docker run --name oracle11g -d -p 8080:8080 -p 1521:1521 jaspeen/oracle-xe-11g`

   ​	: 포트번호 8080

3. sqlplus 실행

   `docker exec -it oracle11g sqlplus` 

4. sqldeveloper에서 system계정으로 접속하여 

   `create user momsmap identified by 1234;`

   `grant connect,resource,dba to moms map;`

   입력 후, momsmap 계정 생성

5. DB 정보를 입력하고 커밋

6. 서버 실행을 할때 났던 오류,

   1. 모듈 path 충돌 (/kids)

      ![image-20200204163039141](/Users/hxmkim/Library/Application Support/typora-user-images/image-20200204163039141.png)

      --> module 하나를 지우거나 변경해서 중복되지 않게 한다. ( /kids 하나만 남게끔 )

   2. 포트번호 충돌

      1. 8080 번호와 충돌되서 서버가 켜지지 않음

         ---> `sudo lsof -i :8080` 8080 포트를 쓰고 있는 것들 확인

         ​	  `kill -9 (PID number)` 톰캣 PID값을 넣는다. 



- 그밖에 사용했던 docker 명령어들

  `docker ps` : 컨테이너 목록 조회

  `docker ps -a`: 생성한 전체 컨테이너 목록

  `docker rm [컨테이너번호]` : 해당 컨테이너 삭제

  