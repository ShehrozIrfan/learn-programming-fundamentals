/*
Pass by value:
    A parameter passing mechanism in which the value of actual parameter is copied to formal parameters of called function is known as pass by value.
    if the function makes any change in formal parameter, it does not affect the values of actual parameters.It is the default mechanism for passing
    parameters to functions.
*/

//Program that explains the concept of Pass by value.

#include"iostream"
using namespace std;

int f(int);
int main()
{
	int i=10;
	cout<<"In main i="<<i<<"\n";
	
	f(i);
	cout<<"Back in main i="<<i<<"\n";
	
	return 0;
}

int f(int i)
{

	cout<<"In function f, i="<<i<<"\n";
	i*=2;
	cout<<"In function f, i is now ="<<i<<"\n";
	
	return i;
}