
#include <iostream>

using namespace std;

int main()
{
    int n, sum = 1;
    cin>>n;

    cout<<1;
    for (int i = 2; i < n ; i++)
    {   
        
        if(n % i == 0){
            sum += i;
            cout<<"+"<<i;
        }

    }
    cout<<"="<<sum<<'\n';
    

    return 0;
}


// 입력
// 20
// 출력
// 1+2+4+5+10=22