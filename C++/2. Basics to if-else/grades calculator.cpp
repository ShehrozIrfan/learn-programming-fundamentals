// This is a program for grade calculator.
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout <<"Enter marks"<<endl;
	cin>>a;
	if(a>=90 && a<=100)
	{
		cout<<"You have A+ grade."<<endl;
	}
	else{
		if(a>=80 && a<=89)
		{
			cout<<"You have A- grade."<<endl;
		}
		else
		{
			if(a>=70 && a<=79)
			{
				cout<<"You have A grade."<<endl;
			}
			else
			{
				if(a>=60 && a<=69)
				{
					cout<<"You have B grade."<<endl;
				}
				else
				{
                    if(a>=50 && a<=59)
                    {
					cout<<"you have C grade"<<endl;
                    }
                else
                {
                    if(a>=33 && a<=49)
                    {
                    cout<<"you have D grade";
                    }
                    else
                    {
                    cout<<"you are fail"<<endl;
                    }
                }    
				}
			}
		}
	}
system("pause");
}
