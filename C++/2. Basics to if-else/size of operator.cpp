//size of operator is used to get the size of datatype.If we want to know how many bytes an int or float or char stores in memory we can use size of operator.
//Program to show the size of datatypes.

#include"iostream"
using namespace std;
int main()
{
	cout<<"size of int is "<<sizeof(int)<<" bytes."<<"\n";
	
	
	cout<<"size of char is "<<sizeof(char)<<" bytes."<<"\n";
	
	
	cout<<"size of float is "<<sizeof(float)<<" bytes."<<"\n";
	
	
	cout<<"size of double is "<<sizeof(double)<<" bytes."<<"\n";
	
	
	cout<<"size of short is "<<sizeof(short)<<" bytes."<<"\n";
	
	
	
	return 0;
}