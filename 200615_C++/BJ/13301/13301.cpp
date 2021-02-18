
#include <iostream>

using namespace std;

long long targetN(int x)
{

    if (x == 1)
        return 1;
    else if (x == 0)
        return 0;
    else
        return targetN(x - 1) + targetN(x - 2);
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;

    long long result = 0;
    long long garo = 1;
    long long sero = 1;
    for (int i = 1; i <= n; i++)
    {
        long long temp = targetN(i);

        if (i == 1)
        {
            result = ((temp) + (temp)) * 2;
        }
        else if (i % 2 == 0)
        {
            sero += temp;
            result = ((temp) + (sero)) * 2;
        }
        else if (i % 2 != 0)
        {
            garo += temp;
            result = ((garo) + (temp)) * 2;
        }
    }

    cout << result << '\n';

    return 0;
}