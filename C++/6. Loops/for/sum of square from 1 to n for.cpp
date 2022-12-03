//Program that finds the sum of the squares of integers from 1 to n. Where n is a positive value entered by the user.


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,c,sum=0;
    
    cout<<"Enter a number\n";
    cin>>n;
    
    for(c=1;c<=n;c++)
    {
    sum=sum+(c*c);//c*c finds the square of number that is stored in c and then added it into sum.
    }
    cout<<"sum="<<sum;
    
    getch();
    
}
