// Program that explains the concept of Global scope of an identifier.
/*
Global variable is used anywhere in the program.In global scope anything identified or declared outside of any function is visible to all functions
in that file.
*/

#include"iostream"
using namespace std;
 
int i;   //global variable.

void f(void);

int main()
{
	i=10;
	cout<<"within main i="<<i<<"\n";
	
	f();
}

void f(void)
{
	cout<<"Inside function f, i="<<i<<"\n";
	i=20;
}