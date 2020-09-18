#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    long n;
    cin >> n;

    long m = n;
    int digit = 0;

    // 자릿수 구하기
    while (m)
    {
        m /= 10;
        digit++;
    }


    // 자릿수 별 최대 합을 빼고 난 후 부터 시작
    long begin = n - digit * 9;

    char s[10];
    long sum = 0;
    bool find = false;
    for (long i = begin; i <= n; i++)
    {
        // s배열에 자릿수별로 짤라서 들어감
        // begin= 189라면, 
        // s[0] = 1, s[1] = 8, s[2] = 9
        sprintf(s, "%ld", i);
        sum = i;
        for (int j = 0; j < strlen(s); j++)
        {
            cout<<s[j]<<endl;
            sum += s[j] - '0';
        }
        if (sum == n)
        {
            find = true;
            cout << i << '\n';
            break;
        }
    }
    if (find == false)
        cout << "0\n";

    return 0;
}
