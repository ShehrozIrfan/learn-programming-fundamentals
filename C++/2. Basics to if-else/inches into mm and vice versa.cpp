//This is a program to convert inches into millimeters and millimeters into inches(1 inch=25.4mm)
#include<iostream>
using namespace std;
int main()
{
 float inches,mm,x,y,z;
 cout<<"Enter Inches and Millimeters";
 cin>>x>>y;
 mm=x/25.4;  
 inches=y*25.4;
 cout<<"Enter 1 to convert inches into mm or Enter 2 to convert mm into inches";
 cin>>z;
 if(z==1)
 {
 cout<<"Inches in mm are="<<mm;
 }
 if(z==2)
 {
 cout<<"mm in inches are="<<inches;
 }
 system("pause");
} 
