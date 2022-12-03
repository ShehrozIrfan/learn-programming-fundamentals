/*
Array of structures:
      An array of structures is a type of array in which each element contains a complete structure.It can be used to store many records.
*/
/*
write a program that declares a structure to store id,pages and price of a book.It defines an array of structures to store the records of five books.
It inputs the records of five books and displays the record of most costly book.
*/

#include"iostream"
using namespace std;

struct record
{
int id,pages,price;	
};

int main()
{
	record r[5];
	int max,m;
	for(int i=0;i<5;i++)
	{
		cout<<"Book ID:";
		cin>>r[i].id;
		cout<<"Pages:";
		cin>>r[i].pages;
		cout<<"Price:";
		cin>>r[i].price;
	}
	max=r[0].price;
	m=0;
	for(int i=0;i<5;i++)
	{
		if(r[i].price>max)
		{
			max=r[i].price;
			m=i;
		}
	}
	
	cout<<"\nThe record of most costly book:\n";
	cout<<"Book ID:"<<r[m].id<<endl;
	cout<<"Pages:"<<r[m].pages<<endl;
	cout<<"Price:"<<r[m].price;
	
	return 0;
}