#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int temp[51];

int main()
{

    string str;

    cin >> str;

    int size = str.length();

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] - 48 <= 9)
        {
            int index = str[i] - 48;
            temp[index] = index;
        }
    }
    string result;
    for (int i = 0; i < 50; i++)
    {

        if (temp[i] != 0)
        {
            result += to_string(temp[i]);
        }
    }
    int result2;
    result2 = stoi(result);
    cout << result2 << endl;
    int cnt = 0;

    for (int i = 1; i <= result2; i++)
    {
        if (result2 % i == 0)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}