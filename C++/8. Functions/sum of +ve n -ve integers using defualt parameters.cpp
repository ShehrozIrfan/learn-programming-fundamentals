/*
write a function that receives an integer array, its size and character + or - ,by default, the character should be '+'.The function returns the sum
of positive numbers stored in the array for the character '+'.It returns the sum of negative numbers for the character '-'.
*/

#include"iostream"
using namespace std;

int  check(int arr[],int size,char ch='+')
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		if(ch=='+')
		{
			if(arr[i]>0)
			{
				sum=sum+arr[i];
			}
		}
		else
		{
			if(arr[i]<0)
			{
				sum=sum+arr[i];
			}
		}
	}
	
	return sum;
}

int main()
{
	int size;
	cout<<"Enter size of array:";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter any integer(Positive/Negative):";
		cin>>arr[i];
	}
	int sum_p;
	sum_p=check(arr,size);
	int sum_n;
	sum_n=check(arr,size,'-');
	cout<<endl;
	cout<<"The sum of positive integers is:"<<sum_p<<endl;
	cout<<"The sum of negative integers is:"<<sum_n<<endl;
	return 0;
}

