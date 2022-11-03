/*
 write a program to accept a set of points. check if they lie on the X-axis, Y-axis or origin.
*/

#include<iostream>
using namespace std;

int main () 
{
  int x, y;			
  cout << "Insert the value for variable X and Y : "<<endl;
  cin >> x >> y;  //user input
  
    //Condition of first quadrant 
    if (x > 0 && y > 0)
    
cout << "point " << x << ", " << y << " lies in the First quadrant\n";
  
    //Condition of second quadrant
    else if (x < 0 && y > 0)
    
cout << "point " << x << ", " << y << " lies in the Second quadrant\n";
 
    //Condition of third quadrant
    else if (x < 0 && y < 0)
    
cout << "point " << x << ", " << y << " lies in the Third quadrant\n";
  
    //Condition of Fourth quadrant 
    else if (x > 0 && y < 0)
    
cout << "point " << x << ", " << y << "lies in the Fourth quandrant\n";
  
    //Condition of lie on the origin 
    else if (x == 0 && y == 0)
    
cout << "point " << x << ", " << y << " lies on origin\n";
  
    //On x-axis 
    else if (y == 0 && x != 0)
    
cout << "point " << x << ", " << y << " lies on x-axix\n";
  
    //On y-axis
    else if (x == 0 && y != 0)
    
cout << "point " << x << ", " << y << " lies on at y-axix\n";
  
return 0;
}