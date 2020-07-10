#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count = 0;
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {

        if (input[i] == 'c')
        {
            if (input[i + 1] == '=' || input[i + 1] == '-')
            {
                i++;
            }
        }
        else if (input[i] == 'd')
        {
            if (input[i + 1] == '-')
            {
                i++;
            }
            else if (input[i + 1] == 'z' && input[i + 2] == '=')
            {
                i++;
                i++;
            }
        }
        else if (input[i] == 'l')
        {
            if (input[i + 1] == 'j')
            {
                i++;
            }
        }
        else if (input[i] == 'n')
        {
            if (input[i + 1] == 'j')
            {
                i++;
            }
        }
        else if (input[i] == 's')
        {
            if (input[i + 1] == '=')
            {
                i++;
            }
        }
        else if (input[i] == 'z')
        {
            if (input[i + 1] == '=')
            {
                i++;
            }
        }

        count++;
    }
    cout << count << endl;

    return 0;
}
