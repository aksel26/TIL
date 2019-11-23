## Review 

### 벡터의 다양한 처리

```R
> print(t[7])
[1] NA
> u<-t(c[2,3,6])
Error in c[2, 3, 6] : object of type 'builtin' is not subsettable
> u<-t[c(2,3,6)]
> print(u)
[1] "Mon" "Wed" "Sat"
> v<-t[c(TRUE,FALSE,TRUE,FALSE,FALSE,TRUE)]
> print(v)
[1] "Sum" "Wed" "Sat"
> v<t[c(-2,-5)]
[1] FALSE FALSE  TRUE FALSE
Warning message:
In v < t[c(-2, -5)] :
  longer object length is not a multiple of shorter object length
> v<-t[c(-2,-5)]

> print(v)
[1] "Sum"   "Wed"   "Thurs" "Sat"  
> y<-t[c(0,0,0,0,0,1)]
> print(y)
[1] "Sum"
> y<-t[c(0,0,1,0,0,1)]
> print(y)
[1] "Sum" "Sum"
```

- 길이 가 다를때

  ```R
  > v1<-c(5,7,5,1,20)
  > v2<-c(3,4,6) 
  > v3<-c(1,2,3,4,5,6)
  > v4<-c(1,2,3)
  > print(v1+v2)
  [1]  8 11 11  4 24
  Warning message:
  In v1 + v2 :
    longer object length is not a multiple of shorter object length
  > print(v3+v4)
  [1] 2 4 6 5 7 9
  ```

- 배열의 일부 값만 표시

  ```R
  > nums <- c(3/2,3%%2, 5%%3, 2^10, 2**10)
  
  > print(nums)
  [1]    1.5    1.0    2.0 1024.0   1024
  
  > print((0%in%nums))
  [1] FALSE
  
  > print((1024%in%nums))
  [1] TRUE
  
  > print(nums[nums>10])
  [1] 1024   20
  
  > print(nums[nums>10])
  [1] 1024 1024
  
  > print(nums[nums%%2==0])
  [1]    2 1024 1024
  ```

### 집합 연산함수 (교집합, 합집합, 차집합, 부분집합)

- identical( 객체1, 객체2) 두객체의 데이터 갯수, 순서도 일치 하는지 FALSE,TRUE
- union( 객체1, 객체2) **중복을 뺀** 모든 값
- intersect(객체1, 객체2) 교집합
- setdiff(객체1, 객체2) 객체 1와 2를 비교해 **객체 1에만** 있는 값을 반환
- setequal(객체1, 객체2) **순서와 값이 일치**한 것을 찾는다

```R
> vec <- c(1,2,3,4,5)
> vec2 <- c(10,9,8,4,5)
> vec3 <- c(1,2,3,4,5)

> print(identicla(vec1,vec3))
Error in identicla(vec1, vec3) : could not find function "identicla"

> print(identical      (vec,vec3))
[1] TRUE

> print(identical(vec,vec3))
[1] TRUE

> print(identical(vec2,vec3))
[1] FALSE

> vec4<-c(5,3,4,1,2)

> print(setequal(vec,vec4))
[1] TRUE

> print(setequal(vec,vec3))
[1] TRUE

> print(union(vec,vec2))
[1]  1  2  3  4  5 10  9  8

> print(setdiff(vec,vec2))
[1] 1 2 3

> print(setdiff(vec,vec3))
numeric(0)

> print(intersect(vec3,vec4))
[1] 1 2 3 4 5
```

### Matrix (여러개의 벡터 2차원)

1. 동일한 데이터 유형만 저장
2. `rbind()`로 행 추가
3. `cbind()`로 컬럼 추가
4. `colnames()` 컬럼이름 지정, 조회
5. `rownames()` 행이름 지정, 조회

```R
matrix(
data,
nrow=1,
ncol=1, #nrow와 ncol은 default가 1
byrow=FALSE, #default가 FALSE임으로 열기준으로 데이터 저장,TRUE는 행기준
dimnames=NULL #행렬의 각 차원에 부여할 이름
)
#반환값을 행렬!
```

- 실습

  ```R
  > M <- matrix(c(3:14)) # 열 기준 2차원 데이터 구조
  > print(M)
        [,1]
   [1,]    3
   [2,]    4
   [3,]    5
   [4,]    6
   [5,]    7
   [6,]    8
   [7,]    9
   [8,]   10
   [9,]   11
  [10,]   12
  [11,]   13
  [12,]   14
  > str(M)
   int [1:12, 1] 3 4 5 6 7 8 9 10 11 12 ...
  > 
  > M1 <- matrix(c(3:14), nrow=3) # 열 기준 2차원 데이터 구조
  > print(M1)
       [,1] [,2] [,3] [,4]
  [1,]    3    6    9   12
  [2,]    4    7   10   13
  [3,]    5    8   11   14
  > str(M1)
   int [1:3, 1:4] 3 4 5 6 7 8 9 10 11 12 ...
  > 
  > M2 <- matrix(c(3:14), nrow = 4, byrow = TRUE) #행기준 2차원 데이터 구조
  > print(M2)
       [,1] [,2] [,3]
  [1,]    3    4    5
  [2,]    6    7    8
  [3,]    9   10   11
  [4,]   12   13   14
  > str(M2)
   int [1:4, 1:3] 3 6 9 12 4 7 10 13 5 8 ...
  > 
  > x1 <- c(5, 40, 50:52)
  > x2 <-c(30, 5, 6:8)
  > M3 <- rbind(x1, x2)
  > print(M3)
     [,1] [,2] [,3] [,4] [,5]
  x1    5   40   50   51   52
  x2   30    5    6    7    8
  > str(M3)
   num [1:2, 1:5] 5 30 40 5 50 6 51 7 52 8
   - attr(*, "dimnames")=List of 2
    ..$ : chr [1:2] "x1" "x2"
    ..$ : NULL
  > 
  > M4 <- cbind(x1, x2)
  > print(M4)
       x1 x2
  [1,]  5 30
  [2,] 40  5
  [3,] 50  6
  [4,] 51  7
  [5,] 52  8
  > str(M4)
   num [1:5, 1:2] 5 40 50 51 52 30 5 6 7 8
   - attr(*, "dimnames")=List of 2
    ..$ : NULL
    ..$ : chr [1:2] "x1" "x2"
  > 
  > M <- matrix(10:19, 2)  
  > print(M)
       [,1] [,2] [,3] [,4] [,5]
  [1,]   10   12   14   16   18
  [2,]   11   13   15   17   19
  > str(M)
   int [1:2, 1:5] 10 11 12 13 14 15 16 17 18 19
  #배열 개수가 맞지 않는 경우 적은 쪽이 반복되면서 채워진다.
  > M<-matrix(10:20,2)
  Warning message:
  In matrix(10:20, 2) :
    data length [11] is not a sub-multiple or multiple of the number of rows [2]
  > print(M)
       [,1] [,2] [,3] [,4] [,5] [,6]
  [1,]   10   12   14   16   18   20
  [2,]   11   13   15   17   19   10	
  ```

  