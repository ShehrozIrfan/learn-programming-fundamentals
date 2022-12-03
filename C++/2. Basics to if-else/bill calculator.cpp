/*
Write a program that calculates the electricity bill.The rates of electricity per unit are as follow:
If the units consumed are <=300 then the cost is RS.2 per unit.
If the units consumed are >300 and <=500 then the cost is RS.5 per unit.
If the units consumed exceeds 500 then the cost per unit is RS.7 per unit.
A line rent of Rs.150 is also added to the total bill and a surcharge of 5% extra if the bill
exceeds Rs.2000.Calculate the total bill with all the conditions given above.        
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
    int units;
    float bill;
    
    cout<<"Please Enter the units consumed\n";
    cin>>units;
/*
it is given that if units are less than or equal to 300 then cost is Rs.2 per unit.so in this case we have to multiply the units with 2
to get the total bill.
*/    
    if(units<=300)
    {
    bill=units*2;
    }
    if(units>300 && units<=500)
    {
    bill=units*5;
    }
    if(units>500)
    {
    bill=units*7;
    }
    if(units>2000)
    {
    bill=units*7;
    /*
    It is given that if units are greater than 500 then cost is Rs.7 per unit.
    here the bill is greater than 2000 so the condition is also applicable there.*/
    
    
    bill=bill+150+(5/100); 
    /*
     It is given in the question if bill is greater than 2000 then line rent of Rs.150 and a surcharge of 5% extra is also
     added. so we added it in total bill.  */
    }
    cout<<"Total Bill="<<bill;
    
    getch();
}
