#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices)
{

    vector<int> answer(prices.size());

    stack<int> s;

    int size = prices.size();
    for (int i = 0; i < size; i++)
    {
        while (!s.empty() && prices[s.top()] > prices[i])
        {
            answer[s.top()] = i - s.top();
            s.pop();
        }
        s.push(i);
    }

    while (!s.empty())
    {
        answer[s.top()] = size - s.top() - 1;
        s.pop();
    }
    
    for (int i = 0; i < 10; i++)
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