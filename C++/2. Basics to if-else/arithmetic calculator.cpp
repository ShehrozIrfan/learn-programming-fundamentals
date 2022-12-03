// this is a program of a arithmetic calculator.
#include<iostream>
using namespace std;
int main()
{
	float a,b,sum,mul,div,sub,avg,square;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"enter second number"<<endl;
	cin>>b;
	sum=a+b;  // formula for sum.
        sub=a-b;  // formula for subtract.
	mul=a*b;  // formula for multiplication.
	div=a/b;  // formula for division.
	avg=sum/2; // formula for average.
	square=a*a; // formula for square.
	cout<<"sum is="<<sum<<endl;
	cout<<"subtration is="<<sub<<endl;
	cout<<"Multiplication is="<<mul<<endl;
	cout<<"Division is="<<div<<endl;
	cout<<"Average is="<<avg<<endl;
	cout<<"Square is="<<square<<endl;
	system("pause");
}
