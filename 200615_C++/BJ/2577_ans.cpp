#include <iostream>
using namespace std;
// 배열 초기화하는 방법1
int arr[10];
int main()
{
    int a, b , c, result= 0;

    cin>>a>>b>>c;

    result = a*b*c;

    while (result !=0)  
    {
        arr[result%10] +=1;
        cout<<"result%10 = "<<result %10<<endl;
        result /= 10;
        cout<<"result /= 10; = "<<result/10<<endl;
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    
    return 0;
}