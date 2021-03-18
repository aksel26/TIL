
#include <bits/stdc++.h>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string temp = to_string(n);
    // while (n != 0)
    // {
    //     answer += n % 10;
    //     n /= 10;
    // }

    for (int i = 0; i < temp.size(); i++)
    {
        answer += (int)temp[i] - '0';
    }

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << answer << endl;

    return answer;
}

int main(int argc, char const *argv[])
{
    int n = 987;
    solution(n);
    return 0;
}
