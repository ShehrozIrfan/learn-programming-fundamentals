//Program that displays countinng 1 to 100 using while loop.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
    int n=1;
    //we declare the int type varible n=1.
    
    while(n<=100)
    
    {
    /*
    here it first checks the condition n<=100 as n=1 so condition is true so it goes inside the loop body and first display 'n' that is 1 then it adds
    1 to n so now n=2 then it goes up and checks the condition that is true and display n that is 2 and then add 1 to n and repeats the process till
    n<=100 when this condition is false the loop is terminated. 
    */             
    cout<<n<<endl;
    
    n=n+1;
    
    }
    
    getch();
    
    
}
