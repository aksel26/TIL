#include <iostream>

using namespace std;

int INF = 999999;

int graph[3][3] = {(0, 7, 5), {7, 0, INF}, {5, INF, 0}};

int main()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << graph[i][j] << ' ';
        }

        cout << endl;
    }

    return 0;
}