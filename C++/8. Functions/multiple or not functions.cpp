/*
Write a program that uses a function mul(int,int) to determine for a pair of integers whether the second integer is a multiple of the first.THe 
function should take two integers arguments and retuns 1(true) if second is a multiple of the first and 0(false) otherwise.The program should input
a series of pairs of integers.
*/

#include"iostream"
using namespace std;

int mul(int,int);

int main()
{
	int num1,num2;
	int ans;
	
	for(int i=0;i<3;i++)
	{
		cout<<"\nEnter a Pair of integers\n";
		cin>>num1>>num2;
		if(num1==0 || num2==0)
		cout<<"Invalid Input!!";
		else{
		
		ans=mul(num1,num2);
		
		if(ans==1)
		cout<<num2<<" is a multiple of "<<num1;
		else
		cout<<num2<<" is not a multiple of "<<num1;
	}
	}
	
	return 0;
}

int mul(int num1, int num2)
{
	if(num2%num1==0)
	return 1;
	else 
	return 0;
}