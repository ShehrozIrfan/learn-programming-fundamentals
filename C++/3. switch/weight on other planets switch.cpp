/*
Julio Cesar Chavez Mark VII is an interplanetory space boxer, who currently holds the championship belt for various weight categories on many of different planets
within our solar system.However, it is often difficult for him to recall what his "target weight" needs to be on earth in order to make the weight class on other
planets.
Write a code to help him to keep track of this.
It should ask him what his earth weight is, and to enter a number for the planets he wants to fight on. It should then compute his weight on the destination planet based
on the table below:

#     Planet        Relative Gravity
1     Venus         0.78
2     Mars          0.39
3     Jupitor       2.65
4     Saturn        1.17
5     Uranus        1.05
6     Neptune       1.23

So, for example, if Julio weights 128lbs. on earth, then he would weigh just under 50lbs. on Mars, since Mars gravity is 0.39 times earth's gravity.(128*0.39 is 49.92)

*/

#include"iostream"
using namespace std;
int main()
{
	float weight;
	int num;
	cout<<"Please enter your current Earth Weight\n";
	cin>>weight;
	
	cout<<"\n"<<"I have information for the following Planets.\n";
	cout<<"1-Venus"<<"\n"<<"2-Mars"<<"\n"<<"3-Jupitor"<<"\n";
	cout<<"4-Saturn"<<"\n"<<"5-Uranus"<<"\n";
	cout<<"6-Neptune"<<"\n\n";
	
	cout<<"Which Planet are You Visiting?"<<"\n"<<"Please Enter number from 1 to 6\n";
	cin>>num;
	
	if(num>=1 && num<=6)
	{
		switch(num)
		{
		
		case 1:
			{
				weight=weight*0.78;
				cout<<"Your weight would be "<<weight<<" pounds on that Planet."<<"\n";
                break; 		
			}
		case 2:
			{
				weight=weight*0.39;
				cout<<"Your weight would be "<<weight<<" pounds on that Planet."<<"\n";
				break;
			}
		case 3:
			{
				weight=weight*2.65;
				cout<<"Your weight would be "<<weight<<" pounds on that Planet."<<"\n";
                break; 			
			}
		case 4:
			{
				weight=weight*1.17;
				cout<<"Your weight would be "<<weight<<" pounds on that Planet."<<"\n";
			    break;
			}
		case 5:
			{
				weight=weight*1.05;
				cout<<"Your weight would be "<<weight<<" pounds on that Planet."<<"\n";
			    break;
			}
		case 6:
			{
				weight=weight*1.23;
				cout<<"Your weight would be "<<weight<<" pounds on that Planet."<<"\n";
			    break;
			}
			
		default:
			cout<<"Invalid Input!!"<<"\n";
		}
	}
	
	else
	{
		cout<<"Invalid Input!!"<<"\n";
	}
	
	return 0;
}