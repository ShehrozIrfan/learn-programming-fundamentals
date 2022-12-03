//Program that uses prototype of function.

#include<iostream>
using namespace std;

void makeCoffee(); /* Prototype of function.We have to write it earlier here when functions declaration and definition is after int main().Otherwise compiler shows error.*/




int main() 
{
	makeCoffee();
	
	return 0;
}





void makeCoffee() /*Function declaration*/
{                                  


 /* A set of statements that explains what a function does is called function definition.it can be written before main() , after main()
and in a separate file.Function declaration is compulsary if function definition is written after main() function.*/




	cout<<"Take water.\n";
	cout<<"Boil water.\n";
	cout<<"Add coffee in water after boiling.\n";
	cout<<"Shake Well.\n";
	cout<<"Enjoy Coffee!! \n";
	
	
	
}