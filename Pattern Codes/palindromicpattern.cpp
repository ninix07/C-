/**
  * File: palindromicpattern.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that gives a  palindromic pyramid.
  *
  */
 #include <iostream>
 using namespace std ;

  
int main(){
    cout <<" Enter the length: ";
    int length;
    cin>> length;
    for (int i=1; i<=length; i++){
        int j;
        for ( j=1; j<=length-i; j++){
            cout<< " ";
         
    }
    int k=i;
     for (; j<= length; j++){
         cout << k-- ;
     }
     k=2;
     for (; j<= length+i-1; j++){
         cout << k++ ;
         
     }
     

      cout<< "\n";
    }
    
    return 0;
}