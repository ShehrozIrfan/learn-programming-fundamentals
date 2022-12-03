/*
Write a program that inputs five integers in array and passes array to a function.The function counts even numbers in array and returns result to 
main function to display it.
*/

#include "iostream"
using namespace std;

int even(int arr[]);

int main()
{
	int arr[5];
	cout<<"Enter five integers:"<<endl;
	for(int i=0;i<5;i++)
	cin>>arr[i];
	
	cout<<"The array contains "<<even(arr)<<" even numbers."<<endl;
	return 0;
}
int even(int arr[])
{
	int e=0;
	for(int j=0;j<5;j++)
	{
		if(arr[j]%2==0)
		{
			e++;
		}
	}
	return e;
}