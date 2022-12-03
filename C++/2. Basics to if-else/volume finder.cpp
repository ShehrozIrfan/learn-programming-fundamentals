//This is a program to calculate the volume. As we know V= Length*Width*Height.
#include<iostream>
using namespace std;
int main()
{
  float l,w,h,volume;
  cout<<"Enter Length=";
  cin>>l;
  cout<<"Enter width=";
  cin>>w;
  cout<<"Enter Height=";
  cin>>h;  
  volume=l*w*h;
  //Formula for calculating volume.
  cout<<"Volume="<<volume<<endl;
  system("pause");
}
