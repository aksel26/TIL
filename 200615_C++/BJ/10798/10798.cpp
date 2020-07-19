#include <iostream>
#include <string>

using namespace std;

string arr[5][10];

int main()
{

    string input, result;

    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        for (int j = 0; j < input.length(); j++)
        {
            arr[i][j] = input.substr(j, 1);
        }
    }

    int max = -10;
    int longest = input.length();
    if (max < longest)
        max = longest;

        
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            result += arr[j][i];
        }
    }

    cout << result << endl;

    return 0;
}