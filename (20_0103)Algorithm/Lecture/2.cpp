#include <iostream>

using namespace std;

int main()
{

    int a, b, sum = 0;

    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {

        sum += i;
        if (i != b)
        {
            cout << i << "+";
        }
        else
        {
            cout << i << "=";
        }
    }
    cout << sum << endl;

    return 0;
}

// 입력
// 3 7
// 출력
// 3+4+5+6+7=25