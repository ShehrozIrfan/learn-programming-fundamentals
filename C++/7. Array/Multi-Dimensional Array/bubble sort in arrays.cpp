
/* 
Bubble Sort:
      It is also known as exchange sort.It repeatedly visits the array and compares two items at a time.It swaps 
	  these two items if they are in the wrong order.It continues to visit the array until no swaps are needed
	  that means array is sorted . 
*/
//Program that stores five values in an array.It sorts the array using bubble sort.

#include<iostream>
using namespace std;
int main()
{
   int arr[5],i,j,temp;
   
   for(i=0;i<5;i++)
   {
   	cout<<"Enter Value\n";
   	cin>>arr[i];
	   }	
	cout<<"Original values in array:\n";
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"  ";
	   }   
	   
         for(i=0;i<5;i++)
		 {
		 	for(j=0;j<4;j++)
		 	{
		 		if(arr[j]>arr[j+1])
		 		{
		 			temp=arr[j];
		 			arr[j]=arr[j+1];
		 			arr[j+1]=temp;
				 }
			 }
				}	   
				
	cout<<"\nThe sorted array:\n";
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"  ";
				}			
 

     return 0;
} 
