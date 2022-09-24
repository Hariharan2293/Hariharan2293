#include <iostream>
using namespace std;
class shape{
    public:
    shape(){}
    virtual void print(){
        cout<<"\nThis is a shape.";
    }
};
class polygon: public shape{
    public:
    polygon(){}
    void print(){
        cout<<"\nPolygon is a shape.";
    }
};
class rectangle: public polygon{
    public:
    rectangle(){}
    void print(){
        cout<<"\nRectangle is a Polygon.";
    }
};
class triangle: public polygon{
    public:
    triangle(){}
    void print(){
        cout<<"\nTriangle is a Polygon.";
    }
};
class square: public rectangle{
    public:
    square(){}
    void print(){
        cout<<"\nSquare is a Rectangle.";
    }
};
int main(){
    shape s;
    polygon p;
    rectangle r;
    triangle t;
    square sq;
    s.print();
    p.print();
    r.print();
    t.print();
    sq.print();
    return 0;
}