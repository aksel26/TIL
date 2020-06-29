#ifndef POINT_H_
#define POINT_H_


//Point클래스 선언
class Point{

    private:
        int x;
        int y;

    public:
        Point();
        // Point(int xpos, int ypos);
        // Point(int xpos = 0, int ypos = 0);//디폺트 매개변수 생성자 함수 선언
        ~Point();
        void Print();
        int GetX(); //return x
        int GetY(); //return y
        void SetX(int); //멤버변수 x변경
        void SetY(int); //멤버변수 y변경

};

#endif