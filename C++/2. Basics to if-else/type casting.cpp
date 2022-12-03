//Type casting.

#include"iostream"
using namespace std;
int main()
{
	int a;
	float f;
	
	a=7;
	f=3.7;
	
	
	a=(int)f;
	/*
	when we write this as "a=f" then the compiler shows error because a floating point number cannot be stored in an integer.so for storing floating point number in an 
	integer we have to right "a=(int)f;" . now what will happen is as f=3.7 it truncates the decimal part and stores only 3 in an integer.
	This type of type casting is called Explicit type casting.
	
	if we write "f=a" then the compiler didn't show error because an integer can be stored in float data type.This type of type casting is called implicit type casting.
	*/
	
	cout<<a;
	cout<<"\n";
	


	
	return 0;
}