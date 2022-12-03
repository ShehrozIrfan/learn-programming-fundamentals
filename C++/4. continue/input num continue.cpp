//Program that inputs a number from the user using for loop.It displayed the number,if it is greater than 0 otherwise it inputs next number using continue statement.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a, n;
    
    for(a=1;a<=5;a++)
    {
    cout<<"Enter a Number\n";
    cin>>n;
    
    if(n<=0)
    {
    continue;//if this condition is true then it take input from the user and didn't show message you entered that number.
    }
    cout<<"You Entered\n"<<n<<endl;//when the if condition is false then it displays the message you entered that numbeer.
    }
    
    getch();
}
