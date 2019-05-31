## DB Day2

오라클11g DB를 깨끗하게 지우려면....

1. 제어판>관리도구>서비스 (services.msc)에러 Oralce~ 서비스 시작되어 있는 것 모두 중시시킴
2. 레지스트리에서 Oracle관련 정보 삭제
   - Window실행에서 regedit입력
   - HKEY_LOCAL_MACHINE > SOFTWARE > Oracle 디렉토리 삭제
   - HKEY_LOCAL_MACHINE > System > CurrentControlSet > services > Oracle 디렉토리들 삭제
   - HKEY_LOCAL_MACHINE > System > CurrentControlSet > services > eventlog > Application Oracle 디렉토리들 삭제
3. 탐색기 C:\Program Files 아래 Oracle 디렉토리 삭제
4. 윈도우 프로그램 메뉴 Oracle 메뉴 디렉토리 삭제
5. C:\app\사용자명폴더~~~~~~ 에 오라클 관련 파일들이 있습니다.
   C:\app 디렉토리 삭제합니다. 만약 xxx.dll파일 때문에 삭제가 안되면 reboot 해서 삭제합니다.

------



### 기타 단일행 함수( null처리,조건 처리)

Database

DBMS

계층형-망형-관계형-객체관계형 - 여러 호스트들을 클러스터 구성

Table - column(속성)+row(record)

Primary Key - not null + unique

Foreign key - 참조관계 parrent 테이블의 pk를 참조하는 child테이블의 외래키

null - !=0, 	cf) !=" "(x)

nvl(칼럼,null일때 리턴할 값)

wjdqh rjator                                                                                                      

SQL-선언적 언어, 결과 기술

DML = select , update, insert,elete

DDL= creat, drop, alter, truncate, r, ename(테이블또는 객체의 정보가 )

DCL=grant revoke

TCT commit rollback, savepointAlisas

select ^ |[distinct[] colum....|enpresso ioin commt []as ]alias                                                                                                 

칼럼 구조 확인=desc descibe

칼럼타입:

varCar2(size)(

sumber()_

t imepstam

timestamp with timezone
interval year to month
interval day to second
rowid



칼럼타입에 다른 연산

number  - 산술연산

cfhar//barchar2 ||결핪연산자

dat+=n,+=2123532



where절 연산자

in= dufj rkqtdmf gksksmdl fltmxmdp wjwkd=k ㅐㄱ

like- 문자열 배턴 비교 '_'만능문자ㅗ ㅗ

between and ~~e인 산자 and 상한, 하한 값

null을 확인할 때느느 null 이나 null for사용할 것

not and or ㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇㅇ중요

order by 컬럼

ordery by표현식

order bycolumn pisotion 

함수는 반드시 하나의 값을 리턴한다

단일행 함수 character number date conversion

ㅈ복수행 함수

분석함수

))



기타함수 

기타 단일행 함수 

nvl(columnn,nul일 경우 리턴할 값)

nvl2(columnm,expression1, expression 2)

coalesce(column,expression,expression2,,,) 

nvl주의점

컬럼과 expression이 동일한 타입이어야함) : 향수의 파라미터 갓에서 null이 아닌 값을 리턴하고 함수는 종료

nullif( expression1,expression2)  1과 2가 동일하면 null리턴 하고 다르면 expression1을 리턴함



문) 사원들중 커미션을 받지 않는 사원들은 -1로 출력 (이름,급여)

```sql
select ename,sal,nvl(comm,-1) "커미션 " from emp;
```



문2) 사원들중 커미션을 받는 사원은 급여+커미션을 출력하고, 커미션을 받지 않는 사원은 'No Commission'으로 출력합니다. (이름, 급여, 커미션, 비고)

```sql
select ename,sal,comm,nvl2(comm,to_char(sal+comm),'No commision') from emp;
```

```sql
select coalesce(1, null, null, null, null) from dual;   --1

select coalesce( null, null, 3, null, null) from dual;  --3

select coalesce( null, null, null, null, null, 'a') from dual;  --a

select nullif(100, '100')
from dual;  --error?


select nullif('A', 'A'), nullif('A', 'a')
from dual;
```

조건처리 함수 : decode함수(column, 표현식 1,리턴값1,표현식2,리턴값2...)

조건처리 표현식, 표준 sql3 : case [표현식]when[값|조건표현식] then 값 [else값 ] end

문>문> 사원들의 부서번호가 10번이면 월급을 5%인상
    부서번호가 20번이면 월급을 10%인상
    부서번호가 30번이면 월급을 5%인상 
    그 외의 부서는 월급 100인상합니다.
    현재의 월급과 인상된 월급을 출력합니다.

decode문으로 작성

```sql
select ename,deptno,sal, decode(deptno,10,sal*1.05,
                                      20,sal*1.1,
                                      30,sal*1.03,sal+100) "increase" from emp;
```

case문으로 작성

```sql
select ename,deptno,sal, case deptno when 10 then sal*1.05
                                      when 20 then sal*1.1
                                      when 30 then sal*1.03
                                      else sal+100 end "increase" from emp;
```



월급에 대한 세금 출력하시오
    월급이 1000미만이면 0,  
    2000미만이면 월급의 5%, 
    3000미만이면 월급의10%
    4000미만이면 월급의15%, 
    4000이상이면 월급의 20%

decode

```sql
select ename,deptno,sal, decode(trunc(sal/1000),0,0
                                                ,1,sal*0.05
                                                ,2,sal*0.1
                                                ,3,sal*0.15
                                                ,sal*0.2) "TAX" from emp;
        						       --decode equal형식으로 해야하기 때문에 나눠줌
```

case

```sql
 select ename,deptno,sal, case when sal<1000 then 0
                                      when sal<2000 then sal*0.05
                                      when sal<3000 then sal*0.1
                                      when sal<4000 then sal*0.15
                                      else sal*0.2 end "increase" from emp; 
```

