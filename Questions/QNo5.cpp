#include <iostream>
using namespace std;

class Item
{
    protected: 
        int item_no;
        char name[20];
        float price;
    public:
        virtual void Input()=0;
        virtual void Display()=0;
};
class DiscountedItem : protected Item {
    protected: 
    int discount_percent;
    float total;
    static float total_amount;
    public:
    void Input(){
        cout <<"Enter the item no:"<< endl;
        cin>> item_no;
        cout << "Enter the name of item:" <<endl;
        cin >> name;
        cout << "Enter the price: " <<endl;
        cin >>price;
        cout << "Enter the discount percent: " <<endl;
        cin >>discount_percent;
        total= price*(100-discount_percent)/100;
        total_amount += total;
    }
    void Display(){
         cout<<" The total price for the item "<< item_no << "-"<< name <<" is " << total <<".\n";
    }
    static void Total(){
        cout <<"The total bill amount is " << DiscountedItem :: total_amount << ".\n";
          }
};
float DiscountedItem :: total_amount =0;
int main(){
    DiscountedItem items[100];
    int num;
    cout << "Enter the number of items you want to buy."<< endl;
    cin >> num;
    for (int i=0; i< num ; i++){
        cout << "\n\nNew Item Detail ::\n";
        items[i].Input();
    }
    cout << "\n\n********Printing the bill*********\n";
    for (int j=0; j< num; j++){
        
        items[j].Display();
    }
    DiscountedItem :: Total();
}