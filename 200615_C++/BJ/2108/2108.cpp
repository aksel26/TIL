#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int num[50000];
int ch[4000];

bool comp(const pair<int, int> &p1, const pair<int, int> &p2)
{

    if (p1.second == p2.second)
    {                               //빈도수가 같으면
        return p1.first < p2.first; //숫자(key)작은게 앞으로
    }
    return p1.second > p2.second; //다르면 빈도수가 큰게 앞으로
}

int main(int argc, char const *argv[])
{

    // 산술평균 : N개의 수들의 합을 N으로 나눈 값
    // 중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
    // 최빈값 : N개의 수들 중 가장 많이 나타나는 값
    // 범위 : N개의 수들 중 최댓값과 최솟값의 차이
    int n; 
    double sum = 0;
    vector<int> v;
    cin >> n;
    int key;
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        v.push_back(key);

        sum += key;
    }
    // 산술
    double temp = sum / n;
    int sansul = floor(temp + 0.5);
    cout << sansul << endl;

    // 중앙
    sort(v.begin(), v.end());

    int mid = (n - 1) / 2;
    int joonang = v[mid];
    cout  << joonang << endl;

    // 최빈

    vector<pair<int, int> > vt;

    for (int i = 0; i < v.size(); i++)
    {
        if (vt.empty())
        {
            vt.push_back(make_pair(v[i], 1));
            continue;
        }

        if (vt.back().first == v[i])
        {
            pair<int, int> tmp = vt.back();
            tmp.second++;
            vt.pop_back();
            vt.push_back(tmp);
        }
        else
        {
            vt.push_back(pair<int, int>(v[i], 1));
        }
    }

    sort(vt.begin(), vt.end(), comp);
    if (vt[0].second == vt[1].second)
    {
        cout << vt[1].first << endl;
    }
    else
    {
        cout << vt[0].first << endl;
    }

    // 범위

    int diff = v.back() - v.front();
    cout<< diff << endl;

    return 0;
}
