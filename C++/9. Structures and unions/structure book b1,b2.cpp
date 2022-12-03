/*
write a program that declares a structure to store BookID, price and pages of a book.It defines two structures variables and inputs values.It displays
the record of most costly book.
*/

#include"iostream"
using namespace std;

struct book
{
int bookId;
int price;
int pages;	
};

int main()
{
	book b1,b2;
	cout<<"Enter BookID,Pages and Price of Book 1:\n";
	cin>>b1.bookId>>b1.pages>>b1.price;
	cout<<"Enter BookID,Pages and Price of Book 2:\n";
	cin>>b2.bookId>>b2.pages>>b2.price;
	
	cout<<"The most costly book is:";
    if(b1.price>b2.price)
    {
    	cout<<"Book ID:"<<b1.bookId<<endl;
    	cout<<"Pages:"<<b1.pages<<endl;
    	cout<<"Price:"<<b1.price;
	}
	else
	{
		cout<<"Book ID:"<<b2.bookId<<endl;
    	cout<<"Pages:"<<b2.pages<<endl;
    	cout<<"Price:"<<b2.price;
	}
	return 0;
}