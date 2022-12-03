//Program that inputs five numbers from the user in an array and then sorts this array.

#include "iostream"
using namespace std;
int main()
{
	int sort[5],i,j;
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Number\n";
		cin>>sort[i];
	}
	
    for(i=0;i<5;i++)
    {
    	for(j=0;j<4;j++)
    	{
    		if(sort[j]>sort[j+1])
    		{                
    			int temp;        //for swapping.
    			temp=sort[j];
    			sort[j]=sort[j+1];
    			sort[j+1]=temp;
			}
		}
	}
	cout<<"The sorted array is\n";
	for(i=0;i<5;i++)
	cout<<sort[i]<<" ";
	return 0;
}