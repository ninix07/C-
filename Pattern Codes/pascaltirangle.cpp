/**
  * File: pascaltriangle.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program that prints pascal triangle pattern.
  *
  */
 #include <iostream>
 #include <cmath>
 using namespace std ;
    int fact(int num){
     int fact=1;
     if(num==0){
         return fact;
     }
     for (int i=num; i>1; i--){
         fact *=i;
         
     }
     
     return fact;
    }
    int combination(int n, int r){
          int factN= fact(n);
     int factR= fact(r);
     int factNR= fact((n-r));
     int totalCombination= factN/(factR * factNR);
     return totalCombination;
    }

  int main(){
       int n;
       
      cout << "Number of rows,n= ";
      cin >> n;
        for (int rows=0; rows<=n; rows++){
            for(int column=0; column<= rows; column ++){
                int comb =combination(rows,column);
                cout<< comb << " " ;
            }
            cout << endl;
        }
     

     
   
    

      return 0;
  }
