#include <bits/stdc++.h>

using namespace std;

int arr[20][20] = {
    //     {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5},
    //     {2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2},
    //     {3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2}};
    {1, 2, 3, 4, 5},
    {2, 1, 2, 3, 2, 4, 2, 5},
    {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}};
int p[3];
int divider[3] = {5, 8, 10};

void print_fnc(int n)
{
    cout << n << " ";
}
vector<int> solution(vector<int> answers)
{
    int i, j = 0;
    vector<int> answer;
    vector<int>::iterator iter = answers.begin();

    for (i = 0; i < 3; i++)
    {
        for (j = 0; arr[i][j] != '\0'; j++)
        {

            if (*iter == arr[i][j % divider[i]])
            {
                // cout << *iter << endl;
                cout << "i : " << i << " j : " << j << endl;

                p[i]++;
            }
            iter++;
            if (iter == answers.end())
            {
                iter = answers.begin();
            }
        }
        iter = answers.begin();
    }

    int maxscore = 0;
    int cnt = 0;
    maxscore = max(max(p[0], p[1]), p[2]);
    for (int i = 0; p[i] != '\0'; i++)
    {
        if (maxscore == p[i])
        {

            answer.push_back(i + 1);
        }
    }
    for_each(answer.begin(), answer.end(), print_fnc);

    return answer;
}

int main()
{

    vector<int> a(5);
    a[0] = 1;
    a[1] = 2;
    a[2] = 2;
    a[3] = 2;
    a[4] = 2;
    // a.push_back(4);
    // a.push_back(5);

    solution(a);
}