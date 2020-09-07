# 상하좌우

#### 접근

1. 2차원 배열을 만들고 0으로 모두 초기화한다.

2. 그 후 입력된 방향에 맞춰 인덱스를 누적시킨다.

    === > <u>문제, 입력받고 종료 시점을 정의할 수 없었다.</u>

   </br> 

## 참고 코드

```c++
#include <iostream>
#include <string>

using namespace std;

// 사이즈 
int n;
// 방향
string plans;
int x = 1, y = 1;

// x,y 방향
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
char moveTypes[4] = {'L', 'R', 'U', 'D'};

int main()
{
    //맵 크기 입력
    cin >> n;

    // 버퍼 초기화
    cin.ignore(); 

    // string 타입 입력
    getline(cin, plans);

    for (int i = 0; i < plans.size(); i++)
    {
        char plan = plans[i];

        int nx = -1, ny = -1;
        
        for (int j = 0; j < 4; j++)
        {
            if (plan == moveTypes[j])
            {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }

        if (nx < 1 || ny < 1 || nx > n || ny > n)
            continue;
        // 이동 수행
        x = nx;
        y = ny;
    }

    cout << x << ' ' << y << endl;

    return 0;
}

```

</br> 

### 배운 것.

1. **`getline(cin,string);`** 

   첫 번째 인자로 istream 객체 (키보드로 입력받는 경우 cin객체를 쓰면 된다.)

   두 번째 인자로 string 변수의 이름

   세 번째 인자로 delimitChar가 들어가게 되는데 생략이 가능하며 default로 '\n'가 들어간다.

   즉, istream 객체에서 character를 delimitChar를 만날때까지 읽어 string 변수에 저장하는 의미이다.

   이를 잘 활용하면 delimitChar에 들어가는 인자를 ' '로 줘서 공백 기준으로 끊어 입력받는 code도 만들 수 있을 것이다.

   </br> 

2. **`cin.ignore();`** 

   입력 받는 부분 연속으로 cin을 이용하면 메모리에 누적되어 있기 때문에, ignore로 버퍼 초기화를 해주어야 한다.

   안해주면 연산이 연속된다.

   </br> 

3. **방향 문제 ( 일단 외워두어야 할 것 같다. )**

   1. 먼저 dx, dy, moveType처럼 배열을 만들어 놓기.
   2. `nx = x + dx[i];`  방향좌표 누적 부분
   3. `        if (nx < 1 || ny < 1 || nx > n || ny > n)` : 범위 초과 부분

   ```c++
   for (int j = 0; j < 4; j++)
           {
               if (plan == moveTypes[j])
               {
                   nx = x + dx[j];
                   ny = y + dy[j];
               }
           }
   
           if (nx < 1 || ny < 1 || nx > n || ny > n)
               continue;
           // 이동 수행
           x = nx;
           y = ny;
   ```

   

   