#include <iostream>
#include <cmath>
using namespace std;

class Shape{
    public:
        double side_one;
        double side_two;
        Shape(){};
        Shape(double a, double b): side_one(a),side_two(b) {}
        void set_data(double a, double b){
            side_one= a;
            side_two=b;
        }
        virtual  void display_area() {
            double Area= side_one*side_two;
            cout << "The area of the shape is: " << Area <<endl;
        }
};

class Rectangle : public Shape{
    public: 
    Rectangle (double side_one, double side_two): Shape(side_one, side_two){};
    void display_area() {
         double Area= side_one*side_two;
        cout << "The area of given rectangle is : " << Area << endl;
    }
};

class Triangle : public Shape{
     public: 
        double side_three;
    Triangle (double a, double b, double c): Shape(a, b){
        side_three= c;
    };
    void set_data(double a, double b,double c){
           Shape :: set_data(a,b);
           side_three= c;
        }
    void display_area() {
        double semiPeri= (side_one +side_two +side_three)/2;
         double Area= sqrt(semiPeri*(semiPeri-side_one)*(semiPeri-side_two)*(semiPeri-side_three));
        cout << "The area of given triangle is : " << Area << endl;
    }
};

int main (){
    double side_one, side_two, side_three;
    cout<< "Enter two sides of shape: ";
    cin >> side_one >> side_two;
    Shape s1(side_one, side_two);
    cout<< "Enter the length and breadth of Rectangle: ";
    cin >> side_one >> side_two;
     Rectangle r1(side_one, side_two);
    cout<< "Enter three sides of triangle: ";
      cin >> side_one >> side_two>> side_three;
       Triangle t1(side_one, side_two, side_three);
    s1.display_area();
    r1.display_area();
    t1.display_area();
    char check;
    cout <<"Do you want to Continue? (y/n)"<< endl;
    cin >> check ;
    if (check == 'y'){
     cout<< "Enter two sides of shape: ";
    cin >> side_one >> side_two;
    s1.set_data(side_one, side_two);
    cout<< "Enter the length and breadth of Rectangle: ";
    cin >> side_one >> side_two;
    r1.set_data( side_one, side_two);
    cout<< "Enter three sides of triangle: ";
    cin >> side_one >> side_two>> side_three;
    t1.set_data(side_one, side_two, side_three);
   
    s1.display_area();
    r1.display_area();
    t1.display_area();
    }
    
}