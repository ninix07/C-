/**
  * File: armstrong.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that check if a number is armstrong.
  *
  */
 #include <iostream>
 #include <cmath>
 using namespace std ;

  int main(){
       int num,last;
       float arm;
      cout << "Enter the number to find if it's armstrong: ";
      cin >> num;
      float original = num;
      int digit=0;
      while(num>0){
          last= num%10;
         num=num/10;
          digit++;
      }
      num= original;
      while(num>0){
          last= num%10;
         num=num/10;
         arm =arm+ pow(last,digit);
      }
      if(arm==original){
        cout<< original<< " is armstrong number."<< endl;
      }
      else{
           cout<< original << " is not armstrong number."<< endl;
      }

      return 0;
  }