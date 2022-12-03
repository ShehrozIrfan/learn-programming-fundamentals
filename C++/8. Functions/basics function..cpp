//Program that displays a message "Programming makes life interesting" on screen using function.

#include<iostream>   /*it is always on the top.*/
using namespace std;



void showOnScreen()  /*
                           Function.
                       --> void is the return type.void means it didn't return any value.
					   --> showOnScreen is the function name.
					   --> () inside this we write parameters like (int a,int b)
					   */
{
	cout<<"Programming makes life interesting.\n\n";
}



int main() /* This is also a function */
{
	
	
	showOnScreen(); //Function Call.
	
	showOnScreen(); //Function Call.
	
	showOnScreen(); //Function Call.
	
	showOnScreen(); //Function Call.
	                /*
					Here we call the function that prints on screen "programming makes life interesting".And we call it four times so it prints on screen four times.
					*/ 
	
	return 0;
}