/*
write a program that inputs an integer and prints if it is prime or composite.A number is prime if it has factors 1 and itself,otherwise it is a 
composite number.
*/
#include"iostream"
using namespace std;
int main()
{
	int num;
	int count=0;
	cout<<"Enter Number:";
	cin>>num;
	for(int i=1;i<=num/2;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==1)
	cout<<num<<" is a Prime number";
	else
	cout<<num<<" is a Composite number.";
	return 0;
}