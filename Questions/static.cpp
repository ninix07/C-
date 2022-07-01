/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class deClass{
    static int count;
    int a;
    public:
        deClass(){
            count++;
        }
        deClass(int x){
            count++;
        }
        deClass(deClass &a){
            count++;
        }
        void getCount(){
            cout<<"Count is "<<count;
        }
        static void getCountstatic(){
            cout<<"Count is "<<count;
        }
       
};
int deClass :: count =0;

int main()
{
    deClass a, b(2);
    deClass::getCountstatic();
    deClass c=a;
    c.getCount();

    return 0;
}