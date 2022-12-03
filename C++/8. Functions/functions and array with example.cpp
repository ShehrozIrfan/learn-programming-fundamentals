/*
Functions and Arrays:
   An array can be passed to a function as parameter.When an array us passed as parameter to a function, only the address of first element of array
   is passed.An array is passed by reference not by value.A separate copy of the array is not created in the function.
   A function with array parameter is called by giving the name of the array as actual parameter.The index of the array is not used in function call.
   The name of the array refers to the memory address of its first element.The memory address is passed to the function.The function then accesses the 
   array by using the memory address.
*/
//write a program that inputs five integers in an array and passes the array to a function.The function displays the values of the array.

#include"iostream"
using namespace std;

void test(int arr[]);

int main()
{
	int num[5];
	cout<<"Enter five integers:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>num[i];
	}
	test(num);
	
	return 0;
}
void test(int arr[])
{
	cout<<"The values in array:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
