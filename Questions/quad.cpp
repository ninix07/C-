/**
  * File: quad.cpp
  *
  * Author:  Nigam Niraula
  * Date:     
  * Partner:  I worked alone
  * 
  *
  * Summary of File:
  *
  *   This file contains program that tells if a quadratic eqaution is imaginary or real and finds real solution.
  *
  * 
  *
  * 
  *
  */
 #include <iostream>
 #include <cmath>
 using namespace std ;
 /**
 * The quad class has three variables a,b,c for storing major parts of equation ax^2+bx+c=0.
 * Also has two functions to check if there are real solutions, and if there are finding the solutions.
 * 
 */

 class quad{
   public :
    int a,b,c;
    bool checkReal();
    void printSoln();
 };

     /**
    *
    * The checkReal() function in quad class checks if the quadratic equation is real and if it is real.
    *
    * Parameters   : none.
    *
    * Return Value : boolean
    *
    */
   bool quad:: checkReal(){
      if(((pow(b,2))-4*a*c)>=0){    // using pow() function in cmath library to calculate b^2.
        return 1;   //returns true 
          
      }
      return 0; // returns false
 };
    /**
    *
    * The printSoln() function in quad class prints real solutions of quadratic equation.
    *
    * Parameters   : none.
    *
    * Return Value : null
    *
    */
 void quad:: printSoln(){
    float sol1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
         float sol2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
        cout <<"The real roots of equation are "<< sol1
         << " and "<< sol2 <<"."<<endl;
        return;
 };

   /**
    *
    * The main() function takes input of values from quadratic equation and prints if equation is real or imaginary.
    * In case of being real it prints its solution too.
    * Parameters   : none
    *
    * Return Value : none
    *
    */

 int main(){
     quad q1;
     cout<< "For a given quadratic equation ax^2 +bx +c=0, give the value of a,b and c: \n";
     cin >> q1.a >>q1.b >>q1.c;
    bool real =q1.checkReal();
     if(real){
        q1.printSoln();
          
      }
      else{
          cout <<"The number is imaginary."<< endl;
      }
    return 0;

 }