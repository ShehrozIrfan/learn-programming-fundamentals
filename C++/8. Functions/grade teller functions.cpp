/*
Write  a program that inputs marks in main function and passes these marks to a function.THe function finds grade of student on the basis of the 
following criteria:
Grade A          80 or above marks
Grade B          60 to 79 marks
Grade C          40 to 59 marks
Grade F          below 40 marks
The function returns grade back to main function where it is displayed on the screen.
*/

#include"iostream"
using namespace std;

char grade(int marks);

int main()
{
	int marks;
	
	
	cout<<"Please enter your marks\n";
	cin>>marks;
	
	cout<<"Your grade is "<<grade(marks);
	return 0;
	
	
}

char grade(int marks)
{
	if(marks>=80)
	return 'A';
	else if(marks>=60 && marks<=79)
	return 'B';
	else if(marks>=40 && marks<=59)
	return 'C';
    else
	return 'F';
}

