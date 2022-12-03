/*
Program to Determine status of student (dropped/probation/safe).Student is dropped if gpa is less than 1.7, on probation if gpa is greater than or equal to 1.7 but less than
2.0,otherwise student is safe.
*/

#include"iostream"
using namespace std;
int main()
{
	float gpa;
	
	cout<<"Please enter your GPA\n";
	cin>>gpa;
	
	if(gpa>=0.0 && gpa<=4.0)
	{
		if(gpa<1.7)
		cout<<"You are Dropped\n";
		else if(gpa>=1.7 && gpa<2.0)
		cout<<"You are on Probation\n";
		else
		cout<<"You are Safe\n";
	}
	else
	{
		cout<<"Invalid GPA!!\n";
	}
	
	return 0;
}