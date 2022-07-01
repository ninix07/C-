#include <iostream>
using namespace std;

class Rectangle{
    private:
    int l,b;
    public:
    void setSize(int length, int breadth){
        l=length;
        b=breadth;
    }
    int getArea();
    int getPerimeter();
};

int Rectangle :: getArea(){
    int Area= l*b;
    return Area;
}

int Rectangle :: getPerimeter(){
    int Perimeter= 2*(l+b);
    return Perimeter;
}

int main(){
    Rectangle r1;
    int l,b;
    cout << "Enter the length and breadth of rectangle : ";
    cin >> l>>b;
    r1.setSize(l,b);
    int Area= r1.getArea();
    int Perimeter= r1.getPerimeter();
    cout << "The area and perimeter of the rectangle are "<< Area << " and "<< Perimeter << " respectively.";
}