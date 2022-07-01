/**
  * File: prime.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that check if a number is prime.
  *
  */
 #include <iostream>
 #include <cmath>
 using namespace std ;

  int main(){
      int num;
      cout<< "Enter a muber to check if it's prime:";
      cin >> num ;
      bool flag= 0;
      for(int i=2; i<=sqrt(num);i++){
          if(num%i == 0){
              cout << num <<" is not a prime number."<< endl;
              flag =1;
              break;
          }

      }
      if(flag==0){
            cout << num <<" is a prime number."<< endl;
      }

    return 0;
}