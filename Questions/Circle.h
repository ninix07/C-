#include <iostream>
using namespace std;

class Shape{

    protected:
         int x;
         int y;
    public:
        Shape(){};
        Shape(int , int );
        
        virtual void draw()=0;
};
class Circle : public Shape{
    protected:
        int radius;
    public:
        Circle(){};
        Circle(int , int , int );
          void draw();
};

class Ellipse: public Shape{
    protected:
        int xradius;
        int yradius;
    public:
        Ellipse(){};
        Ellipse(int , int , int , int);
         void draw();
};

class Rectangle: public Shape{
    protected:
        int x1;
        int y1;
    public:
        Rectangle(){};
        Rectangle(int , int , int , int );
        void draw();
};