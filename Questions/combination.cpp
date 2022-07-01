/**
  * File: combination.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that prints no of possible cobination of a even.
  *
  */
 #include <iostream>
 #include <cmath>
 using namespace std ;
    int fact(int num){
     int fact=1;
     for (int i=num; i>1; i--){
         fact *=i;
         
     }
     
     return fact;
    }

  int main(){
       int n;
       int r;
       
      cout << "n= ";
      cin >> n;
      cout << "r= ";
      cin >> r;

     
     int factN= fact(n);
     int factR= fact(r);
     int factNR= fact((n-r));
     int totalCombination= factN/(factR * factNR);
    
     cout<<"The total combination for the program to occur is: "<< totalCombination << endl;

      return 0;
  }
