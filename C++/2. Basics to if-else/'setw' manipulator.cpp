/*
'setw' Manipulator:
The word 'setw' stands for set width.The setw manipulator is used to display value of an expression in specified columns.The value of expression can
be string or number.If the value of expression is less than specified columns,the additional columns are left blank from left side.The output 
automatically uses the required columns if output is larger than the specified columns.The use of setw has no effect on the output in this case.
The setw manipulator is applied only to the value that is inserted after it.The output right justified by default.The setw manipulator is part of 
iomanip
Syntax: the syntax of 'setw' manipulator is as follows:
setw(n);
the n indicates the number of columns in which the value is to be displayed.It can be an unsigned positive integer constant,variable or expression.
*/
//Write a program that explains the use of setw manipulator.

#include"iostream"
#include"iomanip"
using namespace std;
int main()
{
	int n=4563;
	double d=91.53;
	char str[]="OOP using C++";
	cout<<"("<<setw(5)<<n<<")"<<endl;
	cout<<"("<<setw(8)<<d<<")"<<endl;
	cout<<"("<<setw(16)<<str<<")"<<endl;
	return 0;
}