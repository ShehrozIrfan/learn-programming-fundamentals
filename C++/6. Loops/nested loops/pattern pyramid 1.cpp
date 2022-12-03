/*
Program that prints the following pattern using nested loops.

    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
  
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
    /*
    In nested for loop the outer loop is responsible for number of rows, the first inner loop is responsible for spaces, and the second inner loop is 
    responsible for printing(what you desire).So, here we declare variables, for rows we use 'r' for spaces we use 'sp' for printing we use 'p'.
    */
    
    int r,sp,p;
    
    for(r=1;r<=5;r++)//As we need 5 rows in our pattern there we initialize r=1 and apply condition r<=5 and r++.
    {
                     
       for(sp=5;sp>=r;sp--)/*As we need 5 spaces in first row,4 in next row similarly,3,2,1 spaces required.There we initialize sp=5(as we need 5
       spaces in first row) and sp>=r means that it is greater than or equal to number of rows and sp--(it subtracts 1 from 5) so we will get 4 spaces
       in next line and so on. */
       {
       
       cout<<" ";
       }         
       
       for(p=1;p<=r;p++)/*in this we initialized p=1 and p<=r so it prints number that is the row number means when r=1 it prints 1 when r=2 it prints
       2 for two times and so on. Remember we also have to add space after printing the number see pattern there is a space after every number.*/
       {
       cout<<r<<" " ;
       }     
       
       cout<<endl;//We also need a line after a row so it ends the current row line and moves to next line as in given pattern.
    }

          getch();
}
