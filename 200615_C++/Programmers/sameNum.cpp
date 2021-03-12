#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == arr[i + 1])
        {
            continue;
        }
        else
        {
            // answer[i] = arr[i + 1];
        }
    }

    return answer;
}

int main(int argc, char const *argv[])
{
    vector<int> vec = {1, 1, 3, 3, 0, 1, 1};
    solution(vec);
    return 0;
}
