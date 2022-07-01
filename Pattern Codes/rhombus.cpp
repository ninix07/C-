/**
  * File:  rhombus.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that gives a  rhombus.
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
            cout<< " \t";
         
    }
     for (int k=1; k<= length; k++){
         cout << "*\t";
     }
      cout<< "\n";
    }
    return 0;
}