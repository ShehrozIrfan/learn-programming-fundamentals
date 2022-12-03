//Program that uses all arithmetic operators on two numbers using functions.

#include<iostream>
using namespace std;

int add(int num1,int num2)
{
	
	int addition;
	
	addition=num1+num2;
	
	return addition;
	
}

int subtract(int num1,int num2)
{
	int subtract;
	
	subtract=num1-num2;
     
    return subtract; 
}

int multiply(int num1,int num2)
{
	
	int multiply;
	
	multiply=num1*num2;
 
    return multiply; 
}

int division(int num1,int num2)
{
	
	int division;
	
	division=num1/num2;
 
    return division; 
}

int remainder(int num1,int num2)
{
	
	int remainder;
	
	remainder=num1%num2;
	
	return remainder;
}

int main()
{
	int a,b;
	
	cout<<"Please Enter two numbers\n";
    cin>>a>>b;
    
    if(b!=0)
    {
    	cout<<"Division of Numbers="<<division(a,b)<<"\n";
	}
    else
    {
    	cout<<"Division is not possible\n";
	}
	
    cout<<"Multiplication of numbers="<<multiply(a,b)<<"\n";
    
    cout<<"Remainder="<<remainder(a,b)<<"\n";
    
    cout<<"Addition="<<add(a,b)<<"\n";

    return 0;
}