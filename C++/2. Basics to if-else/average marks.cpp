// This is a program to find the avarage.
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	float avg;
	cout<<"Enter marks of your 5 subjects upto 100"<<endl;
	cin>>a>>b>>c>>d>>e;
	avg=(a+b+c+d+e)/5; 
	// formula for average
	cout<<"Average marks are:"<<endl<<avg<<endl;
	system("pause");
}
