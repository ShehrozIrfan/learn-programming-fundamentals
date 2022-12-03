/*
Recursions:
A programming technique in which a function calls itself is known as recursion.A function that calls itself is called recursive function.The recursion
is a powerful technique.A recursive function must have atleast one termination condition that can be satisfied.Otherwise, the function will call
itself indefinitely.The factorial function has the termination condition n==0 that causes the recursive calls to move back.
*/
//write a program that inputs a number from user and calculates its factorial recursively.

#include"iostream"
using namespace std;

long int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int num;
	cout<<"Enter Number:";
	cin>>num;
	cout<<"Factorial of a Number is:"<<fact(num);
	return 0;
}