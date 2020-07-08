#include <iostream>

using namespace std;
int main()
{

    int tcase, size, total, avg;
    double cnt, result;
    //test케이스
    cin >> tcase;

    for (int i = 0; i < tcase; i++)
    {
        cin >> size;
        int arr[size];

        //평균 구하기
        for (int i = 0; i < size; i++)
        {

            cin >> arr[i];
            total += arr[i];
        }
        avg = total / size;


        // 평균 미달인 점수의 갯수
        for (int i = 0; i < size; i++)
        {
            if (avg < arr[i])
            {
                cnt++;
            }
        }

        // 평균 미달 비율
        result = cnt / size * 100;

        // 소숫점 표현
        cout << fixed;
        cout.precision(3);
        cout << result << "%" << endl;
        total = 0, cnt = 0;
    }

    return 0;
}


// 입력
// 5 (tcase)
// 5 50 50 70 80 100
// 7 100 95 90 80 70 60 50
// 3 70 90 80
// 3 70 90 81
// 9 100 99 98 97 96 95 94 93 91

// 출력
// 40.000%
// 57.143%
// 33.333%
// 66.667%
// 55.556%
