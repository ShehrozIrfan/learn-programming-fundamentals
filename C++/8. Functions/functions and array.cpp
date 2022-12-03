/*
Functions and Arrays:
          An array can be passed to a functions as parameter.When an array is passed as parameter to a function,only the address of first element of the
          array is passed.An array is passed by reference not by value.A separate copy of the array is not created in the function.
Syntax:
        return-type function-name(parameter[]);
Example:
        void display(int[]);
        
Calling a Function with Array Parameter:
          A function with array parameter is called by giving the name of the array as actual parameter.The index of the array is not used in function
          call.The name of the array refers to the memory address of its first element.The memory address is passed to the function.The function then
          accesses the array by using the memory address.
*/

//Program that inputs five integers in an array and passes the array to a function.The function displays the values of the array.

#include"iostream"
using namespace std;

void show(int arr[]);

int main()
{
	int num[5],i;
	cout<<"Enter five integers:"<<"\n";
	for(i=0;i<5;i++)
	{
		cin>>num[i];
    }
    
    show(num);
    
}

void show(int arr[])
{
	int j;
	cout<<"The values in array:\n";
	for(j=0;j<5;j++)
	{
		cout<<arr[j]<<"\n";
	}
}