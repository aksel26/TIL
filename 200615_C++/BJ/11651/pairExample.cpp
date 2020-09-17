#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<pair<int,string>> v;

    v.push_back(pair<int,string>(3,"Dok2"));
    v.push_back(pair<int,string>(6,"DMask"));
    v.push_back(pair<int,string>(1,"TigerJK"));
    v.push_back(pair<int,string>(4,"Block"));
    v.push_back(pair<int,string>(2,"banana"));
    v.push_back(pair<int,string>(2,"apple"));


    vector<pair<int,string>>::iterator iter;
    for (iter = v.begin(); iter != v.end() ;iter++)
    {
     cout<<"["<<iter->first<<","<<iter ->second<<"]"<<endl;

    }

    cout<<endl;

    sort(v.begin(),v.end());

    cout<<endl;

    for (iter =v.begin(); iter!= v.end() ;iter++)
    {
        cout<<"["<<iter->first<<","<<iter ->second<<"]"<<endl;
    }
    
    
    return 0;
}