#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"Enter second number"<<endl;
	cin>>b;
	if(a%2==0 && b%2==0)
	{
		cout<<"Both numbers are EVEN!!"<<endl;
	}
	else
	{
		if(a%2!=0 && b%2!=0)
		{
			cout<<"Both numbers are ODD!!"<<endl;
		}
		else
		{
			cout<<"One is EVEN and other is ODD number!!"<<endl;
		}
	}
	system("pause");
}
