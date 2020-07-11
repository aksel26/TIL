#include <iostream>
#include <string>

using namespace std;

int main()
{

    int tcase;
    cin >> tcase;

    string word;

    int cnt = 0;

    for (int i = 0; i < tcase; i++)
    {

        cin>>word;
        string tmp;
        
        for (int i = 0; i < word.length(); i++)
        {
            tmp = word[i];
            
            if (word.find(tmp, i + 1) == -1)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}