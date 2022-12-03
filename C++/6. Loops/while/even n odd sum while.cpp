/* program that inputs a positive number from the user it then displays the sum of all even numbers and sum of all
 odd numbers from 1 to the number entered by the user. */
 
 #include<iostream>
 #include<conio.h>
 using namespace std;
 int main()
 {
     
     int evensum,oddsum,n;
     evensum=0;
     oddsum=0;
     
     cout<<"Enter a positive number";
     cin>>n;
     /*
     Let user enters 4 which is stored in n so n=4.Now it checks the condition of while loop that is true because 4>0 now it comes inside the loop and
     execute first step that is if(n%2==0) so 4%2==0 it means that 4 is a even number so it comes inside the if and execute evensum=0+4 which implies
     evensum=4.now it skips the else part and goes to next step and execute n=n-1 that is n=4-1; so n=3 now it goes up and checks the while condition 
     that is true it goes inside and checks the if condition as 3%2!=0 so condition is false here so it execute the else part that is oddsum=oddsum+n
     implies that oddsum=0+3 so oddsum=3; .Now next it execute the step n=n-1 so n=3-1 that is n=2 . now it goes up again and checks the condition of 
     while loop that is true it comes in and checks the condition of if that is true so it execute evensum=4+2 implies that evensum=6 and it skips the
     else part and execute n=2-1 which is n=1 so it goes up and checks the condition of while loop that is true so it checks the condition of if that is
     false so it goes to else part and execute step oddsum=3+1 so oddsum=4.Then it execute n=1-1 so n=0 then it goes up again checks the while condition
     that is true and comes inside and checks the if condition that is false so it execute the else part that is oddsum=4+0 so oddsum=4 then it goes
     next and execute n=0-1 so n=-1 so it goes up and checks the while condition that is false so loop is terminated and it prints the values of 
     evensum and oddsum. 
     
     
     
     */
     while(n>=0)
     {
      if(n%2==0)
      {
       evensum=evensum+n;         
      }          
      else
      {
       oddsum=oddsum+n;   
      }          
      n=n-1;          
                
                
     }
     cout<<"Sum of Even Numbers="<<evensum<<endl<<"sum of Odd Numbers="<<oddsum;
     getch();
 }
