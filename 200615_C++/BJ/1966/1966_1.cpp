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
        queue<pair<int, int> > q;
        priority_queue<int> pq;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> nums;
            
            q.push(make_pair(i, nums));

            pq.push(nums);
        }
        while (!pq.empty())
        {
            int nowidx = q.front().first;
            int nowval = q.front().second;
            q.pop();
            if (nowval == pq.top())
            {
                pq.pop();
                cnt++;
                if (nowidx == m)
                {
                    cout << cnt << endl;
                    break;
                }
            }
            else
            {

                q.push(make_pair(nowidx, nowval));
            }
        }
    }

    return 0;
}
