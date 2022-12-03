//program that initializes an array.It inputs a value from the user and searches the number in the array.



#include<iostream>
using namespace std;
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int i,n,loc=-1;
	
	cout<<"Enter value to find\n";
	cin>>n;
	
	for(i=0;i<10;i++)
	
		if(arr[i]==n)
		loc=i;
    

		if(loc==-1)
		cout<<"Value not found in array\n";
		
		else
		cout<<"Value found at index\n"<<loc;
		
return 0;	
	
}