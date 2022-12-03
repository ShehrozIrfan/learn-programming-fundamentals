/*
write a program that inputs a number from the user and prints the lowest and highest digit in the number. 
*/

#include"iostream"
using namespace std;
int main()
{
	int num;
	int high,low;
	int rem;
	cout<<"Enter Number:";
	cin>>num;
	int n;
	n=num;
	high=n%10;
	low=n%10;
	n=n/10;
	for(int i=n;i>1;i=i/10)
	{
		rem=i%10;
		if(rem>high)
		high=rem;
		if(rem<low)
		low=rem;
	}
	cout<<endl;
	cout<<"The highest digit of "<<num<<" is "<<high;
	cout<<endl;
	cout<<"The lowest digit of "<<num<<" is "<<low;
	return 0;
}
