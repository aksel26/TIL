#include <iostream>
using namespace std;
int main()

{
    int arr[42]={0};

    int count = 0;
    int num;

    for (int i = 0; i < 10; i++)
    {
        cin>>num;

        arr[num % 42] = 1;
    }

    for (int i = 0; i < 42; i++)
    {
        if(arr[i]==1){
            count++;
        }
    }

    cout<<count<<endl;
    
    
   
    return 0;
}