/* 
Program that inputs radius and user's choice.It calculates area of a circle if user choose 1 and it calculates circumference of circle if user choose 2.
*/

#include<iostream>
#include<conio.h>
#define Pi 3.14

using namespace std;
int main()
{
   float radius,area,circumference;
   int choice;
   
   cout<<"Please Enter Radius\n";
   cin>>radius;
   
   cout<<"Enter 1 for calculating Area Or Enter 2 for calculating Circumference \n";
   cin>>choice;
   
   if(choice==1)
   {
   area=Pi*radius*radius;
   cout<<"Area="<<area;
   } 
   if(choice==2)
   {
   circumference=2*Pi*radius;
   cout<<"Circumference="<<circumference;             
   }
   if(choice!=1 && choice!=2)
   {
   cout<<"Invalid Choice";
   }
   getch();
}
