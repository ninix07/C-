/* Write a programto demonstrate how a common friend function can be used to exchange private data members of two classes 
*(Use call by reference)
*/

#include <iostream>
using namespace std;
class Rectangle;
class Shape{
        double side_one;
        double side_two;
        public:
        Shape(){};
        Shape(double a, double b): side_one(a),side_two(b) {}
        void set_data(double a, double b){
            side_one= a;
            side_two=b;
        }
       friend void  setRectData(Shape &s1,Rectangle &r1);
};

class Rectangle{
    double side_one, side_two;
    public: 

    void display_area() {
         double Area= (side_one)*(side_two);
        cout << "The area of given rectangle is : " << Area << endl;
    }
    friend void  setRectData(Shape &s1,Rectangle &r1);
};
void setRectData(  Shape &s1,Rectangle &r1){
    r1.side_one= s1.side_one;
    r1.side_two= s1.side_two;
}

int main(){
    Shape s1(5,4);
    Rectangle r1,r2;
    setRectData( s1, r1);
    r1.display_area();
    s1.set_data(7,8);
    setRectData(s1,r1);
    r1.display_area();
    
}