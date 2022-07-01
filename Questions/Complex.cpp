#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
int x;
int y;
public:
Complex( );
Complex( int real, int imaginary){
    x=real;
    y= imaginary;
};

void operator -();

Complex operator +(Complex c);
Complex operator -(Complex c);
void operator +=(Complex c);
bool operator ==(Complex c);
bool operator >(Complex c);
bool operator !=(Complex c);
Complex operator ++();
Complex operator ++(int);
friend Complex Scalar(int k,Complex c );
friend ostream & operator << (ostream &out, const Complex &c);
};



    

void Complex :: operator-(){
    x= (-x);
    y= (-y);
    cout<< "After negating: ";
}
Complex Complex:: operator +(Complex c){
    c.x += x;
    c.y +=y;
    cout<< "After adding with another complex number: ";
    return c;
}
Complex Complex :: operator -(Complex c){
    c.x = x-c.x;
    c.y =y-c.y;
    cout<< "After subracting with another complex number: ";
    return c;
}
void Complex:: operator +=(Complex c){
    cout<< "After using += operator: ";
    x += c.x;
    y +=c.y;
}
bool Complex:: operator ==(Complex c){
    cout<< "Checking if equal"<< endl;
    if(x==c.x && y== c.y){
         cout<< "It's equal"<< endl;
        return true;
    }
    return false;
}

bool Complex:: operator >(Complex c){
    cout<< "Checking if greater"<< endl;
    int mag1= sqrt(pow(x,2) + pow(y,2));
    int mag2= sqrt(pow(c.x,2) + pow(c.y,2));
    if(mag1>mag2){
        return true;
    }
    return false;
}
bool Complex:: operator !=(Complex c){
    cout<< "Checking if not equal"<< endl;
    if(x==c.x && y== c.y){
        return false;
    }
    return true;
}
Complex Complex:: operator ++(){
    cout<< "Pre-increment: ";
    x++;
    y++;
    return Complex(x,y);
}
 Complex Complex:: operator ++(int){
     cout<< "Post increment";
     x++;
    y++;
    return Complex(x,y);
 }

Complex Scalar(int k,Complex c){
    cout<< "Multipying with scalar gives: ";
    c.x*=k;
    c.y*=k;
    return c;
}
ostream & operator << (ostream &out, const Complex &c)
{
   out<< "The complex number is " << c.x << "+("<< c.y <<"i)."<<endl;
    return out;
}

int main (){
    Complex c1(3,4),c2(9,11);
    cout<<c1;
    cout<<c2;
    if(c1 ==c1){
        if(c1!=c2){
            if (c2>c1){

                cout<<c1;
                -c1;
                cout<<c1;
                c1= Scalar(2, c1);
                cout<<c1;
                c1= c1+c2;
                cout<<c1;
                c1= c1-c2;
                cout<<c1;
                c1 +=c2;
                cout<<c1;
                c1++;
                cout<<c1;
                ++c1;
                cout<<c1;
            };
        };
    };
}