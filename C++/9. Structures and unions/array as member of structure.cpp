/*
Array as member of Structure:
     The array stored in a structure can be accessed by using both dot operator and index.The dot operator is used to refer to the array.The index
     is used to access the individual element of the array.
*/
/*
write a program that declares a structure to store roll no and marks of five subjects.It defines a structure variable,inputs the values and displays
roll no, marks and average marks.
*/

#include"iostream"
using namespace std;

struct data 
{
int rollNo;
int marks[5];	
};

int main()
{
	data a;
	int sum=0;
	float avg;
	cout<<"Enter Roll Number:";
	cin>>a.rollNo;
	cout<<"Enter marks of five Subjects:\n";
	for(int i=0;i<5;i++)
	{
		cin>>a.marks[i];
		sum=sum+a.marks[i];
	}
	avg=sum/5;
	
	cout<<"Roll Number:"<<a.rollNo<<endl;
	cout<<"Total Marks:"<<sum<<endl;
	cout<<"Average:"<<avg;
	return 0;
}