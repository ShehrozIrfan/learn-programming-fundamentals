/*
Nested Structure:
     A structure within a structure is known as nested structure.A nested structure is created when the member of a structure is itself a structure.
Accessing Members of Nested Structure:
     The member of nested structure can be accessed using multiple dot operators.The first dot operator refers the member variable of outer structure.
     The second dot operator refers the inner structure and so on.
*/

/*
write a program that uses two structures Result and Record.The Result structure stores marks and grade,Record structure stores roll number and a result
type.The program declares a variable of type Record,inputs roll number,marks and grade.It finally displays these values on the screen.
*/

#include"iostream"
using namespace std;

struct Result
{
int marks;
char grade;	
};
struct Record
{
	int rollNo;
	Result r;//nested structure
};
int main()
{
	Record rec;
	cout<<"Enter Roll Number:";
	cin>>rec.rollNo;
	cout<<"Enter Marks:";
	cin>>rec.r.marks;
	cout<<"Enter Grade:";
	cin>>rec.r.grade;
	cout<<endl;
	cout<<"You entered the following data:\n";
	cout<<"Roll Number:"<<rec.rollNo<<endl;
	cout<<"Marks:"<<rec.r.marks<<endl;
	cout<<"Grade:"<<rec.r.grade;
	return 0;
}