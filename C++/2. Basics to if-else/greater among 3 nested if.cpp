//Program to check greater among three numbers using nested if.

#include"iostream"
using namespace std;
int main()
{
	int num_1,num_2,num_3;
	cout<<"Enter three numbers\n";
	cin>>num_1>>num_2>>num_3;
	
	if(num_1==num_2 && num_2==num_3)
	{
		cout<<"All the numbers are equal.\nYou must have to enter three different numbers to get the greatest number.\n";
	}
	else
	if(num_1==num_2 || num_1==num_3 || num_2==num_3)
		{
			cout<<"Two of the entered numbers are equal.\nYou must have to enter three different numbers to get the greatest number.";
		}
	else	
		if(num_1>num_2)
        {
        	if(num_1>num_3)
        	{
        		cout<<num_1<<" is greater.\n";
			}
			else
			cout<<num_3<<" is greater.\n";
			}	
		else
		{
			if(num_2>num_3)
			{
				cout<<num_2<<" is greater.\n";
			}
			else
			{
				cout<<num_3<<" is greater.\n";
			}
		}
		
		return 0;
 
}