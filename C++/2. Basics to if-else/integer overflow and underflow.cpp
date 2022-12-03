/*
Integer Overflow and Underflow:
      Integer overflow occurs when the value assigned to an integer variable is more than maximum possible value.
      Integer underflow occurs when the value assigned to an integer variable is less then possible minimum value.
      An integer variable can stored values from -32768 to 32767.If the assigned value is more than 32767, it is known as integer overflow.If the 
      value assigned is less than -32768,it is called integer underflow.
*/

//write a program that explains the concept of overflow and underflow.

#include"iostream"
using namespace std;
int main()
{
	short variable;
	
	variable=32767;
	cout<<variable<<"\n";
	
	variable=variable+1;
	cout<<variable<<"\n";
	
	variable=variable-1;
	cout<<variable<<"\n";
	
	return 0;
}