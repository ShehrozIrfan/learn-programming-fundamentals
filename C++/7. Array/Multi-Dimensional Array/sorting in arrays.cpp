//program that gets five inputs from the user in an array and then sorts this array in ascending order(pg#222,It series C++)

#include<iostream>
using namespace std;
int main()
{
	
int arr[5],i,j,min,temp;

      for(i=0;i<5;i++)
      {
	cout<<"Enter value\n";
	cin>>arr[i];
      }

cout<<"Original values in array:\n";
      for(i=0;i<5;i++)
      { 
 	cout<<arr[i]<<"  ";
      } 

for(i=0;i<4;i++)
{
	min=i;
	  for(j=i+1;j<5;j++)
	  {
	  	if(arr[j]<arr[min])
	  	{
	  		min=j;
		  }
		  if(min!=i)
		  {
		  	temp=arr[i];
		  	arr[i]=arr[min];
		  	arr[min]=temp;
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