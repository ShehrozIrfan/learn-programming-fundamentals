//Program to add two numbers using functions.

#include<iostream>
using namespace std;

int sumOfTwo(int num1,int num2) //function definition.

{
	int sum;
	
	sum=num1+num2;
	
    return sum;	
}

int main()

{
	int a,b;
	
	cout<<"Please Enter two numbers to add\n";
	cin>>a>>b;
	
	
	cout<<"Sum of entered two numbers="<<sumOfTwo(a,b); //Function call.
	
	return 0;
}