#include <iostream>
using namespace std;

class Complex{
    private :
    int x;
    int y;
    public: 
    Complex(){};
    Complex(int x, int y){
        this-> x= x;
        this->y=y;
    }
    // void operator -();
    // friend Complex scalar(int k,Complex c);
    // Complex operator +(Complex c);
    // void operator +=(Complex c);
    // bool operator ==(Comlex c);
    // Complex operator ++();
    // Complex operator ++(int);
    friend ostream & operator << (ostream & out, Complex &c){
        out << "The complex number is " << c.x <<"+i"<<c.y<<"."<<endl;
    }

};
int main (){
    Complex c1(5,4);
    
    cout << c1;
}