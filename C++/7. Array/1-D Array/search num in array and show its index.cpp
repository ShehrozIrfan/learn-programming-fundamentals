//Program to search a number in an array if number found in array then show its index.Input 10 values in array from user.

#include"iostream"
using namespace std;
int main()
{
	int search[10];
	
	cout<<"Please Enter 10 numbers\n";
	for(int i=0;i<10;i++)
	{
		cin>>search[i];             //ten numbers will be stored in this array.
	}
	
	int key=7;
	/*
	Here we declare a variable 'key' and assigned it value which is '7'.Because we have to search 7 in this array. If '7' is found then we have to show its
	index. So, in the next step the variable 'key' is compared with array named 'search'.If value is found then it will show its index.
	*/
	
	for(int j=0;j<10;j++)
	{
		if(search[j]==key)
		{
			cout<<"Value found at index "<<j<<"\n \n";
		}
		else
		cout<<"Value not found at index "<<j<<"\n \n";
	}
	
	
	return 0;
}
