//Program to find middle number i.e; the number which comes between two numbers, from given three numbers.

#include<iostream>
using namespace std;
int main()
{
	int num_1,num_2,num_3;
	
	cout<<"Enter Three numbers\n";
	cin>>num_1>>num_2>>num_3;
	
	  if(num_1==num_2 || num_1==num_3 || num_2==num_3)
	  cout<<"Two numbers are equal if you want to find middle number you must have to enter three numbers.";
	  else if(num_1>num_2 && num_1<num_3 || num_1>num_3 && num_1<num_2)
	  cout<<"Middle Number="<<num_1;
	  
	  else if(num_2>num_1 && num_2<num_3 || num_2>num_3 && num_2<num_1)
	  cout<<"Middle Number="<<num_2;
	  
	  else if(num_3>num_1 && num_3<num_2 || num_3>num_2 && num_3<num_1)
	  cout<<"Middle Number="<<num_3;
	  
	  else
	  cout<<"All the numbers are equal\n";
	  
	  return 0;
	  
}