/**
  * File:  pyramid.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that gives a  pyramid.
  *
  */
 #include <iostream>
 using namespace std ;

  
int main(){
    cout <<" Enter the length: ";
    int length;
    cin>> length;
    for (int i=1; i<=length; i++){
        for (int j=1; j<=length-i; j++){
            cout<< " ";
         
    }
     for (int k=1; k<= i; k++){
         cout << k << " ";
     }
      cout<< "\n";
    }
    return 0;
}