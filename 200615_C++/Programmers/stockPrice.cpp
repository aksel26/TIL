#include <string>
#include <vector>
#include <iostream>

using namespace std;
int arr[100001];
vector<int> solution(vector<int> prices)
{
    int temp;
    int idx = 0;
    int minus = 1;
    while (idx != prices.size() - 1)
    {
        temp = prices.at(idx);
        if (temp <= prices.at(idx + 1))
        {
            arr[idx] = prices.size() - minus;
        }
        else if (temp > prices.at(idx + 1))
        {
            arr[idx] = 1;
        }

        idx++;
        minus++;
    }

    vector<int> answer;
    for (int i = 0; i < prices.size(); i++)
    {
        answer.push_back(arr[i]);
    }

    for (int i = 0; i < prices.size(); i++)
    {
        cout<<answer[i]<<' ';
    }
    

    return answer;
}

int main()
{
    vector<int> pr;
    int num;
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        pr.push_back(num);
    }

    solution(pr);

    return 0;
}