/**
  * File: reverseNumber.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that reverse number.
  *
  */
 #include <iostream>
 #include <cmath>
 using namespace std ;

  int main(){
      int num, rev=0,last;
      cout << "Enter the number to reverse: ";
      cin >> num;
      while(num>0){
          last= num%10;
          rev= rev*10+last;
          num=num/10;
      }
        cout<< rev<< " is the reversed number."<< endl;
    return 0;
  }