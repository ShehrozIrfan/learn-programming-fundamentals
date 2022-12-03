/*
Static Variable:
    A local variable declared with keyword static is called static variable.The keyword static is used to increase the lifetime of local variable.
    Static variable can only be used only in the function in which it is declared.
    Static variables exist in the memory as long as the program is running.These variables are destroyed from the memory when the program terminates.
    Static variables are created in the memory when the function is called for the first time.
    A function that contains static variable runs faster than the function with local variables.
*/
/*
write a program that calls a function for five times using loop.The function uses a static variable initialized to 0.Each time the function is called
the value of static variable is is incremented by 1 and is displayed on the screen.
*/
#include"iostream"
using namespace std;

void test();

int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		test();
	}
	return 0;
}
void test()
{
	static int n=0;
	n++;
	cout<<"Value of n="<<n<<endl;
}
