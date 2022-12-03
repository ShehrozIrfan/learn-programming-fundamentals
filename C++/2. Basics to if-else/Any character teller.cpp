/*
Program that allows the user to enter any character through the keyboard and then tells whether its a uppercase letter or lowercase letter or a digit
or a special character.
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 
 char ch;
 
 cout<<"Enter any Key\n";
 cin>>ch;
 /* Now we are applying the condition for uppercase letters that is if character is Greater than or equal to A and less than or equal to Z.Then
 the character is a uppercase letter */ 
 if(ch>='A' && ch<='Z')
 {
 cout<<"You Entered a Uppercase Letter\n";
 }
 else
 /* Similarly we here apply the condition for lowercase letters that is if character is greater than or equal to 'a' and less than or equal to 'z'.Then
 the character is a lowercase letter. */
  if(ch>='a' && ch<='z')
  {
  cout<<"You Entered a Lowercase Letter\n";
  }
  else
  /* Now here we apply the condition for numeric digits that is if character is greater than or equal to '0' and less than or equal to '9'.Then
  the character is a digit. */
   if(ch>='0' && ch<='9')
   {
   cout<<"You Entered a Digit\n";
   }
  else
  {
  cout<<"You Entered a Symbol\n";
  }
  
  getch();
}
