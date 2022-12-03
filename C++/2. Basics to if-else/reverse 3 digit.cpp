//Program that inputs three digits number and display it in reverse order.

#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
  int n,a,b;
  
  cout<<"Enter a number\n";
  cin>>n;
  
  a=n/100;
  
  n=n%100;
  
  b=n/10;
  
  n=n%10;
  
  cout<<"Number in reverse order is="<<n<<b<<a;
  
  getch();  
    
    
}
