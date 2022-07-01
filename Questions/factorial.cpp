/**
  * File: factorial.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that prints factorial of a number.
  *
  */
 #include <iostream>
 #include <cmath>
 using namespace std ;
    int fact(int num){
     int fact=1;
     for (int i=num; i>1; i--){
         fact *=i;
         
     }
     
     return fact;
    }

  int main(){
       int num;
       
      cout << "Enter the number of whose factorial you want: ";
      cin >> num;
     
     int factorial= fact(num);
    
     cout<< factorial << endl;

      return 0;
  }
