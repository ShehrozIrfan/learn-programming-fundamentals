//Program that inputs a number and displays whether it is divisible by 3 or not by using conditional operator.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    
    cout<<"Enter a number\n";
    cin>>n;
    
    if(n!=0)
    (n%3==0 ? cout<<"Divisible by 3\n" : cout<<"Not Devisible by 3\n");
    
    else
    cout<<"Not Possible";
    getch();
    
    
}
