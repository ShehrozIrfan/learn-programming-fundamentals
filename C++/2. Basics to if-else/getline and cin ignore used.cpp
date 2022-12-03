//program to input name,age & address from the user and then display.

#include<iostream>

using namespace std;

int main()

{
    //initialization
    
    int age; //age is in integers.
    
    char name[25],address[100]; 
    /*We write name[25] because it limits the characters of the name to 25. 
    And user cannot enter more than 25 characters.if user enters more
    than 25 characters it shows invalid name.
    
    we write address[100] because it limits the characters of address to 100.
     And user cannot enter more than 100 characters.Otherwise it shows
    invalid address.
    */
    
    
    cout<<"Enter your age\n";
    cin>>age;
    
    
    cin.ignore(100,'\n');
    
    /*
    1. No arguments: A single character is taken from the input buffer and discarded: 
                           cin.ignore(); //discard 1 character 
    2. One argument: The number of characters specified are taken from the input buffer and discarded: 
                           cin.ignore(33); //discard 33 characters 
    3. Two arguments: discard the number of characters specified, or discard characters up to and including the specified delimiter (whichever comes first): 
                          cin.ignore(26, '\n'); //ignore 26 characters or to a newline, whichever comes first
    */

    cout<<"Enter your name\n";
    cin.getline(name,25);
    
    /*
    if, for example, you wish to obtain a whole sentence from the user that includes spaces.
     In that case, you would be better served by using the cin member functions getline.
     In case cin.getline(name,25); it takes whole name from the user that contains spaces upto 25 characters.
    */
    
    cout<<"Enter your address\n";
    cin.getline(address,100);
    
    cout<<"Your age:\n"<< age<<"\n"<<"Your name\n"<<name<<"\n"<<"Your Address\n"<<address<<"\n";
    system("pause");
}
