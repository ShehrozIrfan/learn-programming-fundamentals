/*
Enumerations:
  Enumerations are used to create new data types.An enumeration consists of a list of values.Each value has a unique number that starts from 0.
  An enumeration may contain the values which are different from the values of fundamentals data types.
*/
//write a program that declares an enumeration to store months of a year.

#include"iostream"
using namespace std;
int main()
{
	enum year{January,February,March,April,May,June,July,August,September,October,November,December};
	
	year y;
	y=May;
	cout<<"The value of y is:"<<y<<endl;
	
	return 0;
}
/*
how above program works:
The above program declares an enumeration with 12 values.The integer value of first element starts from 0 and so on.The program declares a variable
y of type year.The program assigns the March to y and then displays this value.
*/