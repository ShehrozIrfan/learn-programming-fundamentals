/*
'goto' statement:
       The 'goto' statement is used to move the control directly to a particular location of the program by using label.A label is a name given to a 
       particular line of the program.A label is created with a valid identifier followed by a colon(:).
syntax:
       goto label;
       The 'label' indicates the lable to which the control is transferred.
*/

//Program that displays 'C++' 15 times using goto statement.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
  int  n=1;

  comehere: //It is the label.The control is directly move to this location of program using goto statement.label is followed by a colon(:).
  cout<<n<<"->C++\n"<<endl;
  n=n+1;
  
  if(n<=15) //Here we also have to apply the condition to terminate the goto otherwise it becomes infinite.
  goto comehere;//Now goto move the control to comehere label and gives output C++ till the condition in if is true.
  
  cout<<"End of Program";
  
  getch();

}
/*
How it works:
    the above program uses goto statement to repeat a statement.The if statement checks the value of n.If the value is 15 or less,the control
    moves back to the comehere lable .In this way,the required message appears 15 times.
*/
