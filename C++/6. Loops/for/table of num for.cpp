//Program that inputs table number and length of table and then displays the table using for loop.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int table,length,c;
    
    cout<<"Enter number for table\n";
    cin>>table;
    
    cout<<"Enter Length of table\n";
    cin>>length;
    
    for(c=1;c<=length;c++)
    {
    cout<<table<<"*"<<c<<"="<<table*c<<endl;//table*c is formula for calculating table here.
    }
   
    
    getch();
    
} 
