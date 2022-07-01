#include <iostream>
using namespace std;

int main(){
    int array[5];
    int num;
    cout << "Enter the size of array you want to create: ";
    cin>> num;
    try{


        if(num>5){
            throw 5;
        }
        if (num<0){
            throw "Negative number";
        }
    }
    catch(int num){
            cout<< "Error: Array out of bounds"<<endl;
    }
    catch(const char *msg){
        cout << "Error: Negative number"<<endl;
    }
}
