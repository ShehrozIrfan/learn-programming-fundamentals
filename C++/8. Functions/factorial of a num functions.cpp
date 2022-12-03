/*
Program that inputs a number in main function and passes the number to a function.The function displays the factorial of that number.
*/

#include<iostream>
using namespace std;

void factorial(int num);

int main()
{
	int num;
	
	cout<<"Enter a number\n";
	cin>>num;
	
	factorial(num);
	
	return 0;
}
void factorial(int num)
{
	int counter;
	int factorial=1;
	
	for(counter=1;counter<=num;counter++)
	{
	factorial=factorial*counter;
	}
	
	cout<<"Factorial of a number is\n"<<factorial<<"\n";
}