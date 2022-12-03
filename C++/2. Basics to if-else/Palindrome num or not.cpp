/*
write a program that inputs a number and checks whether it is a palindrome or not.A palindrome is a number that reads the same backwards as forwards
such as 62526 and 4994.
*/
#include"iostream"
using namespace std;
int main()
{
	int num;
	int n,rev,digit;
	rev=0;
	cout<<"Enter Number:";
	cin>>num;
	n=num;
	do
	{
		digit=n%10;
		rev=(rev*10)+digit;
		n=n/10;
	}
	while(n!=0);
	cout<<"The reverse of the number is:"<<rev<<endl;
	if(num==rev)
	cout<<"Number is palindrome";
	else
	cout<<"Number is not palindrome";
	return 0;
}