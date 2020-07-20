#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    // int a,b,c,d,e,f,g,h;
    // cin>>a>>b>>c>>d>>e>>f>>g>>h;
    int max = -100, min = 1000;
    int arr[9];
    int num;
    int total = 0;

    for (int i = 0; i < 8; i++)
    {
        cin >> num;

        arr[i] = num;

        total += arr[i];

        if (arr[i] < min)
        {
            min = arr[i];
        }
        /* code */
    }

    cout << total << "   " << endl;

    // for (int i = 0; i < 8; i++)
    // {
    //     cin>>num;
    //     arr[i] = num;
    // }

    // sort(arr,arr+8);

    // for (int i = 3; i < 8; i++)
    // {
    //     total += arr[i];
    // }

    // cout<<total<<endl;

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << "   ";
    }

    // if(max<a){
    //     max = a;
    // }
    // if(max<b){
    //     max = b;
    // }
    // cout<<max<<endl;
    return 0;
}