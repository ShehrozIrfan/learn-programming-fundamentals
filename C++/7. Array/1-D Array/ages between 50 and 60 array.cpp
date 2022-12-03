//Program that inputs the age of different persons and counts the number of persons in the age group 50 & 60. 

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int age[200],no_of_persons,i;
    int count=0;
    
    cout<<"Enter the number of persons required\n";
    cin>>no_of_persons;
    
    for(i=0;i<no_of_persons;i++)
    {
     cout<<"Enter ages\n";
     cin>>age[i];
     
     if(age[i]>50 && age[i]<60)
     {
      count+=1;            
     }                           
    }
    
    cout<<"Persons between 50 and 60 are\n"<<count;
    
    getch();
    
}
