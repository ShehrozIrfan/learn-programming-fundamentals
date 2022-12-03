/*
Accessing Array Elements using Loops:
          An easier and faster way of accessing array elements is using loops.The following example show how array elements can be accessed using for 
          loop:
               
          int marks[5];
          for(int i=0;i<5;i++)
          marks[i]=i;
          
          The above example uses for loop to store different values in an array.It uses the counter variable i as an index.In each iteration,the value
          of i is changed.The statement marks[i] refers to different array element in each iteration. 
*/

//program that inputs five integers from the user and then stores them in array and then display them using loops.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[5],i;//Here we declare an array of integer type of length 5.
    
    for(i=0;i<5;i++)
    {
    cout<<"Enter an Integer\n"<<endl;
    cin>>arr[i];//it stores the valuees in arr[i].
    }
    
    cout<<"The values in array are\n"<<endl;
    for(i=0;i<5;i++)
    {
    cout<<arr[i]<<endl;//It displays the values stored in arr[i].                
    }
    
    getch();
    
}
