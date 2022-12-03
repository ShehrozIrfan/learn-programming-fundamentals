//program to calculate area of square.

#include<iostream>

using namespace std;
                        
int main()
{
  
  float height,width,area;  //Here we declare float data type because height and width might be floating point numbers.
  
  cout<<"Enter height and width of Square\n";
  
  cin>>height>>width; // Remember C++ is a case-sensitive language.So, Area and area are two different variables.
  
  area=height*width;  // Formula for finding the area of a square is Height*width.
  
  cout<<"Area of square="<<area;
  
  system("pause");    
    
}
