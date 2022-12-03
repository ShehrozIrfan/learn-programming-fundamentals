//Program that inputs current day & month from user.It then calculates and display the total number of days in the current year till the entered date.


#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
    int day,month,total;
    int days_Per_Month[12]={31,28,31,30,31,30,31,31,30,31,30,31};//Number days in a month.
    
    cout<<"Enter the Day Number\n";
    cin>>day;
    
    cout<<"Enter the month number\n";
    cin>>month;
    
    total=day;
    
    for(int i=0;i<month-1;i++)
    {
            
     total+=days_Per_Month[i];
            
    }
    
    cout<<"The number of days in this year till date="<<total<<"\n";
    
    getch();
    
}
