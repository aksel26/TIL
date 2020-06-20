#include <iostream>

using namespace std;

#define Max 5

int main(){

    int num[Max],*p;
    double dnum[Max], *dp;
    int i;

    p = num;
    dp = dnum;


    cout<<"정수 5개 입력" <<endl;
    for ( i = 0; i < Max; i++)
    {
        cin>>p[i];
    }
    

    cout<<"실수 5개 입력" <<endl;
    for ( i = 0; i < Max; i++)
    {
        cin >> dp[i];
    }

    cout<<"입력받은 수는 다음과 같습니다" <<endl;
    for ( i = 0; i < Max; i++)
    {
        cout<<"(p+"<<i<<") = " <<*(p+i);
        cout<<", *(dp+"<<i<<") = " <<*(dp+i) <<endl;
    }
    
    




}