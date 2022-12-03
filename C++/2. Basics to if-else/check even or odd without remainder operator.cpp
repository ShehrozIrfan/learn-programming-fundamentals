//Program to find even or odd number without using remainder " % " operator.

#include<iostream>

using namespace std;

int main()

{
	int number;
	
	cout<<"Enter any number\n";
	cin>>number;
	
	if(number!=0)
	{
	
	if(2*(number/2)==number)/* As we know that integer division truncates.So if user input 4 then 4/2=2 and 2*2=4 gives us the same number which is entered by user
	                           so when this happen the number is
	                           even but when user input 5 then 5/2=2 and 2*2=4 it didn't gave the same number which is entered by user so it means that the number is odd.*/ 
	{
		
		cout<<"The number is even";
	}
	
	if(2*(number/2)!=number)
   {  
      
      cout<<"The number is odd";
      
   }  
}

else
{
	cout<<"Invalid Input!!";
}
	
	return 0;
}