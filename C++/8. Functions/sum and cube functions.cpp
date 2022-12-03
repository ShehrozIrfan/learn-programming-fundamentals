/*
Program that inputs two integers.It passes first integer to a function that calculates and retuns its square.It passes second integer to another
function that calculates and returns its cube.The main() functions adds both returned values and displays the result.
*/
#include"iostream"
using namespace std;

float square(float);
float cube(float);

int main()
{
	int num1,num2;
	int ans;
	cout<<"Please enter a number\n";
	cin>>num1;
	cout<<"Please enter a number\n";
	cin>>num2;
	
	ans=square(num1)+cube(num2);
	
	cout<<square(num1)<<"+"<<cube(num2)<<"="<<ans;
}

float square(float num1)
{
	return num1*num1;
}
float cube(float num2)
{
	return num2*num2*num2;
}