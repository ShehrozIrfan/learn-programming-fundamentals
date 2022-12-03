Introducing Variables:

Variables are identifiers that you create to hold values or references to objects in your code. 
A variable is essentially a named memory location.

When you create a variable in C++, you must give it a data type. You can assign a value to the variable at the 
time you create it or later in your 
program code. This is known as initializing the variable. 
Even though you can initialize a variable separate from its creation, you must assign the 
data type when you define the variable. C++ will not allow you to use an uninitialized 
variable to help prevent unwanted data from being used in your 
application. The following code sample demonstrates declaring a variable and assigning 
a value to it.  C++ supports two methods of initializing a variable.

int myVar = 0;
int yourVar{1};

C++ has some restrictions around identifiers that you need to be aware of.

First off, identifiers are case-sensitive because C++ is a case-sensitive language. 
That means that identifiers such as myVar, _myVar, and myvar, are considered
 different identifiers.

Identifiers can only contain letters (in any case), digits, and the underscore character.
You can only start an identifier with a letter or an underscore character. 
You cannot start the identifier with a digit. myVar and _myVar are legal but 2Vars is not.

C++ has a set of reserved keywords that the language uses. You cannot use these keywords as an identifier in your code. 
You may choose to take advantage of the 
case-sensitivity of C++ and use Long as an identifier to distinguish it from the reserved keyword long, 
but that is not a recommended approach.