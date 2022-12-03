/*  Write a program that inputs salary and grade. It adds 50% bonus if grade is greater than 15.
    It adds 25% bonus if grade is 15 or less and then dispaly the total salary. */
    
    #include<iostream>
    #include<conio.h>
    
    using namespace std;
    
    int main()
    
    {
        int salary,grade,bonus;
        
        cout<<"Please Enter your Salary\n";
        cin>>salary;
        
        cout<<"Please Enter your Grade\n";
        cin>>grade;
        
        if(grade>15)
        {
        bonus=salary*50/100; // Because 50% = 50/100.
        }
        else
        {
        bonus=salary*25/100; //Because 25%= 25/100.
        }
        
        salary=salary+bonus;
        
        cout<<"Your Total Salary with Bonus="<<salary;
        getch();
        
    }
