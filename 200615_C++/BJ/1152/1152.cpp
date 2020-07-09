#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cnt = 1;
    string sent;
    getline(cin, sent);

    if (sent[0] == ' ' || sent[sent.length()] == ' ')
    {
        cnt = 0;

        for (int i = 0; i < sent.length(); i++)
        {
            if (sent[i] == ' ')
            {
                cnt++;
            }
        }
    }
    else
    {

        for (int i = 1; i < sent.length(); i++)
        {
            for (int j = i; j < sent.length(); j++)
            {
                if (sent[j + 1] == ' ')
                {
                    break;
                }

                if (sent[j] == ' ')
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}
