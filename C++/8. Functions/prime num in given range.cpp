
//Program that prompts the user to enter the range (i.e minimum and maximum number) and display all the prime numbers in that range. 

#include"iostream"
using namespace std;
void prime_checker(int);

int main()
{
	
	int min,max;
	int ans;
	cout<<"Please enter the range from minimum to maximum.\n";
	cin>>min>>max;
	
	
	cout<<"Prime numbers in the range are..."<<"\n";
	for( int i=min;i<=max;i++)
	{
		prime_checker(i);
	}
	
}

void prime_checker(int min)
{
	int flag=0;
	for(int i=2; i<=min ; i++)
	{
		if(min%i==0)
		flag=flag+1;
	}
	if(flag==1)
	cout<<min<<"\n";
	

}



