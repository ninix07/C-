#include <iostream>
using namespace std;

class Bird{
    string name="Bird #";
    static int birdCount;
    public:
    Bird(){
        this-> name= this->name + to_string(birdCount);
        birdCount++;
    }
    friend ostream & operator << (ostream & out, Bird &b);
};
 ostream & operator << (ostream & out, Bird &b){
        out<< b.name;
        return out;
    };
int Bird :: birdCount=1;
int main(){
    Bird b1, b2,b3;
    cout<< b1 << endl;
    cout<< b2 << endl;
    cout<< b3 << endl;
}