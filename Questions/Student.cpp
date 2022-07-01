#include <iostream>
using namespace std;

class Student{
    public:
        virtual void stdinfo()=0;
        virtual void inputInfo()=0;
};

class CE:public Student{
    private:
        char name[20];
        int roll;
        float marks;
    public:
        void stdinfo(){
            cout<< "The name,roll and marks of the given student is " <<name << " " << roll <<" and "<< marks << " respectively."<<endl;
        }
        void inputInfo(){
            cout<< "Enter the name of the student: "<< endl;
            cin>> name;
            cout<< "Enter the roll of the student: "<< endl;
            cin>> roll;
            cout<< "Enter the marks of the student: "<< endl;
            cin >> marks;
        }
};

int main(){
    CE studentList[5];
    for(int i=0; i<5;i++){
        cout << "--------------------Student"<< i+1<< "--------------------"<<endl;
        studentList[i].inputInfo();
    }
    int num; 
    cout<< "\n\nEnter the desired roll number" << endl;
    cin >> num;
    Student *ptr =&studentList[(num-1)];
    ptr-> stdinfo();
}