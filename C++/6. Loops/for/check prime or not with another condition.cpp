//Program to check the number is prime or not.

#include<iostream>
using namespace std;
int main()
{
	int num;
	int count=0;
	
	cout<<"Enter Number\n";
	cin>>num;
	
	for(int counter=2;counter<=num;counter++)
	{
		if(num%counter==0)
		{
			count=count+1;
		}
	}
	
	if(count==1)
	{
		cout<<"Number is prime\n";
	}
	else
	{
		cout<<"Number is not prime\n";
	}
	
	return 0;
	
	
}

