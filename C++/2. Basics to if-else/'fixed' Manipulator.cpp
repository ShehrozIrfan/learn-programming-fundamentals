/*
'fixed' Manipulator:
the fixed manipulator is used to further control the output of floating-point numbers.It displays the floating-point numbers in a fixed decimal format.
The following statement sets the output of floating-point numbers in a fixed decimal format:
cout.setf(ios::fixed);
All floating-point number after the above statement executes are displayed in the fixed decimal format until the manipulator fixed is disabled.It can
be disabled by using the stream member function unsetf as follows:
cout.unsetf(ios::fixed);
*/

#include"iostream"
#include"iomanip"
using namespace std;
int main()
{
	double d;
	d=456.000000;
	cout<<"fixed manipulator set:"<<endl;
	cout.setf(ios::fixed);
	cout<<d;
	cout<<endl;
	cout<<"fixed manipulator unset:"<<endl;
	cout.unsetf(ios::fixed);
	cout<<d;
	return 0;
}