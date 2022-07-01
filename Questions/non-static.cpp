/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class deClass{
    int count;
    
    public:
        deClass(){
            count++;
        }
        deClass(int x){
            count=x;
        }
        deClass(deClass &a){
            count++;
        }
        
        static void getCountstatic(deClass &a){
            cout<<"Count is "<< a.count;
        }
       
};


int main()
{
    deClass a, b(2);
    deClass::getCountstatic(b);
    
    

    return 0;
}