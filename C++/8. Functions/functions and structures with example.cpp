/*
Functions and structures:
The structures can also be used with functions.A function can accept structures as parameters.A function can also return a structure variable.The 
process of passing structures to a function is similiar to passing a simple variable.The structure used as parameter must be defined using it as 
parameter.
Passing Structure by Value:
A structure can be passed to a function by value.The method of passing a structure by value is same as passing a simple variable by value.
*/
/*
write a program that declares a structure to store marks and grades.It defines structure variable and inputs values.It passes the variable to a 
function that shows its contents.
*/
#include"iostream"
using namespace std;

struct data
{
int marks;
char grade;	
};

void test(data d);

int main()
{
	data d;
	cout<<"Enter Marks:";
	cin>>d.marks;
	cout<<"Enter grade:";
	cin>>d.grade;
	test(d);
	
	return 0;
}
void test(data d)
{
	cout<<"You entered the following data:"<<endl;
	cout<<"Marks:"<<d.marks<<endl;
	cout<<"Grade:"<<d.grade;
}