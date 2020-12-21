#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n, c;

    scanf("%d %d", &n, &c);
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int input;
        scanf("%d", &input);
        a.push_back(input);
    }

    sort(a.begin(), a.end());

    int left = a.front();
    int right = a.back();

    int answer_num = -1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        int before_set_num = 0;
        int set_num = 1;

        for (int i = 1; i < n; i++)
        {
            if (a.at(i) - a.at(before_set_num) >= mid)
            {
                before_set_num = i;
                set_num++;
            }
        }

        if (set_num >= c)
            left = mid + 1;
        else
            right = mid - 1;

        if (answer_num < mid && set_num >= c)
        {
            answer_num = mid;
        }
    }

    printf("%d\n", answer_num);

    return 0;
}