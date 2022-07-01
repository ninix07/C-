/**
  * File: solveLinear.cpp
  *
  * Author:  Nigam Niraula
  * Date:     
  * Partner:  I worked alone
  * 
  *
  * Summary of File:
  *
  *   This file contains program that solves two given linear equation.
  *
  * 
  *
  * 
  *
  */
 #include <iostream>
 using namespace std ;
  /**
    *
    * The solveLinear() function solves the value of x and y in linear equation.
    *
    * Parameters   : eight pointer variables
    *
    * Return Value : none
    *
    */

 void solveLinear( float *a, float *b,float *m, float *c,float *d, float *n , float *x, float *y) {
    float md= ((*m) * (*d));
    float bn= ((*b) * (*n));
    float ad =((*a) * (*d));
    float bc = ((*c) * (*b));
    float na= ((*n) * (*a));
    float mc= ((*m) * (*c));    
    *x=(md-bn)/(ad-bc);
    *y=(na-mc)/(ad-bc);
}
 /**
    *
    * The main() function takes imput from user and prints solution of the equation.
    *
    * Parameters   : none
    *
    * Return value : 0;
    *
    */
int main (){
    float a,b,c,d,m,n;
    float x,y;
    cout<< "Enter a, b, m,c,d,n: " << endl;
    cin >> a>> b>> m>>c>> d >>n;
    solveLinear(&a,&b,&m,&c,&d,&n,&x,&y);
   cout << " The solution of equations are "<< "x= "<< x <<" and y= "<<y;
}