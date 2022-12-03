//This is a program to convert miles into kilometers(1 mile=1.609km) and kilometers into miles(1 km=0.621371192 miles).
#include<iostream>
using namespace std;
int main()
{
 float miles,km,x,y,z;
 cout<<"Please Enter Miles and Kilometers"<<endl;
 cin>>x>>y;
 miles=x*1.609; //formula for converting miles into km.
 km=y*0.6213;  //formula for converting km into miles.
 cout<<"Enter 1 for converting miles into kilometers or Enter 2 for converting kilometers into miles";
 cin>>z;
 if(z==1)
 {
 cout<<"Miles in km are="<<miles;
 }
 if(z==2)
 {
  cout<<"km in miles are="<<km;       
  }
 system("pause"); 
}
