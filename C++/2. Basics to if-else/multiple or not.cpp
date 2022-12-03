//Program that inputs two numbers from the user and determines whether first number is a multiple of second number or not.

#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
 int a,b;
 
 cout<<"Enter two numbers\n";
 cin>>a>>b;
 
 if(b%a==0)
/* 
Let user enter first integer 6 and second integer 36. Then condition is applied that is 36%6 which is equal to 0.
So, the condition is true so first integer is a multiple of second integer because 6*6=36.
*/
 
{
cout<<"First number is a multiple of second";
}   
else
{
cout<<"First number is not multiple of second number";
}

getch();
    
}
