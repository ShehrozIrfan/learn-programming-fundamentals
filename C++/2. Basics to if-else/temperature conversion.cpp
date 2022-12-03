//This is a program to convert temperature from celcius to fahrenheit.
#include<iostream>
using namespace std;
int main()
{
	float F,temp;
	cout<<"Enter temperature in celcius"<<endl;
	cin>>temp;
	F=((temp*9/5)+32);
	// Formula for converting temperature celcius to fahrenheit.
	cout<<"Temperature in Farenhite is"<<endl<<F<<endl;
	system("pause");
}
