// Function with parameters but no return type.

#include"iostream"
using namespace std;
void sum(int a,int b);
int main()
{
	int a,b;
	
	cout<<"Enter two numbers.\n";
	cin>>a>>b;
	
	sum(a,b);
	
	return 0;
}

void sum(int a,int b) //Inside PARENTHESIS are the function parameters.Here a,b are the function parameters.
{
	cout<<"Sum="<<a+b;
}
