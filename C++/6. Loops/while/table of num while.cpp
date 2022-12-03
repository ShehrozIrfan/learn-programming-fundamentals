//program that inputs a number from the user and display the table of that number.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int n, a=1;
   
   cout<<"Enter a number=";
   cin>>n;
   
   while(a<=10)
   
   {
    
    cout<<n<<"*"<<a<<"="<<n*a<<endl;
/*let user enters 2 so first it dispalys 2 then display "*" and then dispaly a which is 1 and then display "=" and then apply formula for 
table that is n*1 it gives output as 2*1=2.*/
    a=a+1;
               
   }
    
    getch();
    
}
