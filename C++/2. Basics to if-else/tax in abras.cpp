/*
The kingdom of ABRACADABRA,where the unit of currency is abra,has the following income tax code:
first 5000 abra      : 0% tax
Next 10,000 abra     :10% tax
Next 20,000 abra     :15% tax
Abras after35,000    :20% tax
For example, someone earning 38,000 abra would owe:
    5000*0.0+10,000*0.10+20,000*0.15+3000*0.20 =4600 abras
    
    Write a code that ask user about his income and report the tax that he has to pay.
*/

#include"iostream"
using namespace std;
int main()
{
	float income;
	float totalTax,tax,tax1,tax2,tax3,tax4;
	
	cout<<"Please enter your income."<<"\n";
	cin>>income;
	
	tax1=5000*0.0;
	tax2=10000*0.10;
	tax3=20000*0.15;
	
	if(income>35000)
	{
		tax=income-35000;
		tax4=tax*0.20;
	}
	
	if(income<=5000)
	totalTax=tax1;
	
	if(income<=15000 && income>5000)
	totalTax=tax1+tax2;
	
	if(income<=35000 && income>15000)
	totalTax=tax1+tax2+tax3;
	
	if(income>35000)
	totalTax=tax1+tax2+tax3+tax4;
	
	cout<<"Your Total Tax on "<<income<<" abras is "<<totalTax<<" abras. \n";
	
	return 0;
}
