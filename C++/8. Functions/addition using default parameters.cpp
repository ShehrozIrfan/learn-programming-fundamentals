//write a progam that uses default parameters to add two numbers.

#include"iostream"
using namespace std;
void add(int a=5,int b=15);
int main()
{
	add();
	add(4,6);
	add(2);
	return 0;
}
void add(int a,int b)
{
	int c;
	c=a+b;
	cout<<"The sum of two numbers is:"<<c<<endl;
}