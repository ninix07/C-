/**
  * File:  inverted.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that gives a  inverted pattern.
  *
  */
 #include <iostream>
 using namespace std ;

  
int main(){
    cout <<" Enter the length:\n";
    int length;
     int k=1;
    cin>> length;
    for (int i=1; i<=length; i++){
        for (int j=1; j<=length; j++){
           
            
        if(j<=length-i){
            cout << " ";
            cout << "\t";
        }
        else{
         cout << k;
         cout << "\t";
         k++;
        }
        
            
        }
        cout << "\n";
    }
    return 0;
}