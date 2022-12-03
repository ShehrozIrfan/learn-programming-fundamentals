/*
write a program that declares a structure to store Roll No, Marks, Average and Grade of a student. The program should define a structure variable,
inputs the values and then displays these values.
*/

#include"iostream"
using namespace std;

struct data
{
int rollNo;
int marks;
char grade;	
};

int main()
{
	data d;
	cout<<"Enter Roll Number:";
	cin>>d.rollNo;
	cout<<"Enter Marks:";
	cin>>d.marks;
	cout<<"Enter Grade:";
	cin>>d.grade;
	cout<<"You entered the following data:\n";
	cout<<"Roll Number:"<<d.rollNo<<endl;
	cout<<"Marks:"<<d.marks<<endl;
	cout<<"Grade:"<<d.grade;
	
	return 0;
}