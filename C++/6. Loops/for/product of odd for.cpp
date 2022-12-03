//Program that displays product of all odd numbers from 1 to 10 using for loop.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int product,num;
    product=1;
    
    for(num=1;num<=10;num=num+2)
    /*
    here we use num=num+2 because we are given to find the product of only odd numbers as we initialized num=1 so num=1+2 implies that num=3 and 
    so on in this way it always give a odd number. 
    */
    {
    product=product*num;
    }
    cout<<"Result is\n"<<product;
    getch();
    
}
