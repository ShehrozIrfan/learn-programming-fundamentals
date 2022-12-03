// Input two numbers 'a' and 'n' and calculate a^n.

#include"iostream"
using namespace std;
int main()
{
	int base , exponent;
	int result=1;
	
	cout<<"Enter base\n";
	cin>> base;
	
	cout<<"Enter exponent\n";
	cin>>exponent;
	
	for(int count=1; count<=exponent; count++)
	{
		result= result*base;
	}
	
	cout<<base<<"^"<<exponent<<"="<<result;
	
	return 0;
	
}