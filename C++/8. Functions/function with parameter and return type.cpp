// Function with parameters and return type.

#include"iostream"
using namespace std;
int sum(int a,int b);
int main()
{
	int a,b,c;
	cout<<"Enter two numbers\n";
	cin>>a>>b;
	
	c=sum(a,b);
	cout<<"Sum="<<c;
	
	return 0;
}

int sum(int a,int b)
{
	return a+b; //Function return type.
}