/*
Program that initializes an array of ten integers.It inputs an integer from the user and searches the value in the array using binary search.
*/

#include<iostream>
using namespace std;
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	
	int start,mid,end;
	int loc=-1;
	int num;
	
	start=0;
	end=9;
	
	while(start<=end)
	{
		mid=(start+end)/2;
		
		if(arr[mid]==num)
		{
			loc=mid;
			break;
		}
		else if(num<arr[mid])
		{
			end=arr[mid]-1;
		}
		else
		{
			start=mid+1;
		}
	}
	
	if(loc=-1)
	{
		cout<<num<<" not found\n";
	}
	else
	{
	cout<<num<<" found at index "<<loc<<"\n";	
	}
	
	return 0;
	
}