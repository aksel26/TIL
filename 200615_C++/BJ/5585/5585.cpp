#include <iostream>

using namespace std;

// 지불금액 (고정)
int total = 1000;
// 단위 금액
int money[7] = {500, 100, 50, 10, 5, 1};
int main()
{

    //지불 금액
    int input;
    cin >> input;

    //거스름돈
    int returnP = total - input;

    // 화폐 단위 갯수
    int cnt = 0;

    // 금액 단위 별 차감 결과를 담는 변수
    int tmp = 0;

    //결과
    int result = 0;

    for (int i = 0; i < 6; i++)
    {

        // 나눈 값이 필요 화폐 갯수가 된다.
        cnt = returnP / money[i];
        // 갯수 증가
        result += cnt;

        // 나누어 떨어지면 연산 종료
        if (returnP % money[i] == 0)
        {
            break;
        }

        // 단위 화폐 값이 더 크면 다음 단위 화폐로 넘어감
        if (returnP < money[i])
        {
            continue;
        }

        else
        {
            // 거스름돈의 갯수 만큼 곱한 값을 빼준다.
            tmp = returnP - money[i] * cnt;
        }

        returnP = tmp;
    }
    cout << result << endl;

    return 0;
}