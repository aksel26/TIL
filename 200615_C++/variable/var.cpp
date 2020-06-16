#include <iostream>

using namespace std;

//전역변수
int cnt = 0;

int Func(void);

int main()
{

    Func();

    cout << "main : cout = " << cnt << endl;

    return 0;
}

int Func(void)
{

    int cnt = 10;
    cout << "전역 : number = " << cnt << endl;
    // cout << "Func : number = " << number << endl;
    cout << "Func : cnt = " << cnt << endl;

    // 지역변수와 전역변수와 이름이 같다면 지역변수로 처리됨
    return 0;
}