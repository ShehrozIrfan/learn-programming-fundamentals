/*
write a program that inputs a number and checks whether it is a perfect number or not.A perfect number is a number that is numerically equal to the 
sum of its divisors.For example, 6 is a perfect number because the divisors of 6 are 1,2,3 and 1+2+3=6.
28,496, and 8128 are also perfect numbers.
*/

#include"iostream"
using namespace std;
int main()
{
	int num;
	int sum=0;
	
	cout<<"Enter Number:";
	cin>>num;
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
		sum=sum+i;
	}
	if(sum==num)
	cout<<num<<" is a Perfect Number";
	else 
	cout<<num<<" is not a Perfect Number";
	return 0;
}