#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int n, sum = 0, cnt = 0;
void sqrtNum(double n)
{
    if (n == sum)
        return;

    // 소숫점 2에서 반올림
    double roundNum = round(n * 10) / 10;

    // 소숫점
    int sosu = (int)(roundNum * 10) % 10;

    // 지수부분
    int jisu = (roundNum * 10) / 10;

    // 반올림안 안될때,
    if (sosu < 5)
    {
        sum += jisu * jisu;
        cnt++;

        sqrtNum(sqrt(jisu));
    }
    else if (sosu >= 5)
    {

        roundNum = round(roundNum);
        sqrtNum(sqrt(roundNum));
    }
}

int main(int argc, char const *argv[])
{

    cin >> n;
    double temp = sqrt(n);
    // 제곱근 소숫점
    sqrtNum(temp);

    cout << cnt << endl;
}
