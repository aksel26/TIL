#include <iostream>

using namespace std;

int cal(int num)
{

    int cnt = 0;
    int pos[3] = {0};

    if (num < 100)
    {
        cnt = num;
    }
    else
    {
        cnt = 99;
        for (int i = 100; i <= num; i++)
        {
            if (i == 1000)
            {
                return cnt;
            }
            pos[0] = i / 100;
            pos[1] = (i - pos[0] * 100) / 10;
            pos[2] = i % 10;

            if ((pos[0] - pos[1]) == (pos[1] - pos[2]))
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    int num, result = 0;
    cin >> num;

    if (num <= 0 || num > 1000)
    {
        return -1;
    }

    result = cal(num);

    cout << result << endl;
    return 0;
}
