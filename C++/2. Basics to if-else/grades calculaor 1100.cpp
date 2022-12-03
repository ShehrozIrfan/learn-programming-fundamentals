//Assignment#1 , Programming Fundamentals.
/*
write a program that inputs obtained marks by student calculate the percentage(assuming total marks are 1100) and display grade according
to the following rules.

Percentage           Grade
>=80%                 A+
Between 70 and 80     A
Between 60 and 70     B
Between 50 and 60     C
Between 40 and 50     D
Between 33 and 40     E
Below 33              F

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
   int marks,percentage;
   
   cout<<"Enter Your Marks Out OF 1100\n";
   cin>>marks;
   
   
   percentage=(marks*100)/1100;
    
   if(percentage>=80)
   {
   cout<<"Your Grade is A+";                  
   } 
   
   if(percentage>=70 && percentage<80)
   {
   cout<<"Your Grade is A";
   }
   
   if(percentage>=60 && percentage <70)
   {
   cout<<"Your Grade is B";
   }
   
   if(percentage>=50 && percentage<60)
   {
   cout<<"Your Grade is C";
   }
   
   if(percentage>=40 && percentage<50)
   {
   cout<<"Your Grade is D";
   }
   
   if(percentage>=33 && percentage<40)
   {
   cout<<"Your Grade is E";
   }
 
   if(percentage<33)
   {
   cout<<"Your Grade is F\n";
   cout<<"You are Fail";
   }
   getch();
}
