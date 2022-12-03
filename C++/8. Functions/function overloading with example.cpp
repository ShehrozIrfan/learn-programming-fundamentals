/*
Function Overloading:
The process of declaring multiple functions with same name but different parameters is called function overloading.The function with same name must
differ in one of the following ways:
Number of Parameters.
Type of Parameter.
Sequence of Parameter.
for example, the programmer can declare the following functions to calculate average:
float Average(int,int);
float Average(float,float);
float Average(int,float);
*/

/*
write three versions of function line.the first version takes no parameter and displays a line of 10 asterisks.the second version takes an integer 
parameter and displays a line of n asterisks.The third version takes an integer and a character as parameters and displays a line of given character
of n length.
*/

#include"iostream"
using namespace std;

void line();
void line(int n);
void line(int n,char c);

int main()
{
    line();
	line(5);
	line(8,'#');	
	return 0;
}
void line()
{
	for(int i=1;i<=10;i++)
	{
		cout<<"*"<<" ";
	}
	cout<<endl;
}
void line(int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<"*"<<" ";
	}
	cout<<endl;
}
void line(int n,char c)
{
	for(int i=1;i<=n;i++)
	{
		cout<<c<<" ";
	}
}