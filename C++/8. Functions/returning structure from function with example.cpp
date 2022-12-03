/*
Returning Structure from Function:
A function can also return a structure variable.The method of returning a structure variable from a function is same as returning a simple variable.
The return type of the function must be the type of structure to be returned.
*/

/*
write a program that declares a structure to store bookID,pages and price of a book.It declares two structure variables and inputs values.It passes
these variables to a function.The function returns the variable with more price.The program finally displays the values of the returned structure
variable.
*/

#include"iostream"
using namespace std;

struct book
{
int id;
int pages;
int price;	
};

book check(book x,book y);

int main()
{
	book a,b,r;
	cout<<"Enter book ID,Pages and Price:"<<endl;
	cin>>a.id>>a.pages>>a.price;
	cout<<"Enter book ID,Pages and Price:"<<endl;
	cin>>b.id>>b.pages>>b.price;
	r=check(a,b);
	cout<<"The more costly Book is:"<<endl;
	cout<<"BookID:"<<r.id<<endl;
	cout<<"Pages:"<<r.pages<<endl;
	cout<<"Price:"<<r.price;
	return 0;
}
book check(book x,book y)
{
	if(x.price>y.price)
	return x;
	else
	return y;
}
