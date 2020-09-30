
#include <iostream>

using namespace std;
int main()
{
    int n, a, max = -2147000000, min = 2147000000;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a > max)
            max = a;
        if (a < min)
            min = a;
    }
    cout << max - min << endl;
    return 0;
}

// 입력
// 10
// 13 15 34 23 45 65 33 11 25 42

// 출력
// 54