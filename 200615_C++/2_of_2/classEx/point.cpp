#include "class.h"
#include <iostream>

using namespace std;

//디폴트 생성자
Point::Point(){
    x = 0;
    y = 0;
    cout<<"디폴트 생성자"<<endl;
}

//인자있는 생성자
// Point::Point(int xpos, int ypos)
// {
//     x = xpos;
//     y = ypos;
//     cout<<"인자있는 생성자"<<endl;
// }


// 초기화 리스트를 이용한 생성자
Point::Point(int xpos, int ypos)
: x(xpos), y(ypos)
{
    cout<<"초기화리스트 생성자"<<endl;
}


Point::~Point(){
    cout<<"소멸자"<<endl;
}

void Point::Print(){
    cout<<"x = " <<x << ", y = "<<y<<endl;
}

int Point::GetX(){
    return x;
}

int Point::GetY(){
    return y;
}

void Point::SetX(int xpos){
    x = xpos;
}

void Point::SetY(int ypos){
    y = ypos; 
}

int main(){
    //Point 객체 obj1생성 ==> 디폴트 생성자 함수 호출
    Point obj1;
    cout<<"obj1 : ";
    obj1.Print();

    //Point 객체 obj2생성 ==> 인자있는 생성자 함수 호출
    Point obj2(5,10);
    cout<<"obj2 : ";
    obj2.Print();

    //객체 간 대입
    obj1 = obj2;
    cout<<"obj1 = obj2 이후의 obj1 : ";
    obj1.Print();

    // 멤버함수 Setx와 setY호출
    
    // SetX, SetY전에 Print를 호출하면?? 
    // x, y변수에 초기화 되어 있지 않으므로 쓰레기 값이 나온다.
    // obj.Print ();
    // x = -468170712, y = 32766
    // obj.SetX(5);
    // obj.SetY(10);
    // obj.Print();

    return 0;
}