#include <iostream>
using namespace std;

template <class T>

T sort(T a[], int size ){
    for (int m=0;m< size-1;m++){
        for(int n=m+1;n<size; n++){
            if (a[m]>a[n]){
                T temp;
                temp= a[m];
                a[m]=a[n];
                a[n]=temp;
            }
        }
    }
    return a[size-1];
}

int main(){
    int real[100], size;
    float dec[100];
    cout << "Enter the number of elements yu want to enter: \n";
    cin >> size;
    for (int i=0;i<size ; i++){
        cout<<"Enter the " <<i+1 <<"st integer number" << endl;
        cin >> real[i];
    }
    sort <int>(real,size);
    for ( int i=0;i<size ; i++){
        cout<<"Enter the " <<i+1 <<"st float number" << endl;
        cin >>dec[i];
    }
    sort <float> (dec,size);
    cout<< "\nThe sorted integer is: ";
    for ( int i=0;i<size ; i++){
        cout <<real[i]<< endl;;
    }
    cout<< "\nThe sorted float is: ";
    for ( int i=0;i<size ; i++){
        cout <<dec[i]<< endl;;
    }
    
}