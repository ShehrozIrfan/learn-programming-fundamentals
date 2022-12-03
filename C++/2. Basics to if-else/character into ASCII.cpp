//This is a program to convert character into its ASCII value.
#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Enter ASCII value=";
	cin>>a;
	cout<<"The value of"<<a<<" is "<<int(a)<<endl;
	/*
	Here when we write int(a) it converts the value of Character into its ASCII value. Let the user enter ' a ' then the output will be 97,
	because the value of character 'a' in ASCII is 97.
	*/
system("pause");
}
