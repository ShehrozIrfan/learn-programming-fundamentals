/*
Default Parameters:
The parameters initialized during function declaration are called default parameters.The default parameters allow user to call a function without
giving required parameters.The initialized values of default parameters are used if the user does not specify any value for the parameters in function
call.Default values can be constants,global variables or function calls.
*/
//write a program that used default parameters.
#include"iostream"
using namespace std;
void show(int n=50);//defaul parameter
int main()
{
show();//here the value of default parameter will be used because user did not specify any value here.
show(60);
show(70);	
	return 0;
}
void show(int n)
{
	cout<<"n="<<n<<endl;
}