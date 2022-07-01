/**
  * File: LargestInArray.cpp
  *
  * Author:  Nigam Niraula
  * Date:     
  * Partner:  I worked alone
  * 
  *
  * Summary of File:
  *
  *   This file contains program gives the largest number in array of 10 numbers.
  *
  * 
  *
  * 
  *
  */
 #include <iostream>
 using namespace std ;
 /**
 * The arrayNum class initalizes an array of 10 numbers. 
 * The Greatest function in the class returns gratest among those 10 number.
 * 
 */
    class arrayNum{
        public:
        int a[9];
        int Greatest();
    };
     /**
    *
    * The Greatest() function returns the greatest number in array.
    *
    * Parameters   : none
    *
    * Return Value : integer 
    *
    */
    int arrayNum:: Greatest(){
        int greatest= a[0];     //initializing gratest as first number of array
         for (int i=1;i<=9;i++){    //for loop for finding greatest
            if(greatest < a[i]){
                greatest= a[i];
            }
        }
        return greatest;
    }
     /**
    *
    * The main() function takes imput from user and prints the greatest number.
    *
    * Parameters   : none
    *
    * Return Value : int
    *
    */
    int main(){
        arrayNum a1;
        for (int i=0;i<=9;i++){
            cout << "Enter number "<< i+1 <<" :";
             cin >>a1.a[i];
        }
        int greatest = a1.Greatest(); //calling Greatest function 
        cout << "The greatest is " << greatest << endl;
    }