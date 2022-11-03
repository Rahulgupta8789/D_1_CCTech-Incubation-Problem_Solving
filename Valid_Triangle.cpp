/*
2.Accept angles of a triangle and check if it is a valid triangle.
  (i) Test case
  (ii)Test data
*/

#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	
	cout<<"Enter three angle of a triangle : "<<endl;
	cin>>a>>b>>c;
	int sum=a+b+c;
	if(sum==180 && a!=0 && b!=0 && c!=0)
	{
	cout<<"triangle is valid"<<endl;
  }
  else
  {
  cout<<"triangle is not valid.Please enter valid angles of traingle"<<endl;
  }		
}