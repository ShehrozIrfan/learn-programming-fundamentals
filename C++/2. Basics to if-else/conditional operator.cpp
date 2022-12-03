/*
Conditional Operator:
            It is a decision-making structure.It can be used in place of simple if-else structure.It is also called ternary operator as it uses three
            operands.
            syntax:
                   (conditio)? true-case statement:false-case statement;
            The condition is specified as relational or logical expression.The condition is evaluated to true or false.
            true-case is executed if expression evaluates to true.
            false-case is executed if expression evalutes to false.
*/
//Program that inputs marks of a student and displays "Pass" if marks are more than 33 and "Fail" otherwise by using conditional operator.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
    int n;
    
    cout<<"Enter your marks\n";
    cin>>n;
    
    cout<<"Result is  "<<(n>=33 ? "pass":"fail");
    
    getch();
    
    
}
