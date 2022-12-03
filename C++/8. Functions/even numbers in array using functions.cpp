/*
A program that inputs five integers in array and passes array to a function.The function counts even numbers in array and returns result to main 
function to display it.
*/

#include"iostream"
using namespace std;

int even(int arr[]);

int main()
{
	int num[5],i;
	cout<<"Enter five numbers:\n";
	for(i=0;i<5;i++)
	{
		cin>>num[i];
	}
	
	cout<<"The arrays contains "<<even(num)<<" even numbers."<<"\n";
	
	return 0;
}

int even(int arr[])
{
	int j,ans;
	ans=0;
	
	for(j=0;j<5;j++)
	{
		if(arr[j]%2==0)
		ans++;
	}
	
	return ans;
}