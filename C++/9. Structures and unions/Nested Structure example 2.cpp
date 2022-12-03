/*
write a program that uses two structures date and phonebook.The date structure stores day,month and year.Phonebook structure stores name,city,telephone
and a date type.The program declares a variable of type phonebook,inputs values displays the values.
*/

#include"iostream"
#include"conio.h"
using namespace std;

struct date
{
int day;
int month;
int year;	
};
struct phonebook
{
	char fname[50],sname[50];
	char city[30];
	long long telephone;
	date birthday;//nested structure
};

int main()
{
	phonebook p;
	cout<<"Enter first Name:";
	cin>>p.fname;
	cout<<"Enter second Name:";
	cin>>p.sname;
	cout<<"Enter city:";
	cin>>p.city;
	cout<<"Enter Phone Number without dashes:";
	cin>>p.telephone;
	cout<<"Enter date of Birth in format (DD-MM-YY):\n";
	cin>>p.birthday.day>>p.birthday.month>>p.birthday.year;
	cout<<endl;
	cout<<"The size of structure variable is:"<<sizeof(p)<<" Bytes";
	cout<<endl;
	cout<<"You entered the following data:"<<endl;
	cout<<"Name:"<<p.fname<<" "<<p.sname<<endl;
	cout<<"City:"<<p.city<<endl;
	cout<<"Telephone:"<<p.telephone<<endl;
	cout<<"Date of Birth:"<<p.birthday.day<<"-"<<p.birthday.month<<"-"<<p.birthday.year<<endl;
	return 0;
}