#include <iostream>

using namespace std;

int main()
{
    int m;
    int num1,num2, tmp;
    cin>>m;
    int arr[4]={1,2,3};

    
    for (int i = 0; i < m; i++)
    {
        cin>>num1>>num2;

        tmp  = arr[num2-1];
        arr[num2-1] = arr[num1-1];
        arr[num1-1] = tmp;
        
        num1 = 0;
        num2 = 0;       
    }

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<"  ";
    }
        
    // cout<<arr[0]<<endl;
    

    return 0;
}