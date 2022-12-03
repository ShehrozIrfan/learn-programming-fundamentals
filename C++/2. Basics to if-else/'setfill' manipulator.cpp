/*
'setfill' Manipulator:
The setfill manipulator is used to replace the leading or trailing blanks in the output by the specified character.It requires one parameter to specify
the fill character.The parameter can be a character constant,character variable or an integer that represents the fill character in ASCII system.The
manipulator must be used with fixed width output.
*/

#include"iostream"
#include"iomanip"
using namespace std;
int main()
{
	char str[]="How you learn to code?";
	cout<<setw(30)<<setfill('*')<<str<<endl;
	cout<<setw(28)<<setfill('&')<<str<<endl;
	cout<<setw(25)<<setfill('?')<<str<<endl;

	return 0;
}