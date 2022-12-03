/*
Program that inputs a number in main function and passes the number to a function.the function displays the table of that number.
*/

#include<iostream>
using namespace std;

int table(int num);

int main()
{
	int num;
	
	cout<<"Enter a Number\n";
	cin>>num;
	
	table(num);
	
	return 0;
}

int table(int num)
{
	int counter;
	int table;
	
	for(counter=1;counter<=10;counter++)
	{
	 cout<<num<<"X"<<counter<<"="<<num*counter<<"\n";	
	}
	
	return table;
}