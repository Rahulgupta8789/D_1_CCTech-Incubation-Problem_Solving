/*
3.Co-ordinate of the center of a circle and radius is given.Co-ordinate of Point P(x,y) are also provided.
  Find out if Point P lies inside the circle, on the circle or outside the circle.
  (i) Test case
  (ii)Test data
*/

#include <iostream>
//#include <cmath>
#include <math.h>
using namespace std;
 
int main()
{
    int x1, y1, x2, y2, radius;
    float d;         //here d--> distance between point(x2,y2) and center point of circle(x1,y1)

    cout<<"Enter the center co-ordinates of the circle : "<<endl;
    cin>>x1>>y1;
    cout<<"Enter the point co-ordinates : "<<endl;
    cin>>x2>>y2;
    cout<<"Enter the radius of the circle : "<<endl;
    cin>>radius;

    //check for distance between point and center point of circle
    d = sqrt(pow(x2-x1, 2)+pow(y2-y1,2));           

    if(d>radius)
       cout<<"Point (x2,y2) lies outside the circle = "<<"("<<x2<<","<<y2<<")"<<endl;

    else if(d<radius)
        cout<<"Point (x2,y2) lies inside the circle = "<<"("<<x2<<","<<y2<<")"<<endl;

    else if(d==radius)
        cout<<"Point (x2,y2) lies on the boundary of circle = "<<"("<<x2<<","<<y2<<")"<<endl;

    else
        printf("Wrong Entry");

    return 0;
}