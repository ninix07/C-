/**
  * File:  hollowrectangle.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that gives a  rectangle pattern.
  *
  */
 #include <iostream>
 using namespace std ;

  
int main(){
    cout <<" Enter the number of rows and columns:\n";
    int rows, column;
    cin>> rows >> column;
    for (int i=0; i<rows; i++){
        for (int j=0; j<column ; j++){
            if(i==0 || j==0 || i== rows-1 || j==column-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}