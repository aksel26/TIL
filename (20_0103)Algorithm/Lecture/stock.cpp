// #include <string>
// #include <vector>

// using namespace std;

// vector<int> solution(vector<int> prices)
// {
//     vector<int> answer(prices.size());

//     for (int i = 0; i < prices.size(); i++)
//     {

//         for (int j = i + 1; j < prices.size(); j++)
//         {
//             answer[i]++;
//             if (prices[i] > prices[j])
//                 break;
//         }
//     }

//     return answer;
// }

#include <string>
#include <vector>
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
    return answer;
}

int main()
{

    vector<int> price{1, 2, 3, 2, 3};
    vector<int> answer(4);
    answer = solution(price);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", answer[i]);
    }
}