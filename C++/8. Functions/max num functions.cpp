/*
Program that inputs two numbers in main() function,passes these numbers to a function.The function displays the maximum number.
*/

#include<iostream>
using namespace std;

void maxNum(int num1,int num2);/* We declare function here because it is compulsory because we define function after main() function. */

int main()
{
	int num1,num2;
	
	cout<<"Enter two numbers\n";
	cin>>num1>>num2;
	
	maxNum(num1,num2);
	
	return 0;
}

void maxNum(int num1,int num2)
{
	if(num1>num2)
	cout<<"Maximum="<<num1;
	else
	cout<<"Maximum="<<num2;
}