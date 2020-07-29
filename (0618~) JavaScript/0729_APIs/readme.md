# 1. Array

## 1. 선언 방법 2가지

1. `const array = new Array();`
2. `const arr2 = [1,2];`

</br> 

## 2. 표현 방법 ( For문을 통한 )

1. 가장 일반적인 방법

   ```javascript
   for(let i = 0 ; i<fruits.length ; i ++){
       console.log(fruits[i]);
   }
   ```

   </br> 

2. **`for of`** 를 사용한 방법

   ```javascript
   for(let fruit of fruits){
       console.log(fruit);
   }
   ```

</br> 

3. **`forEach`** 를 사용한 방법

   ```javascript
   fruits.forEach(function(fruit, index){
       console.log(fruit, index);
   });
   
   // 익명함수는 Arrow 함수를 이용할 수 있다.
   fruits.forEach((fruit, index) => {
       console.log(fruit, index);
   });
   
   // 중괄호도 지울 수 있다.
   fruits.forEach((fruit) => console.log(fruit));
   ```

   </br> 

   </br> 

## 3. [Addition](#3-1-addition), [Deletion](#3-2-deletion), [Copy](#3-3-copy)

### 3-1. Addition

- `push()`
  - 뒤에서 부터 추가하기 
- `pop()`
  - 뒤 값들을 제거하기
  - **pop된 요소를 리턴한다.**

</br> 

- 앞에서부터 넣기는 ? ====> **`unshift()`**
- 앞에서부터 빼기는 ? ====> **`shift()`**

</br> 

- `unshift()`, ` shift()`는 `pop`과 `push`보다 **너무너무 느리다.** (길면 길수록..)
  - 왜 ????
    - pop과 push는 기존의 데이터를 **이동할 필요가 없기 때문**이다.

</br> 

### 3-2. Deletion

- `pop()`

- **`splice()`** 

  : 원하는 포지션에서 지우는 것

  - *사용 예1*

    ```javascript
    fruits.splice(1,1);
    console.log(fruits); 
    ```

    :  인덱스 1부터 1개만 삭제
       splice(1,2)  : 1부터 2개 삭제

    </br> 

  - *사용 예2*

    ```javascript
    fruits.splice(1,1, 'a','b');
    console.log(fruits);
    ```

    : 1부터 1개를 지우고 대신에 a와 b를 넣는다.

    </br> 

### 3-3. Copy

- **`concat()`** 

  : 두 배열을 이어 붙이는 것.

  ```javascript
  const fruits2 = ['add1', 'add2'];
  const newFruits = fruits.concat(fruits2);
  console.log(newFruits); 
  ```

  

</br> 

## 4. Searching

1. **`indexof()`** 

   인자에 해당하는 **인덱스의 값**을 리턴, 존재하지 않으면 **`-1`** 을 리턴

   </br> 

2. **`includes()`**  

   존재 여부를 판단 --> **T / F 리턴**

   </br> 

3. **`lastIndexOf()`** 

   : 배열 요소 중 중복된 값이 있을 때,
     `indxeOf`는 가장 <u>최초의 요소</u><u>의 인덱스</u>를 출력
     `lastIndexOf`는 가장 <u>나중의 요소의 인덱스</u>를 출력