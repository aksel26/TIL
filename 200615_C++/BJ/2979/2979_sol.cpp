#include <iostream>

using namespace std;
const int MAX = 101;
int fare[MAX];
int main()
{

    int answer = 0;
    int a, b, c;

    cin >> a >> b >> c;
    for (int i = 0; i < 3; i++)
    {
        int arrive, depart;
        cin >> arrive >> depart;
        for (int j = arrive; j < depart; j++)
        {
            fare[j]++;
        }
    }

    for (int i = 1; i < MAX; i++)
    {
        if (fare[i] == 1)
        {
            answer = answer + fare[i] * a;
        }
        if (fare[i] == 2)
        {
            answer = answer + fare[i] * b;
        }
        if (fare[i] == 3)
        {
            answer = answer + fare[i] * c;
        }
    }

    cout << answer << endl;

    return 0;
}