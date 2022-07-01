/**
  * File: fibonacci.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that prints fibonacci nth term.
  *
  */
 #include <iostream>
 #include <cmath>
 using namespace std ;
    int fibonacci(int num){
     int a= 0;
     int b=1;
     int next=0;
     cout<<a << " "<< b << " ";
     if (num==1){
         return a;
         
     }
     else if(num==2){
        return b;
     }
     
     for(int i=2;i<=num-1;i++){
        next= a+b;
        a=b;
        b=next;
         
        cout<< next<< " ";
     }
     
     return next;
    }

  int main(){
       int num;
       
      cout << "Enter the n of the term you want ";
      cin >> num;
     
     int fibonac = fibonacci(num);
     cout<< endl;
     cout<< fibonac << endl;

      return 0;
  }