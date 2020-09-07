#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    // 최솟값 비교 변수
    int min = 100;

    // 최댓값 비교 변수
    int max = -100;

    // 결과값
    int result = 0;

    // 2차 배열
    int arr[n][m];

    // 각 행마다의 최솟값을 담을 배열
    int temp[n];

    // 행, 열 수 입력
    cin >> n >> m;

    // 각 행, 열 값 넣기
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            // 각 행마다의 최솟값을 구한다.
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }

            // 최솟값을 임시 배열에 넣는다.
            temp[i] = min;
        }

        // 다음 행에서의 비교를 위해 초기화
        min = 100;
    }

    // 임시배열 안에서의 최댓값 구하기
    for (int i = 0; i < n; i++)
    {
        if (temp[i] > max)
        {
            result = temp[i];
        }
    }

    // 결과 출력
    cout << result << endl;

    return 0;
}