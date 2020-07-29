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

   

## 3. [Addition](#3-1.-Addition), Deletion, Copy

### 3-1. Addition

- `push()`
  - 뒤에서 부터 추가하기 
- `pop()`
  - 뒤 값들을 제거하기

</br> 

- 앞에서부터 넣기는 ? ====> **`unshift()`**
- 앞에서부터 빼기는 ? ====> **`shift()`**

</br> 

- `unshift()`, ` shift()`는 `pop`과 `push`보다 **너무너무 느리다.** (길면 길수록..)
  - 왜 ????
    - pop과 push는 기존의 데이터를 **이동할 필요가 없기 때문**이다.

- 



