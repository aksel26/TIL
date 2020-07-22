#include <iostream>
#include <string>
#include <map>
#include <string>
using namespace std;
int main()
{

    int player ;
    int num = 1;
    cin>>player;
    string name;
    string temp;
   multimap<int, string> m;

   for (int i = 0; i <= player; i++)
   {
       cin>>name;
       name = name.substr(0,1);
       
       m.insert(make_pair(num,name));

    //    if(name == name){
    //        cout<<name<<endl;
    //        num++;
    //    }
       
        if(m.find(i) == m.find(i+1)){
            num++;
        };
   }

    //   temp = m.find(1);
   cout << m.find(2)-> first; 
   cout << m.find(2)-> second; 
   

//    for (int i = 0; i < player; i++)
//    {
//        m.find()
//    }
   
   

   for(auto it = m.begin(); it != m.end(); it++){
		cout << "key : " << it->first << " " << "value : " << it->second << '\n';
	}


  
    return 0;
}