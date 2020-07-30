# Selection Sort

## 예시

```c
#include <stdio.h>

int main(void)
{
    int i, j, min, index, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
  
  
    for (int i = 0; i < 10; i++)
    {
      // 비교 변수
        min = 9999;
      
        for (int j = i; j < 10; j++)
        {
         //	최솟값보다 작은게 있다면 해당하는 최솟값을 할당하고, 해당 인덱스도 할당한다.
            if (min > array[j])
            {
                min = array[j];
                index = j;
            }
        }
      
      //Swap
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", array[i]);
    }

    return 0;
}
```

</br> 

## 시간복잡도

- 10,9,8,7, .... ,1 이 있다면

- 10 번 비교 반복 수행, 
  9번 비교 반복 수행, ....

- 10 + 9 + 8 + ... + 1 = 55로 총 55번 수행하게 된다.

- 이를 공식화하하면 `n * (n + 1) / 2` (등차수열의 합) 이고,

- **O(`n^2`)** 의 시간복잡도가 도출된다,

  <u>n^2의 연산을 되도록이면 피하자..*</u>

