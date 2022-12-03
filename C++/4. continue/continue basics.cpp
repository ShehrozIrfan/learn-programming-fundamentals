/*
'continue' statement:
           The Continue statement is used in the body of the loop.It is used to move the control to the start of the loop body.when this statement is
           executed in the loop body,the remaining statements of current iteration are not executed.The control directly moves to the next iteration.
*/
//Example
//program to print HELLOW! five times using for loop use continue statement inside the loop body.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x;
    
    for(x=1;x<=5;x++)
    {
    
    cout<<"HELLO!\n"<<endl;
    continue;
    cout<<"Knowledge is power";
    }
    
    getch();
}
/*
Explanation:
            the above example has two cout statements.One statement is before the continue statement and one is after continue statement.The second
            statement is never executed.this is because each time continue statement is executed,the control moves back to the start of the body.So
            "Knowledge is power" is never displayed.
*/
