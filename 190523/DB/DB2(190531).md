## 	DB Day2

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





h2_schema 불러오는 방법

sqlplus sys dba

@C:\hr2_schema.sql

conn hr/oracle



### 그룹함수

그룹핑된 행 집합, 테이블의 전체 행 집합의 칼럼이 함ㅎ수의 인수로 전달되고 그 결과는 반드시 1개 리턴

* sum(number 타입|expression)

* avg(number타입|expression)

* min(number,char,date 칼럼타입 |expression)

* max(number,char,date 칼럼타입 |expression)

- count([distinct]number, char, date 컬럼타입|expression) 
  - null이 아닌 값들의 갯수

* stddev() :표준편차

* variance() 분산

전체 사원의 급여 합계ㅣ, 평균, 최대 최소  결과 출ㄹ력

```sql
select sum(sal),avg(sal),max(sal),min(sal) from emp;
```

문> 전체 사원들중에 가장 빠른 입사 날짜와 가장 최근의 입사 날짜는?

```sql
select min(hiredate),max(hiredate) from emp;
```

문> 전체 사원들중에 이름순서가 가장 빠른 사원의 이름과 이름순서가 가장 늦은 사원의 이름은?

```sql
 select min(ename), max(ename) from emp;
```

문> 사원들이 소속된 부서의 종류의 수 출력?

```sql
select count(distinct(deptno)) from emp;
```

문> 커미션을 받는 사원수는?

```sql
select count(comm) from emp;
```

 

모든 그룹함수는 null을 함수 연산에 포함하지 않음

전체 사원들의 커피션 평균은 ? 

```sql
select avg(nvl(comm,0)) from emp; --avg(comm) X
```

부서번호와 부서의 평균급여를 합께 출ㄹ력

```sql
select avg(sal),deptno from emp; --그룹함수가 되어있지 않은 함수에 대해 grouping을 해줘야함
group by 

select avg(sal),deptno from emp group by deptno; 
```

그룹함수를 적용한 칼럼과 그룹함수를 적용하지 않은 칼럼이 select절에 함께 선언될 경우 반드시 그룹함수를 적용하지 않은 칼럼은 gruop by절에 선언





```sql
select avg(sal) from emp group by deptno; 
-- group by절에 선언된 칼럼이 select절에 반드시 선언되어야 하는지? X
```



group by절엔 <u>칼럼</u>만 선언할수있다



문 부서와 직무별 급여 평균 출력

```sql
select deptno,job, avg(sal)
from emp
group by deptno, job;
```

문>각 부서별로 인원수, 급여의 평균, 최저 급여, 최고 급여, 급여의 합을 
구하여  급여의 합이 많은 순으로 출력하여라.

```sql
select count(deptno),avg(sal),min(sal),max(sal),sum(sal) from emp group by deptno order by sum(sal) desc;
```

문> EMP 테이블에서 부서 인원이 4명보다 많은 부서의 부서번호, 인원수, 
급여의 합을 출력하여라

```sql
select deptno,count(*),sum(sal) from emp group by deptno; having count(*)>4;
```

문 > EMP 테이블에서 급여가 최대 2900 이상인 부서에 대해서 부서번호, 평균 급여, 급여의 합을 구하여 출력하여라.

```sql
select deptno, avg(sal),sum(sal) from emp group by deptno; having max(sal)>=2900;
```

문> EMP 테이블에서 업무별 급여의 평균이 3000 이상인 업무에 대해서 업무명, 평균 급여, 급여의 합을 구하여 출력하여라.

```sql
select deptno, avg(sal),sum(sal) from emp group by deptno; having avg(sal)>=3000;               
```

​	



검색방법

projection

join

selection



employees.emp-사원정보

deplartments.dept-부서정보

ex) 사원이름, 부서번호,부서이름



oracle join syntax where 절에 조인조건 선언

sql1999 표준 syntax from 절에 조인조건 선언



equi join(inner join) 같은값을 가져올때

non equi join

self-join 자기 참조가 가능한 테이블에서만 수행가능

조인조건을 잘못 주거나 누락하면 cartesian product( Cross join)

outer join (조인 칼럼 없이 null인 경우 결과집합에 포함시키기 위한 조인)



connn hr/oracle

ex) 사원이름, 부서번호,부서이름

select last_name,department_id, department_name from employees, departments; --에러발생

별칭 부여

select last_name,a.department_id, b.department_name from employees a , departments b;

20명의 사원 데이터 (20*8) rows, cartesian  product //조인조건 누락됨

```
select a.last_name, a.department_id, b.department_name
from  employees a, departments b
where a.department_id = b.department_id; ---? 20명의 사원 데이터?error

--natual join 은 oracle 서버가 조인할 테이블에서 동일한 이름의 컬럼으로 자동 equi 방식 조인을 수행합니다.
--natual join 은 조인할 테이블에서 동일한 이름의 컬럼 앞에 소유자 테이블명 또는 alias를 선언하지 않습니다.
--natual join 은 동일한 속성이지만, 설계할때 부모와 자식 테이블에서 이름을 다르게 정의하면 조인 수행 안됩니다
select a.last_name,  department_id, b.department_name
from  employees a natural join  departments b;  -->? 19rows?


select a.last_name, a.department_id, b.department_name
from  employees a, departments b
where a.department_id = b.department_id
and a.manager_id = b.manager_id;


select a.last_name,  department_id, b.department_name
from  employees a  join  departments b using (department_id); 



conn scott/oracle
create table  copy_emp
as select  empno , ename, job, hiredate, sal, mgr, deptno deptid
from emp;

desc  copy_emp
select * from copy_emp;

문> copy_emp와 dept테이블에서 사번, 이름, 부서번호, 부서명 출력
select a.empno, a.ename, b.deptno, b.dname
from copy_emp a  join  dept b  on a.deptid = b.deptno;
```



--!! n개의 테이블을 조인할 때 최소 조인 조건은 n-1개
--사원이름, 소속부서이름, 부서가 위치한 도시 조회

```sql
conn hr2/oracle
desc employees
desc departments
desc locations
```

```sql
select a.last_name,b.department_name,c.city from employees a,departments b, locations c 
where a.department_id = b.department_id and b.location_id=c.location_id;
```

```sql
select a.last_name, b.department_name, c.city
from employees a join  departments b on a.department_id = b.department_id
join locations c  on   b.location_id = c.location_id;
```



--문)부서번호가 없는 사원을 포함해서 사원들의 부서이름을 함계 출력

```sql
select a.empno,a.ename,a.deptno,b.dname
from emp a,dept b
where a.deptno=b.deptno;  --8000번 hong사원 누락됨

select a.empno,a.ename,a.deptno,b.dname
from emp a,dept b
where a.deptno=b.deptno(+);
```

--문>  부서정보를 기준으로 부서의 소속 사원을 출력하고 소속사원이 없는 부서도 출력

```sql

select b.deptno,b.dname,a.empno,a.ename from emp a, dept b where a.deptno=b.deptno order by b.deptno;
--40번 부서번호 누락

select b.deptno,b.dname,a.empno,a.ename from emp a, dept b where a.deptno(+)=b.deptno order by b.deptno;
--40번 부서번호 포함

select b.deptno,b.dname,a.empno,a.ename from emp a, dept b where a.deptno(+)=b.deptno(+) order by b.deptno; --Error  outer 연산자는 양쪽에 쓰지 못함
```



```sql
--full outer join
select b.deptno,b.dname,a.empno,a.ename from emp a full outer join dept b on a.deptno=b.deptno where a.deptno=b.deptno order by b.deptno;	
```

