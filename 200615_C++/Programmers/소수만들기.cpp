#include <vector>
#include <iostream>
using namespace std;
int arr[1001];
int solution(vector<int> nums)
{
    int answer = -1;

    arr[0] = -1;
    arr[1] = 2;
    arr[2] = 3;

    for (int i = 1; i < 1001; i++)
    {
        for (int j = i; j < 1001; j *= 2)
        {
            arr[j] = -1;
        }
    }

    return answer;
}

int main(int argc, char const *argv[])
{
    vector<int> n;

    n.push_back(1);
    n.push_back(2);
    n.push_back(3);
    n.push_back(4);

    solution(n);
    return 0;
}
