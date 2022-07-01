/**
  * File:  pattern.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that gives a  pattern.
  *
  */
 #include <iostream>
 using namespace std ;

  
int main(){
    cout <<" Enter the length: ";
    int length;
    cin>> length;
    for (int i=1; i<=length; i++){
        for (int j=1; j<=i; j++){
           if((i+j)%2 ==0){
               cout<< "1 \t";
           }
           else{
               cout << "0 \t";
           }
         
    }
      cout<< "\n";
    }
    return 0;
}