#include "class.h"
#include <iostream>

using namespace std;

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
    //Point 객체 obj생성
    Point obj;


    // 멤버함수 Setx와 setY호출
    
    // SetX, SetY전에 Print를 호출하면?? 
    // x, y변수에 초기화 되어 있지 않으므로 쓰레기 값이 나온다.
    // obj.Print();
    // x = -468170712, y = 32766
    obj.SetX(5);
    obj.SetY(10);
    obj.Print();

    return 0;
}