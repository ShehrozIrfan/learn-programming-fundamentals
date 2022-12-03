/*
'setprecision' Manipulator:
The 'setprecision' manipulator is used to set the number of digits to be displayed after decimal point.It is applied to all subsequent floating point
numbers written to that output stream.The value is rounded with the use of this manipulator.
Syntax:
the syntax of 'setprecision' manipulator is as follows:
setprecision(n)
the n indicates the number of digits displayed after the decimal point.It can be an unsigned positive integer constant,variable or expression.
*/
//write a program that displays the values of different variables using setprecision manipulator.

#include"iostream"
#include"iomanip"
using namespace std;
int main()
{
	double r,a,b;
	a=1331.36476;
	b=2656.9198;
	r=a/b;
	cout<<r<<endl;
	cout<<setprecision(5)<<r<<endl;
	cout<<setprecision(4)<<r<<endl;
	cout<<setprecision(3)<<r<<endl;
	cout<<setprecision(2)<<r<<endl;
	cout<<setprecision(1)<<r<<endl;
	cout<<setprecision(0)<<r<<endl;

	
	return 0;
}