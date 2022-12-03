//program to calculate the area of a triangle.

#include<iostream>

using namespace std;

int main()

{
  
  float base,height,area;
  //we declare float data type because base and height and area might be floating point numbers.
  
  cout<<"Enter base and height of a triangle\n";
  cin>>base>>height;
  
  area=0.5*base*height;
  //formula for calculating area of triangle is 0.5*base*height.
  
  cout<<"Area of triangle="<<area<<endl;
  
  system("pause");  
    
}
