
//This is a program to separate the digits entered by the user.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,n;
	cout<<"enter a 4 digit number"<<endl;
	cin>>n;
	a=n/1000;
	n=n%1000;
	b=n/100;
	n=n%100;
	c=n/10;
	d=n%10;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
system("pause");
}
