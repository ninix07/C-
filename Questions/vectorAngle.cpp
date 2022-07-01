/**
  * File:  Vectorlength.cpp
  *
  * Author:  Nigam NIraula
  * Date:     
  * Partner:  I worked alone
  * Course:   CPP 
  *
  * Summary of File:
  *
  *   This file contains program returning vector angle.
  *
  */

 #include <iostream>
 #include<cmath>
 using namespace std ;

 class Point{
     public:
     float x;        
      float y; 
    bool firstQuadrant(){
       
       if(x>=0 && y>=0){
           return 1; 
       }
    return 0;
 };

class Distance {
   public:
      Point p1,p2; 
      
   float getmagnitude(){
       float x= pow(p2.x-p1.x,2);
        float y= pow(p2.y-p2.y,2);
        float length = sqrt(x+y);
        cout << length << endl;
        return length; 
       
   }
 
};
int main(){
    distance d1;
    cout << " Enter the co-ordinates of 1st vector as x1,y1,x2,y2: ";
    cin >> v1.start.x >>v1.start.y>> v1.end.x>> v1.end.y;
    cout << " Enter the co-ordinates of 2nd vector as x1,y1,x2,y2: ";
    cin >> v2.start.x >>v2.start.y>> v2.end.x>> v2.end.y;
   // cout<< "-------Vector Mapping---------"<< endl;
   //  cout <<"("<<v1.start.x<<","<< v1.start.y<<")"<<"==========>"<<"("<<v1.end.x<<","<< v1.end.y<<")"<<endl;
     cout <<"("<<v2.start.x<<","<< v2.start.y<<")"<<"==========>"<<"("<<v2.end.x<<","<< v2.end.y<<")"<<endl;
    v1.start.quadrant();
    v1.end.quadrant();
    v2.start.quadrant();
    v2.end.quadrant();
    float magnitude1 = v1.getmagnitude();
    float magnitude2 = v2.getmagnitude();
    cout<< "The magnitude of 1st vector is: "<< magnitude1<<endl;
    cout<< "The magnitude of 2nd vector is: "<< magnitude2<<endl;
    float angle= v1.Angle(v1,v2);
    cout<< "The angle between two vectors in degrees is " << angle << endl;
    return 0;
}