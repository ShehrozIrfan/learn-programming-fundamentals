/*
'while' loop is the simplest loop of C++ language.This loop executes one or more statements while the given condition remains true.
Syntax:
       while(condition)
       {
       statement 1;
       statement 2;
            :
            :
       statement N;
                      
       } 
*/
//Program that displays Pakistan for 10 times using while loop.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n=1; //Here we declare the int type variable n=1.
    /*
    Now we are using while loop.We have to print Pakistan 10 times.So we will write in condition n<=10.Now first the while loop checks the condition
    as we declared n=1 it checks n<=10 which is true so it goes inside the loop body and prints Pakistan.And then add 1 to n. Now n=2 it goes to the
    condition and checks n<=10 that is true so it comes inside the loop body and prints Pakistan and then add 1 to n . Now n=3 it goes up and checks the 
    condition n<=10 which is true then it displays Pakistan and add 1 to n. And repeats the above process till n<=10. But when n=11 it goes up and 
    checks the condition n<=10 that is false now so the loop is not executed and it went outside the loop and end.
    */
    while(n<=10)
    {
     cout<<"Pakistan\n";
     n=n+1;           
    }
    getch();
}
