#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n = 7;
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    int num = 0;
    int left = 0;
    int right = 0;
    int result = 21360000;
    int size = 0;

    for (int i = 0; i < v.size(); i++)
    {
        num += v[right];
        right++;
        size++;
        if (num == n)
        {
            if (result > size)
            {
                result = size;
            }
        }
        else if (num > 7)
        {
            num -= v[left];
            left++;
            size--;
        }
    }
    cout << result << endl;
    return 0;
}