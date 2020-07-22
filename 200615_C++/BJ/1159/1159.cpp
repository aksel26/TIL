#include <iostream>
#include <string>
using namespace std;
int main()
{
    int player;
    string name, result;
    string arr[4];
    int arr2[4] = {
        0,
    };
    cin >> player;
    for (int i = 0; i < player; i++)
    {
        cin >> name;

        arr[i] = name.substr(0, 1);
    }

    for (int i = 0; i < player; i++)
    {

        for (int j = i; j < player; j++)
        {
            if (arr[i] == arr[j+1])
            {
                arr2[i]++;
                if (i == 0)
                    continue;
                arr[j+1] = "@";
            }
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        cout << arr2[i] << "   ";
        // if(arr2[i] >=5 ){
        //     cout<<arr[i]<<"  ";
        // }
    }
    cout << '\n';
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << "  ";
    }

    // cout<<result<endl;

    return 0;
}