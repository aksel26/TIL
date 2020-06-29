#include <iostream>

using namespace std;

namespace ns1{
    int number;
    void Test1(){
        cout << "NS1::Test called number = " <<number << endl;


    }
}


namespace ns2{
    int number;
    int position;
    void Test(){

        cout<<"NS2::Test called number = " <<number<<endl;
    }
}


int main(){


// ns1을 :: 연산자를 통해 호출함
    ns1::number =10;
    ns1::Test1();


// ns2라는 namespace 정의
    // 이때부터 앞에 ::연산자를 안하면 자동으로 ns2가 호출됨
    using namespace ns2;
    number=100;
    Test();



// 결과
// NS1::Test called number = 10
// NS2::Test called number = 100
    return 0;
}