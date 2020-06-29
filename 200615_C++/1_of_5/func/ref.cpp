#include <iostream>

using namespace std;

// call by reference
void swap(int &, int &);

int main()
{

    int x, y;

    cout << "두 수를 입력하세요" << endl;

    cin >> x >> y;

    //함수 호출
    swap(x, y);

    cout << "main : x = " << x << " y = " << y << endl;
 
    return 0;
}

// 함수 정의

void swap(int &x, int &y)
{

    int tmp;

    tmp = x;
    x = y;
    y = tmp;
    // swap함수가 소환되어 먼저 출력된다.
    cout << "swap : x = " << x << " y = " << y << endl;
}

// 입력
// 4 6
// 출력
// swap : x = 6 y = 4 
// main : x = 6 y = 4
