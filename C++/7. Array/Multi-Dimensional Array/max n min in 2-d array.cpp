/*
Program that initializes a 2-D array of 2 rows and 4 columns and then displays the minimum and maximum number
in the array.
*/ 

#include<iostream>
using namespace std;
int main()
{
	int i,j,max,min;
	
	int arr[2][4]={{15,50,20,45},{25,65,80,70}};
	
	max=min=arr[0][0];//because array index starts from 0.
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
			}
			if(arr[i][j]<min)
			{
				min=arr[i][j];
			}
		}
	}
	cout<<"Maximum="<<max<<endl<<"Minimum="<<min<<endl;
	
	return 0;
}