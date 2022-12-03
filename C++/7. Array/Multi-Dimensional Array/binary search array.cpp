/*
program that initializes an array of ten integers.It inputs an integer from the user and searches
the value in the array using binary search.
 */

#include<iostream>
using namespace std;
int main()
{
	 int arr[10]={1,2,3,4,5,6,7,8,9,10};
	 
	 int i,n,mid,start,end;
	 
	 start=0;
	 end=9;
	 int  loc=-1;
	 
	 cout<<"Enter any number to find\n";
	 cin>>n;
	 
	 while(start<=end)
	 {
	 
	 mid=(start+end)/2;
	 
	 if(arr[mid]==n)
	 {
	 	
	 	loc=mid;
	 	
	 	break;
	 }
	 
	 else
	   if(n<arr[mid])
	   {
	   	end=mid-1;
	   }
	 else
	 {
	 	start=mid+1;
	 }
	 
	 }
	 if(loc==-1)
	 {
	 	cout<<n<<"not found!!"<<endl;
	 }
	 else
	 {
	 	cout<<n<<"  Found at index  "<<loc<<endl;
	 }
    
	return 0; 
}