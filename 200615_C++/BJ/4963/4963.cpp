#include <iostream>
#include <cstring>

using namespace std;
int w, h;
int island;
int arr[50][50];
int visited[50][50];
int dw[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dh[8] = {0, 1, 0, -1, -1, 1, -1, 1};

void dfs(int h, int w)
{
    arr[h][w] = true;

    for (int i = 0; i < 8; i++)
    {

        int nh = h + dh[i];
        int nw = w + dw[i];
        if (0 <= nw && 0 <= nh && nw < 50 && nh < 50)
        {
            if (!visited[nh][nw] && arr[nh][nw])
            {
                visited[nh][nw] = true;
                dfs(nh, nw);
            }
        }
    }
}

int main()
{

    while (1)
    {
        cin >> w >> h;
        if (!w && !h)
            break;

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (arr[i][j] && !visited[i][j])
                {
                    island++;
                    dfs(i, j);
                }
            }
        }

        cout << island << endl;
        memset(arr, false, sizeof(arr));
        memset(visited, false, sizeof(visited));
        island = 0;
    }

    return 0;
}