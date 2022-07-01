/**
  * File:  butterfly.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that gives a  butterfly pattern.
  *
  */
 #include <iostream>
 using namespace std ;

  
int main(){
    cout <<" Enter the length:\n";
    
    int length;
    cin >> length;
    for (int i=1; i<=length;i++){
        for(int j=1;j<=i; j++){
            cout <<"*";
            cout << "\t";
        }
        int space= 2*length- 2*i;
        for(int j=1;j<=space; j++){
            cout <<" ";
            cout << "\t";
        }
        for(int j=1;j<=i; j++){
            cout <<"*";
            cout << "\t";
        }
        cout << "\n";
    }
    for (int i=length; i>=1;i--){
        for(int j=i;j>=1; j--){
            cout <<"*";
            cout << "\t";
        }
        int space= 2*length- 2*i;
        for(int j=space;j>=1; j--){
            cout <<" ";
            cout << "\t";
        }
        for(int j=i;j>=1; j--){
            cout <<"*";
            cout << "\t";
        }
        cout << "\n";
    }
    return 0;
}