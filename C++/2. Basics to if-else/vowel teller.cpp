//Program that inputs a character and tells whether it is vowel or not.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    
    cout<<"Enter a Character\n";
    cin>>ch;
    
    if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
    
    /*
    As we know that vowels are (A,E,I,O,U || a,e,i,o,u). So apply the condition that if the typed character is equal to uppercase 'A' or lowercae
    'a' or similarly uppercase 'E' or lowercase 'e' or so on then the character is vowel else it is not a vowel.
    */
  
    {
    cout<<"You entered a Vowel="<<ch;
    }
    else
    {
    cout<<"You didn't entered a vowel";
    }
    
    getch();
    
}
