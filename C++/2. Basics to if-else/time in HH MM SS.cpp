// Assignment#1 , Programming Fundamentals .
// Q#3(a) write aprogram that inputs time in seconds and converts it into HH-MM-SS formate.(Hint 3600s=1 hour)

#include<iostream>


#include<conio.h>
/* This header file means "console input output". 
we use this header file because we use getch(); in this program and to use getch(); we must include its header file.*/

using namespace std;

int main()

{ 
    
    int sec,hour,min,seconds; // 'seconds' variable is used to store the input entered by the user.
    
    cout<<"Enter time in Seconds\n";
    cin>>seconds;
    
    
    hour=seconds/3600;
    /* Let user enters 5300 seconds. then to calculate hour 5300/3600 and we get 1 because decimal part is truncated in c++. It stores 1 in 
    hour which means that hour=1. we divided seconds by 3600 because 1hour=3600s */
    
    
    seconds=seconds%3600;
    /* Now 5300%3600 and we get remainder 1700. So now seconds=1700. Actually we are using remainder theorem. */
    
    
    min=seconds/60;
    /* Now 1700/60 and we get 28 and because decimal part is truncated.So min=28. we divided min by 60 because in 1hour there is 60mins. */
    
    
    sec=seconds%60;
    /* now 1700%60 and we get 20 in remainder so sec=20. */
    cout<<"Time in format HH:MM:SS="<<hour<<":"<<min<<":"<<sec<<endl;
    
    getch();
    //getch(); is used because it stops the programs after execution until user enter any character.
    
    
}
