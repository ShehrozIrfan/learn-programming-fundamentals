/*
write a program that declares a structure to store day, month, and year of birth date.It inputs three values and displays date of birth in 
dd/mm/yy format.
*/

#include"iostream"
using namespace std;

struct date
{
int day;
int month;
int year;	
};

int main()
{
	date d;
	cout<<"Enter day:";
	cin>>d.day;
	cout<<"Enter Month:";
	cin>>d.month;
	cout<<"Enter Year:";
	cin>>d.year;
	cout<<"Your date of birth is:"<<d.day<<"/"<<d.month<<"/"<<d.year;
	
	return 0;
}