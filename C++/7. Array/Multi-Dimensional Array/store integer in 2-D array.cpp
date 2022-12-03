/*
Two-Dimensional Arrays:
       Two-Dimensional array can be considered as a table that consists of rows and columns.Each element in 2-D array is referred with the help of two indexes.One index is
	   used to indicate the row and the second index indicates the column of the element.
	   
Syntax:
         Data_Type Identifier[Rows][Cols];
    e.g;       int Arr       [4]   [3];              
		  
*/

//Program that stores integer values in an array of 2 rows and 4 columns.

#include<iostream>
using namespace std;
int main()
{
   int arr[2][4],i,j;
   
   for(i=0;i<2;i++)
   {
   	for(j=0;j<4;j++)
   	{
   		cout<<"Enter an Integer\n";
   		cin>>arr[i][j];
	   }
   }
   
   for(i=0;i<2;i++)
   {
   	for(j=0;j<4;j++)
   	{
   		cout<<arr[i][j]<<"\t";
   		
	   }
	   cout<<"\n";
   }
   
  return 0; 
}