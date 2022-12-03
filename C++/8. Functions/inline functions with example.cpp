/*
Inline Functions:
The function declared with keyword inline is known as inline function.The inline function is declared before main function.Only very small functions 
are declared as inline functions.The code of function body is inserted at each function call if the function is declared as inline function.It allows
the program to execute the function statements without shifting control from calling function.It saves time and increases program's efficiency.
The code of function body is repeated at each function call.It takes more memory than normal function call.That is why the inline functions must only
be used if the function body contains a small number of statements.
*/

//write a program that uses inline function.

#include"iostream"
using namespace std;

inline int square(int n)
{
	return n*n;
}

int main()
{
	cout<<square(2)<<endl;
	cout<<square(7)<<endl;
	cout<<square(9)<<endl;
	return 0;
}