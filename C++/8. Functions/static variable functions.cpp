/*
Static Variable:
      A local variable declared with keyword static is called static variable.
      The keyword static is used to increase the lifetime of local variable.
      The scope of static variable is similiar to the scope of local variable.Static variable can be used only in the function in which it is
      decalred.
*/

/*
Write a program that calls a function for five times using loop.The function uses a static variable initialized to 0.Each time the function is called,
the value of static variable is incremented by 1 and is displayed on the screen.
*/

#include"iostream"
using namespace std;

void fun();

int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		fun();
	}
	
	return 0;	
}

void fun()
{
	static int n=0;
	n++;
	cout<<"Value of n="<<n<<"\n";
	
}