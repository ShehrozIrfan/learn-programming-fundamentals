/*
Program that uses four arrays numbers,squares,cubes and sums each consisting of 5 elements.The numbers array stores the values of its indexes,the square
array stores the squares of its indexes,the cubes array stores the cubes of its indexes and sums array stores the sum of corresponding indexes of three
arrays.The program should display the values of all arrays and the total of all values in sums array.
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int numbers[5];
    int squares[5];
    int cubes[5];
    int sum[5];
    int total=0;
    
    //Now store numbers in the arrays.
    
    for(int i=0;i<5;i++)
    {
            
     numbers[i]=i;
     squares[i]=i*i;
     cubes[i]=i*i*i;
     sum[i]=numbers[i]+squares[i]+cubes[i];       
            
    }
    //Output all the arrays and then add up all the sums. 
    
    cout<<"numbers:\t";
    for(int i=0;i<5;i++)
    cout<<numbers[i]<<"\t";
    cout<<"\n";
    
    cout<<"Squares:\t";
    for(int i=0;i<5;i++)
    cout<<squares[i]<<"\t";
    cout<<"\n";
    
    cout<<"Cubes:\t\t";
    for(int i=0;i<5;i++)
    cout<<cubes[i]<<"\t";
    cout<<"\n";
    
    cout<<"sums:\t\t";
    for(int i=0;i<5;i++)
    {
    cout<<sum[i]<<"\t";
    
        total+=sum[i];
    } 
     cout<<"\n";
     
     cout<<"Grand Total:"<<total; 
    
    getch();
}
