// Functions without parameteres and return type.

#include"iostream"
using namespace std;
void sum();
int main()
{
	sum();
	return 0;
}

void sum()
{
	int a,b;
	int sum;
	cout<<"Enter two numbers.\n";
	cin>>a>>b;
	sum=a+b;
	cout<<"Sum="<<sum;
}