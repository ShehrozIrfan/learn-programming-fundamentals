//Program to Input age and prints message "eligible" if the age is valid enough to have a driving license otherwise print "not eligible".

#include"iostream"
using namespace std;
int main()
{
	float age;
	
	cout<<"Enter your age\n";
	cin>>age;
	
	if(age==18 || age>18)
	cout<<"You are Eligible for having Driving License.\n";
	else
	cout<<"You are not eligible for having driving license.\n";
	
	
	return 0;
}