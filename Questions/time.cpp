#include <iostream>
using namespace std;

class Time{
    private:
        int HH,MM;
    public:
        Time(){};
        Time(int a, int b){
                HH=a;
                MM=b;
        }
        Time (Time &t1){
            this->HH = t1.HH;
            this-> MM = t1.MM;
        }
        void setTime(int a, int b){
                HH=a;
                MM=b;
        }
        int getHH(){
            return HH;
        }
        int getMM(){
            return MM;
        }
        int operator >(Time t1){
                if(t1.HH<HH){
                    return 1;
                }
                else if(t1.HH == HH){
                    if(t1.MM<MM){
                        return 1;
                    }
                    return 0;
                }
                return 0;
        }
};

int main(){
        Time t1(15, 35);
        Time t2=t1;
        int hh,mm;
       
        cout<< "Enter the time you want as HH MM"<<endl;
        cin>> hh>>mm;
        t1.setTime(hh,mm);
        cout<< "Enter the second time you want as HH MM"<<endl;
        cin>> hh>>mm;
        t2.setTime(hh,mm);
        cout<< "The times you entered are " << t1.getHH() << ":"<< t1.getMM() << " and "<< t2.getHH() <<":"<<t2.getMM() <<"."<< endl;

       t1>t2? cout<< "The time you enter first is faster." : cout << " The time you entered second is slower. ";
}