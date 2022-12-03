//Program that inputs three numbers and display the smallest number by using nested if condition.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    
    cout<<"Enter three numbers\n";
    cin>>a>>b>>c;
    
    if(a>b)
    {
     if(a>c)
     {
      cout<<"'a' is greater\n"<<a<<endl;      
     }
    } 
    if(b>a)
    {
     if(b>c)
     {
     cout<<"'b' is greater\n"<<b<<endl;
     }
    }
    if(c>a)
    {
     if(c>b)
     {
     cout<<"'c' is greater\n"<<c<<endl;
     }      
    }

    getch();

}
