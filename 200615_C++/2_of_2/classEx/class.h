#ifndef POINT_H_
#define POINT_H_


//Point클래스 선언
class Point{

    private:
        int x;
        int y;

    public:
        void Print();
        int GetX(); //return x
        int GetY(); //return y
        void SetX(int); //멤버변수 x변경
        void SetY(int); //멤버변수 y변경

};

#endif