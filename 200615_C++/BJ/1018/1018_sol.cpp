#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"};
string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"};
string board[50];
int wb_cnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != WB[i][j])
                cnt++;
        }
    }
    return cnt;
}
int bw_cnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != BW[i][j])
                cnt++;
        }
    }
    return cnt;
}

int main(int argc, char const *argv[])
{
    int n, m, min_val = 2123123;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    for (int i = 0; i + 8 <= n; i++)
    {
        for (int j = 0; j + 8 <= m; j++)
        {
            int tmp;
            tmp = min(wb_cnt(i, j), bw_cnt(i, j));
            if (min_val > tmp)
                min_val = tmp;
        }
    }

    cout << min_val << endl;

    return 0;
}
