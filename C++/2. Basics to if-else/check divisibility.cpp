// This is a program to check the divisibilty.
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter a number"<<endl;
	cin>>a;
	cout<<"Enter another number"<<endl;
	cin>>b;
	if(a%b==0)
	{
		cout<<"a is dvisible by b."<<endl;
	}
	else
	{
		cout<<"a is not divisible by b."<<endl;
	}
	system("pause");
}
