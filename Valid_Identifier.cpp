/*
1.Write a Program to check if a given string is a valid C++ identifier.
  (i) Test case
  (ii)Test data
*/

#include <iostream>
using namespace std;

bool isValid(string str, int n)
{
   // If first character is invalid
    if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || str[0] == '_'))
    {
        return false;
    }
   // Traverse the string for the rest of the characters
    for (int i = 1; i < str.length(); i++) 
    {
       if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') 
           || str[i] == '_'))
        
        return false;
    }
        return true;    // String is a valid identifier
}

int main()
{
    // string str;
    // cout<<"Enter any string: ";
    // cin>>str1;  //input any string

    string str = "1Rahul12";

    int n = str.length();

   if (isValid(str, n))
   {
    cout << "Valid";
   }    
   else
   {
    cout << "Invalid";
   }
 
   return 0;
}