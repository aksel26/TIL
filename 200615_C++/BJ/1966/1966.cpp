#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int tcase, n, m, nums, cnt;

    cin >> tcase;

    for (int i = 0; i < tcase; i++)
    {
        cnt = 0;
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        cin >> n >> m;
        int tmp;
        for (int i = 0; i < n; i++)
        {
            cin >> nums;
            if (i == m)
                tmp = nums;
            // q.push({m, nums});

            pq.push(nums);
        }
        while (!pq.empty())
        {
            cnt++;
            if (tmp == pq.top())
            {
                if (!pq.empty())
                {
                    pq.pop();
                    continue;
                }
            }
            pq.pop();
        }

        cout << cnt << endl;
    }

    return 0;
}
