// This is a program to check whether the character is uppercase or lowercase.
#include<iostream>
using namespace std;
int main()
{
  char a;
  cout<<"Enter Any Character";
  cin>>a;
  if(a>=97 && a<=122)
  /*
  here we write a>=97 && a<=122 because the ASCII value of lowercase alphabets starts from 97 and ends on 122.
  It means that if the user entered lowercase 'a'.Then the program check the condition a>97 && a<=122.The condition will be true 
  because the ASCII value of lowercase 'a' is 97. so it gives message you entered a lowercase alphabet.
  */
  {
   cout<<"You entered a lowercase letter.";        
           }
  else
  {
   if(a>=65 && a<=90)
   /*
   here we write a>=65 && a>=90 because the ASCII value of uppercase alphabets starts from 65 and ends on 90.
   It means that if the user entered uppercase 'A'. Then the program checks the condition a>=65 && a<=90.The condition will be true 
   because the ASCII value of Uppercase 'A' is 65. so it gives message you entered a uppercase alphabet.
   */
   {
    cout<<"You entered a uppercase letter."; 
           }
           else
           // This is because if user enters special characters it gives message INVALID CHARACTER.
           {
               cout<<"Invalid Character";
           }   
  }         
    system("pause");
}
