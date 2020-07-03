#include <iostream>

using namespace std;

int main()
{

    int a, b;

    //테스트 케이스 횟수가 주어지지 않음. 종료 방법도 주어지지 않음.
    // cin>>a>>b를 조건에 대입하면
    // 입력 여부에 따라 T/F가 판별됨.
    while (cin >> a >> b)
    {

        cout << a + b << "\n";
    }

    return 0;
}