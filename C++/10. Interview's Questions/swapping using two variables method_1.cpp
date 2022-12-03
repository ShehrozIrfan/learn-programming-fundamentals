//write a program to swap two numbers using two variables only.
/*
Note:
This program is very important because our OOP teacher who is a Gold Medalist,who also works with PITB(Punjab Information Technology Board) said when
we conduct interview for a job our first question for applicant is to write a program to swap two numbers when he has done it then we said swap two 
numbers using two variables and majority of applicants are unable to do this.So that's why this program is very important.There are multiple ways of 
solving this problem.
*/
//first method


#include"iostream"
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two integers:"<<endl;
	cin>>a>>b;
    cout<<"Before Swapping:"<<endl;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After Swapping:"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b;
		
	return 0;
}
