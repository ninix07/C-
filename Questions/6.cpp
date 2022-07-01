#include <iostream>
using namespace std;

class Publication{
    public:
    char title[20];
    float price;
    virtual void getdata(){
           cout<< "Enter the title of the book: "<< endl;
            cin>> title;
            cout<< "Enter the price of the book: "<< endl;
            cin>> price;
    };
    virtual void putdata(){
        
    };
};
class Tape: public Publication{
    public:
    float time;
      void putdata(){
            cout<< "The title,price and length of tape in minutes of the given book is " 
            <<title << " " << price <<" and "<< time << " respectively."<<endl;
        }
        void getdata(){
            Publication::getdata();
            cout<< "Enter the length of tape in minutes: "<< endl;
            cin >> time;
        }
};
class Book: public Publication{
    public: 
    int pageCount;
     void putdata(){
            cout<< "The title,price and pagecount of given book is " 
            <<title << " " << price <<" and "<< pageCount<< " respectively."<<endl;
        }
        void getdata(){
            Publication::getdata();
            cout<< "Enter the pagecount of book: "<< endl;
            cin >> pageCount;
        }

};
int main(){
   Publication pub1();

    int noOfEntries;
    cout << "\nHow many enteries do you want to add: ";
    cin >> noOfEntries;

    Publication** array = new Publication*[noOfEntries];

    for(int i = 0; i<noOfEntries; i++)
    {

        int input;
        cout << "What do you want to store the information of ? :";
        cout << "\n1. Book";
        cout << "\n2. Tape\n";
        cin >> input;

        if (input == 1)
        {
            array[i] = new Book();
        }
        else if (input == 2)
        {
            array[i] = new Tape();
        }
        array[i]->getdata();
    }

    for(int i = 0; i< noOfEntries; i++)
    {
        array[i]->putdata();
    }

   

    return 0;
}