## DB

Database :
특정 기업이나 조직 또는 개인이 필요에 의해 논리적으로 연관된 데이터를 모아 일정한 형태로 저장해 놓은것

DBMS(Database Management System) :
데이터베이스 관리 프로그램
DBMS를 이용하여 데이터 입력, 수정, 삭제 등의 기능을 제공한다

Database 특징 :
통합된 데이터 - 데이터의 중복을 최소화하여 중복으로 인한 데이터 불일치 현상을 제거
저장된 데이터 - 디스크, 테이프 같은 컴퓨터 저장장치에 저장된 데이터
운영 데이터 - 업무를 위한 검색을 할 목적으로 저장된 데이터
공용 데이터 - 동시 공유
실시간 접근성
지속적인 변화
내용에 따른 참조

파일 시스템 :
데이터를 파일 단위로 저장하므로 중복 가능
데이터의 중복 저장으로 일관성이 결여됨
데이터 정의와 프로그램의 독립성 유지 불가능
관리 기능 보통
프로그램 개발 생산성 나쁨

DBMS 장점 :
DBMS를 이용하여 데이터를 공유하기 때문에 중복 가능성이 낮음
중복 제거로 데이터의 일관성이 유지됨
데이터 정의와 프로그램의 독립성 유지 가능
데이터 복구, 보안, 동시성 제어, 데이터 관리 기능 등을 수행
짧은 시간에 큰 프로그램을 개발할 수 있음
데이터 무결성 유지, 데이터 표준 준수 용이

데이터베이스 사용자 그룹
일반 사용자
응용프로그래머
SQL 사용자
DBA



### DBMS흐름



1. 계층형 dbms

1:M참조관계

레코드저장 -> db로 이동 ->물리적인 포인터 지정

관리가 어려움



2. 망형 (networkd) dbms

M:M 

여전히 관리가 어려움

수학 관계대수 이용 2차원구조로 표현

부모 객체 참조한 자식객체는 수정 불가

3. 관계형 RDBMS

   2차원구조-> Table  사용

   관리대상 - entity

   유일한 레코드 식별키 - primary key (not null + unique)

   외래키//속성 attribute //column

   고민끝에 만들어진 결과 정형 schema 구조

   

4. 객체지향 DBMS-ORDBMS

   1. 객체 지원 관계형 dbms

      

5. 빅데이터-하둡->no sql(정형X 가변스키마 구조 mongo db, casandra,,,)

RDBMS 표준언어 - SQL 



cf) 오라클설치시 user 이름 한글이면 안됨



1. seed - 기본 db템플릿
2. 데스크톱 클래스
3.  소프트웨어 위치-홈디렉토리





DML

- 데이터 검색 SELECT	

- 추가 INSERT

- 수정 UPDATE

- 삭제 DELETE

DDL 

- 생성	CREATE
- 변경    ALTER
- 삭제    DROP
- table저장소 관리 명령 TRUNCATE(table에만씀)

DCL

- DBMS 보안
  - 1. 인증
    2. 권한 GRANT , REVOKE



Tx = Unit of Work

RDBMS 주요 목적 : Transaction 처리

- 원자성을 가져야함

- 영속성 (시스템 종료 되었다가 다시 실행되도 볼 수 있어야함)

  

---

<Command 창에서 접근>

sqlplus를 실행시키고 관리자 계정으로 접속해서 sample계정 비밀번호 설정하고, 잠긴 계정을 풉니다.

C:\Users\student>**sqlplus / as sysdba**

SQL*Plus: Release 11.2.0.1.0 Production on 목 5월 30 10:20:16 2019

Copyright (c) 1982, 2010, Oracle.  All rights reserved.

다음에 접속됨:
Oracle Database 11g Enterprise Edition Release 11.2.0.1.0 - 64bit Pro
With the Partitioning, OLAP, Data Mining and Real Application Testing

SQL> **select user from dual;**

USER

SYS

SQL> **alter user scott**
  2  identified by oracle
  3  account unlock;

사용자가 변경되었습니다.

SQL> **alter user hr**
  2  identified by oracle
  3  account unlock;

사용자가 변경되었습니다.

SQL>

---

conn 실제 과정

| sqlplus                                                      |                                          |
| ------------------------------------------------------------ | ---------------------------------------- |
| sql> conn hr/oracle@orcl  orcl 생략-default orcl정보-connect packet- > |                                          |
| **listener**-->db server ( dbms trans = memory+process )     | Listener가 여러개면 각각 이름 설정해야함 |
| DB                                                           |                                          |



select가 명령되면  server process 으로 전달되어 

<u>1. syntax checking이 이루어짐 2. Library code 검색</u>:soft passing 이후로는 hard passing

3.scott 이 emp; 권한이 있는지? 

meta 정보 (data dictionary)를 블락 단위로 불러옴

메타정보만 따로 캐쉬 : symentic checking

4 . 

sql - 선언적, 결과중심언어

프로그램언어 - 절차적 언어(과정 기술)

optimizer (navigation 같은)





ERD

p67



select 검색

1 table에서 column 기준으로 검색 = projection 검색

특정 row만 검색 = selection 검색

2개 이상의 테이블에서 같은 칼럼(속성)을 가진 칼럼에 속한 행을 검색할때 : Join

sql문은 명령어 축약 불가,반드시 한 문장은 세미콜론으로 종료

sqlplus 툴 명령어 = 세미콜론 없이 사용 가능, 축약 명령어 가능



char 타입의 경우 사이즈 저장안하면 1 ~2000byte

varchar2(1)~4000byte

number타입-binary형식으로 정수,실수

date날짜를 7byte를사용해 수치값으로 저장(__세기,__년도,__월,__일)

select sysdate from daul; 시스템 현재 시간 리턴 함수

varchar 'A____________'

varchar 2 'A' 



meta정보가 저장된 oracle data dictionary view는

user_tables - 특정 user소유의 테이블 목록 확인

all_table - 특정 user 소유+권한을받은 테이블 목록 확인

dba_table DB의 모든 테이블 목록 확인(DBA권한으로만 확인 가능)

---

desc user_tables

select table_name from user_tables; 

desc tab

select tname from tab;



select table_name from all_tables;

select table_name from dba_tables; --오류발생



conn/ as sysdba -- 보안프로그램이 있을 때 sqlplus sys/oracle as sysdba

select table_name from dba_tables;



conn scott/oracle

---



**** sql문장의 키워드와 테이블명 컬럼명 등은 대소문자 구별 X

컬럼값은 대소문자 구별함



cf) host cls 정리







