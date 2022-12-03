//Program that inputs a character from the user and checks whether it is a vowel or consonant using switch.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch; //we declare char data type because characters are stored in char.
    
    cout<<"Enter an Alphabet\n";
    cin>>ch;
    
    
    switch(ch)
    {
          {  //here we apply the cases for vowels that are A,E,I,O,U/a,e,i,o,u so if user enter any of these it prints ita a vowel.
          case 'A' :
          case 'a' :
          cout<<"You Entered Vowel\n";
          break;
          }
          {
          case 'E' :
          case 'e' :         
          cout<<"You Entered an Vowel\n";
          break;
          }
          {
          case 'I' :
          case 'i' :
          cout<<"You Entered a Vowel\n";
          break;
          }
          {
          case 'O' :
          case 'o' :
          cout<<"You Entered a Vowel\n";
          break;
          }    
          {
          case 'U' :
          case 'u' :
          cout<<"You Entered a Vowel\n";
          break;
          }
          {
          default: //if any of the cases didn't match then default shows the message its not a vowel.
          cout<<"Not Vowel\n";
          }
    }    
    
    getch();
}
