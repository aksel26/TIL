#include <iostream>

using namespace std;
char c[51][51];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int main(int argc, char const *argv[])
{
    int n, m, cnt = 0, total = 0;

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> c[i][j];
        }
    }

    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (c[i + dx[k]][j + dy[k]] <= 0)
                    continue;
                else
                {
                    if (c[i][j] == c[i + dx[k]][j + dy[k]])
                    {
                        cnt++;
                        if (cnt == 4)
                        {
                            total++;
                        }
                    }
                    else
                        continue;
                }
            }
        }
    }

    cout << total << endl;
    return 0;
}
