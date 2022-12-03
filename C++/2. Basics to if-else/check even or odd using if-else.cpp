//Now we are starting with if-else statements.
/*
The syntax of if-else statement is as:
    if(condition)
    { //executes only if condition is true
     statements;            
     }
    else
    { //executes only if the upper condition is false.
     statements;   
    } 
*/
//This is a program to find the even or odd numbers using if-else statements.
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Please enter the number"<<endl;
    cin>>number;
    if(number%2==0)
    {
    cout<<"Number is even"<<endl;
    }
    /*
    ' % ' means remainder. it means that if the user typed number 10 then it is divided by 2. then its remainder is 0.
    so the condition is true. so number is even.
    */
    else
    {
    cout<<"Number is odd"<<endl;    
    }
    /*
    this condition execute only if upper condition is false. it means that if the user entered number 11. then it is divided by 2.
    then its remainder is 1 which is not 0. so the number is odd. 
    */
 
    system("pause");
}
