//Program that uses a while loop to enter number from the user and then display it.The loop is terminated when the user enters -1.


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    n=1;
    while(n!=-1)//If this condition is true it goes inside the loop input a number and print it and do so until users enters -1.
    {
                
    cout<<"Enter a number\n";
    cin>>n;        
                
    cout<<"You Entered\n"<<n<<endl;            
    }
    
    cout<<"End of Program";
    
    getch();
    
    
    
    
}
