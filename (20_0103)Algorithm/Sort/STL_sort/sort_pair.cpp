#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector<pair<int, string>> v;

    v.push_back(pair<int,string>(90,"박명수"));
    v.push_back(pair<int,string>(93,"유재석"));
    v.push_back(pair<int,string>(91,"정준하"));
    v.push_back(pair<int,string>(92,"노홍철"));

    // pair는 first(int부분), second(string부분) 의 정보를 갖고 있다. 
    
    //벡터의 첫번째 값부터 마지막 값까지 정렬해라.
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].second<<' ';
    }
    


    return 0;
}