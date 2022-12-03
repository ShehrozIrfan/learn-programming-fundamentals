//This program is to calculate the sum of two numbers entered by user.
#include<iostream>
using namespace std;
// this " ; " is a statement terminator.It is used to end a statement.
int main()
{
    int a;
    int b;
    // two variables 'a' and 'b' are declared of type int.
    int sum;
    // sum is declared to calculate the sum.
    cout<<"enter first number";
    cin>>a;
    // first integer is stored in 'a'
    cout<<"enter second number";
    cin>>b;
    // second integer is stored in 'b'
    sum=a+b;
    // this is the formula to calculate the sum.
    cout<<"sum is"<<sum<<endl; //endl is used to end the line.
    /*
    'sum is' will be displayed as a message on the screen. which tells that your sum is.
    and the 'sum' will display the sum after your 'sum is'
    */
    system("pause");
}
