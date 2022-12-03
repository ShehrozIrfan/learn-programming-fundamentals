/*
write a program that declares a structure to store employee id and salary of an employee.It defines and initializes a structure variable and displays
it.
*/

#include"iostream"
using namespace std;

struct employee
{
int empId;
int salary;

};

int main()
{
	employee emp={20,17300};
	cout<<"ID:";
	cout<<emp.empId<<endl;
	cout<<"Salary:";
	cout<<emp.salary;
	
	return 0;
}