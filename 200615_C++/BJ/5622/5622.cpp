#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, result;

    cin >> name;

    for (int i = 0; i < name.length(); i++)
    {
        int num = name[i];

        if (num >= 65 && num <= 67)
        {
            result += "2";
        }
        else if (num >= 68 && num <= 70)
        {
            result += "3";
        }
        else if (num >= 71 && num <= 73)
        {
            result += "4";
        }
        else if (num >= 74 && num <= 76)
        {
            result += "5";
        }
        else if (num >= 77 && num <= 79)
        {
            result += "6";
        }
        else if (num >= 80 && num <= 83)
        {
            result += "7";
        }
        else if (num >= 84 && num <= 86)
        {
            result += "8";
        }
        else if (num >= 87 && num <= 90)
        {
            result += "9";
        }
    }

    int sum = 0;

    for (int i = 0; i < result.length(); i++)
    {
        // cout<<result[0]<<endl;
        sum += result[i] - '0' + 1;
    }

    cout << sum << endl;

    return 0;
}