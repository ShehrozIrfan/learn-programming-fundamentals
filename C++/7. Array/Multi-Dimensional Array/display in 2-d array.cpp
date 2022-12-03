//Program that initializes a two dimensional array of 2 rows and 3 columns and then display its values.

#include<iostream>
using namespace std;
int main()
{
     int arr[2][3]={1,2,3,4,5,6}; //this array can store 6 element as 2*3 =6.
     int i,j;
     
     for(i=0;i<2;i++)
     {
     	for(j=0;j<3;j++)
     	{
     		cout<<"arr["<<i<<"]"<<"arr["<<j<<"]"<<"="<<arr[i][j]<<"\t";
		 }
		 
		 cout<<"\n";
	 }


return 0;
}
