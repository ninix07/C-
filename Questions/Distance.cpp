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
/**
 * The Point class initializes a point P(x,y) in the co-ordinate and has a functin checkQuad that checks if the given point is in first quadrant.
 * 
 */
 class Point{
     public:
     float x;        
     float y; 
    int checkQuad(){
        if (x<0||y<0)
    {
        cout<<"Enter the coordinates again"<<endl<<"The points must be in 1st quadrant"<<endl;
        return 0;
    }
    return 1;
    }
 };

 /**
    *
    * The distance() function finds distance between two given points.
    *
    * Parameters   : two Point objects
    *
    * Return Value : float that gives distance between two points
    *
    * 
     */
    float distance(Point p1,Point p2){
        float x= pow((p2.x-p1.x),2);
         float y= pow((p2.y-p1.y),2);
         float dis= sqrt((x+y));
         return dis;
    }
    /**
    *
    * The main() function takes input of two point and prints the distance between them.
    *
    * Parameters   : none
    *
    * Return Value : 0
    *
    * 
     */
 int main(){
     Point p[1];
     for (int i=0; i<2;i++){
         re:
     cout << "Enter the values of p"<<i+1 <<"(x,y):"<<  endl;
     cin >>p[i].x >>p[i].y ;
     if(p[i].checkQuad()==0){
         goto re;
     }
     }
     
     float dis= distance(p[0],p[1]);
    
    cout << "The distance between two given points is: "<< dis << endl;
 }
