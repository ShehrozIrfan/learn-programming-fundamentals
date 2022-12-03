//Program using define directive to find the area of a circle.The value of PI is 3.1417
#include<iostream>
#define PI 3.1417
using namespace std;
int main()
{
 float r,area;
 cout<<"please enter radius of circle";
 cin>>r;
 area=PI*r*r; // formula for finding area of a circle. 
 cout<<"Area of a circle="<<area;
 system("pause");   
}
