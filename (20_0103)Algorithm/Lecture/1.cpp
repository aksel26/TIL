#include <iostream>

using namespace std;

int main()
{

    int n, m, sum = 0, temp = 0;

    cin >> n >> m;

    for (int i = 1; i <= n / m; i++)
    {
        temp = m * i;
        sum += temp;
    }
    cout << sum << endl;

    return 0;
}

// 입력 
// 15 3
// 출력
// 45

