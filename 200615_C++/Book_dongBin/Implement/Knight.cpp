#include <iostream>
using namespace std;

string input;

// 나이트가 이동할 수 있는 8가지 방향 정의
int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};


int main()
{
    cin >> input;
    int row = input[1] - '0';
    int col = input[0] - 'a' + 1;

    int result = 0;

    for (int i = 0; i < 8; i++)
    {
        int nextRow = row + dx[i];
        int nextCol = col + dy[i];
        // 해당 위치로 이동이 가능하다면 카운트 증가
        if (nextRow >= 1 && nextRow <= 8 && nextCol >= 1 && nextCol <= 8)
        {
            result += 1;
        }
    }

    cout << result << endl;

    return 0;
}