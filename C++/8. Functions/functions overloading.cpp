/*
Functions Overloading:
                  Function overloading allows you to create multiple functions with the same name, so long as they have different parameters.
                  When overloading functions, the definition of the function must differ from each other by the types and/or the number of arguments list.
                  we cannot overload function declarations that differ only by return type.
                  
                  return type and name must be same for function overloading.Parameters must be different.
*/
//program which shows function overloading.

#include"iostream"
using namespace std;

void sum(int a, int b)//note in both the user defines functions return type and function name is same.
{ 
  cout<<a+b;
}

void sum(int a , int b , int c)
{
	cout<<a+b+c;
}


int main()
{
 sum(7,8);
 cout<<"\n";
 sum(7,8,9);
 
 return 0;	
}