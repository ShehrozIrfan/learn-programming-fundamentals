//program that inputs the marks of 3 subjects and find the average marks.If average is greater than 80 it displays "You are above standard" and "Admission granted!".

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int sub1,sub2,sub3,avg;
    
    cout<<"Enter Marks of three subjects\n";
    cin>>sub1>>sub2>>sub3;
    
    avg=(sub1+sub2+sub3)/3;
    
    if(avg>80)
    {
    cout<<"You are above standard.\n"<<"Admission Granted!";
    }
    else
    {
    cout<<"You are below standard.\n"<<"Admission not granted!";
    }
   getch();
}
