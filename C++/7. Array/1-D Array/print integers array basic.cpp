//Program that inputs five integers from the user and stores them in an array.It then displays all values in an array without using loops.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
    int arr[5];//Here we declare an array of length 5.
    
    cout<<"Enter five integers\n"<<endl;
    cin>>arr[0]; //Array always starts from 0.The value of first integer is stored in this array and so on.
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];
    cin>>arr[4];
    
    cout<<"\nThe Values in Array are:\n"<<endl;
    cout<<arr[0]<<endl;//it displays the value that is stored in an array.
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    
    
    getch();
    
}
