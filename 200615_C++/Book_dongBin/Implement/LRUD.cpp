#include <iostream>
#include <string>

using namespace std;

// 사이즈 
int n;
// 방향
string plans;
int x = 1, y = 1;

// x,y 방향
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
char moveTypes[4] = {'L', 'R', 'U', 'D'};

int main()
{
    //맵 크기 입력
    cin >> n;

    // 버퍼 초기화
    cin.ignore(); 

    // string 타입 입력
    getline(cin, plans);

    for (int i = 0; i < plans.size(); i++)
    {
        char plan = plans[i];

        int nx = -1, ny = -1;
        
        for (int j = 0; j < 4; j++)
        {
            if (plan == moveTypes[j])
            {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }

        if (nx < 1 || ny < 1 || nx > n || ny > n)
            continue;
        // 이동 수행
        x = nx;
        y = ny;
    }

    cout << x << ' ' << y << endl;

    return 0;
}
