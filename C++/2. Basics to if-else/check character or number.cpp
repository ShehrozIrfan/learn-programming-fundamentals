//This is a program to check whether user entered an Alphabet or number.
#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Please enter any Alphabet or Number";
    cin>>a;
    if(a>=65 && a<=122)
    /*
    This condition means that the value of Alphabets both upper and lowercase starts from 65 and ends on 122.
    So if the user entered lowercase 'z' the program checks the condition and the condition will be true because the value of
    lowercase 'z' in ASCII is 122.So it gives message you entered an alphabet. 
    */
    {
    cout<<"You entered a Alphabet";
    }
    else
    //This condition apply when upper condition is false. Then it gives message you entered a digit.
    {
    cout<<"You entered a digit";
    }
    system("pause");
}
