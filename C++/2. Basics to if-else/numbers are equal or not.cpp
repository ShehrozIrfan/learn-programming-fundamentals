//Program that input 2 numbers from the user and find either both are equal or not.

#include<iostream>

using namespace std;

int main()

{
   float a,b;
   
   cout<<"Enter two numbers\n";
   cin>>a>>b;
   
   if(a==b)
   {
   cout<<"Both the numbers are equal";        
   } 
   else
   {
   cout<<"Numbers are not equal"<<endl;
   } 
   system("pause");
}
