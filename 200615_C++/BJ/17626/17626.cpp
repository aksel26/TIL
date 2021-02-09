#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, sum = 0, cnt = 0;
    ;
    cin >> n;

    while (n != sum)
    {

        // 제곱근 소숫점
        double temp = sqrt(n);

        // 소숫점 2에서 반올림
        double roundNum = round(temp * 10) / 10;
        cout << roundNum << endl;
        break;

        // 소숫점
        int sosu = ((int)roundNum * 10) % 10;

        // 지수부분
        int jisu = (roundNum * 10) / 10;

        // 반올림안 안될때,
        if (sosu < 5)
        {

            sum += jisu * jisu;
            cnt++;
        }
        else if (sosu >= 5)
        {
            roundNum = round(roundNum);
        }
    }

    cout << cnt << endl;
    return 0;
}
