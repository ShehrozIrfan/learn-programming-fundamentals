/*
Program to differentiate between call by value and call by reference.
*/

#include<iostream>
using namespace std;

void swapTwoNum(int num1,int num2)
{
	int temporary;
	
	cout<<"Before Swapping\n A="<<num1<<" B="<<num2;
	
	temporary=num1;
	
	num1=num2;
	
	num2=temporary;
	
	cout<<"\nAfter Swapping\n A="<<num1<<" B="<<num2;
}

int main()
{
	int num1,num2;
	
	cout<<"Enter Two Numbers\n";
	cin>>num1>>num2;
	
	swapTwoNum(num1,num2);
	
	return 0;
}
