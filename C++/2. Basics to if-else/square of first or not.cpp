//program to find if second number is square of first or not.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int a,b;
  cout<<"Enter two integers\n";
  cin>>a>>b;
  
  if(a*a==b)
  {
  cout<<"Second number is square of first";
  }  
  else
  {
  cout<<"Second number is not square of first";
  }
  getch();
}
