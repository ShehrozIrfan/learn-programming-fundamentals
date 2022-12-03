/*
Write a program that inputs a number and checks whether it is an Armstrong number or not.A number is an Armstrong number if the sum of the cubes of its
digits is equal to the number itself.For example, 371 is an armstrong number since 3^3+7^3+1^3=371.
*/

#include"iostream"
using namespace std;
int main()
{
int num;
int r,n;
int sum=0;

cout<<"Enter Number:";
cin>>num;
n=num;
while(n!=0)
{
	r=n%10;
	sum=sum+(r*r*r);
	n=n/10;
}	
if(sum==num)
cout<<"Number is an Armstrong Number\n";
else
cout<<"Number is not an Armstrong Number\n";

	return 0;
}