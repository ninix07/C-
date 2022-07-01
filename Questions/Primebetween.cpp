/**
  * File: Primebetween.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that prints all number between two prime numbers.
  *
  */
 #include <iostream>
 #include <cmath>
 using namespace std ;
 
 int prime(int num){
      bool flag= 0;
     for(int i=2; i<=sqrt(num);i++){
          if(num%i == 0){
              flag =1;
              break;
          }

      }
      if(flag==0){
            cout << num <<" ";
      }
    return 0;
 }

  int main(){
      int num1, num2;
      cout<< "Enter two numubers to check primes in between:";
      cin >> num1>> num2 ;
      for(int i=num1;i<=num2;i++){
          prime(i);
      }
     
      
    return 0;
}