 /*
Assigning one sturcture variable to other:
       A structure variable can be initialized by assigning another structure variable to it by using assignment operator as follows:
       student s={1,765,34.56,'A'};
       student a=s;
       The first line declares a sturcture variable s and initializes it.The second line declares another structure variable a and initializes it with 
       the values of s.One structure variable can be assigned to another structure variable only if both are of same type.
*/

/*
write a program that declares a structure to store marks and grade of a student.It defines two structure variables.It inputs the values in one variable
and assigns that variable to the second variable.It finally displays the values of both variables.
*/

#include"iostream"
using namespace std;

struct student
{
int marks;
char grade;	
};

int main()
{
	student s,a;
	cout<<"Enter Marks:";
	cin>>s.marks;
	cout<<"Enter Grade:";
	cin>>s.grade;
	a=s;
	cout<<"The first record is as follows:"<<endl;
	cout<<"Marks:"<<s.marks<<endl;
	cout<<"Grade:"<<s.grade<<endl;
	cout<<"The second record is as follows:"<<endl;
    cout<<"Marks:"<<a.marks<<endl;
	cout<<"Grade:"<<a.grade<<endl;
	
	return 0;
}
