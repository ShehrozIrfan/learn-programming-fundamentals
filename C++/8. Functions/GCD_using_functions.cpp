/*
Program that inputs two integers in main() function and passes the values to a function.The function finds and returns the greatest common divisor.
The main() function then displays the returned value.
*/

#include"iostream"
using namespace std;

int GCD(int,int);

int main()
{
	int num1,num2;
	
	cout<<"Please enter two numbers.\n";
	cin>>num1>>num2;
	
	cout<<"Greatest Common Divisor is "<<GCD(num1,num2);
}

int GCD(int num1, int num2)
{
	int n,ans;
	if(num1<num2)
	n=num1;
	else
	n=num2;
	
	for(int i=1; i<=n ; i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			ans=i;
		}
	}
	
	return ans;
}