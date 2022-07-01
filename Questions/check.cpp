# include <iostream>
# include <cmath>
using namespace std;
class point 
{
    public:
    int x;
    int y;
    
};
class vector 
{
    public:
    point start;
    point end;
    
   void Print_distance( vector &V1)
   {
       float d=pow((V1.end.x-V1.start.x),2) + pow((V1.end.y-V1.start.y),2);
       float distance =pow(d,0.5);
       
       cout<<"The distance between the two points is "<<distance<<endl;
   }
};
int main()
{
    vector V1;
    cout<<"Enter x1:";
    cin>>V1.start.x;
    cout<<"Enter y1:";
    cin>>V1.start.y;
    cout<<"The initial coordinates are ("<<V1.start.x<<", "<<V1.start.y<<")"<<endl;
    cout<<"Enter x2:";
    cin>>V1.end.x;
    cout<<"Enter y2:";
    cin>>V1.end.y;
    cout<<"The final coordinates are ("<<V1.end.x<<", "<<V1.end.y<<")"<<endl;
    
    V1.Print_distance(V1);
    
}