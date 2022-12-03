//program that inputs two numbers and find if second number is square of first or not.

#include<iostream>

using namespace std;

int main()

{
   
   int a,b;
   
   cout<<"Enter two numbers\n";
   cin>>a>>b;
   
   if(a*a==b)
   {
   cout<<"second number is square of first";          
   } 
   else
   {
   cout<<"second number is not square of first";
   }
    
    system("pause");
}
