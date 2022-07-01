#include <iostream>
using namespace std;
#include "Circle.h"

Shape :: Shape(int x, int y){
            this -> x=x;
            this->y=y;
        }
Circle ::  Circle(int x, int y, int radius): Shape(x,y){
            this->radius=radius;
        }
void Circle::   draw(){
            cout<< "The circle of radius " << radius <<  " is drawn at position ("<<x<<","<<y<<").\n\n";
        }
Ellipse :: Ellipse(int x, int y, int xradius, int yradius): Shape(x,y){
            this->xradius=xradius;
            this->yradius=yradius;
        }
void Ellipse::  draw(){
            cout<< "The Ellipse of xradius" << xradius << " and yradius "<< yradius << " is drawn at position ("<<x<<","<<y<<").\n\n";
        }
Rectangle :: Rectangle(int x, int y, int x1, int y1): Shape(x,y){
            this->x1=x1;
            this->y1=y1;
        }
void Rectangle:: draw(){
            cout<< "The rectangle of length " << x1 << " and breadth "<< y1 << " is drawn at position ("<<x<<","<<y<<").\n\n";
        }
void createCircle(){
    int x,y,r;
    cout << "Enter the position (x,y) and radius of circle as x,y and r :";
    cin >> x >>y>>r;
    Circle c1(x,y,r);
    Shape *ptr= &c1;
    ptr->draw();

}

void createEllipse(){
    int x,y,xr,yr;
    cout << "Enter the position (x,y), xradius and yradius of circle as x,y,xr and yr :";
    cin >> x >>y>>xr>> yr;
     Ellipse e1(x,y,xr,yr);
    Shape *ptr= &e1;
    ptr->draw();
}

void createRectangle(){
        int x,y,x1,y1;
    cout << "Enter the position (x,y), xradius and yradius of circle as x,y,xr and yr :";
    cin >> x >>y>>x1>> y1;
    Rectangle r1(x,y,x1,y1);
    Shape *ptr= &r1;
    ptr->draw();
    
}


int main (){
    int choice;
    back:
    cout<< "Enter the number of the task you want to perform: \n";
    cout << "1.Circle\n2.Ellipse\n3.Rectangle\n4.Exit\n";
    cin>> choice;
     switch (choice){
        case 1:
            createCircle();
            goto back;
            break;
        
        case 2:
            createEllipse();
            goto back;
            break;
        case 3:
            createRectangle();
            goto back;
            break;
        case 4:
            break;
        default: 
            
            break;
    }
    
}