/*A C++ program has a very specific structure in terms of how the code is written and some key elements that you use in your C++ programs. 
The simplest of C++ programs is shown here.*/

 #include <iostream>
 
 int main()
 {
   std::cout << "Hello World!";
   return 0;
 }

/*In this simple program we notice some elements listed. The line numbers are used for reference only and are not part of the program code.

Line 1: this is known as a pre-processor directive. it instructs the compiler to locate the file that contains code for a library known as iostream.
This library contains code that allows for input and output to streams, such as the console window.

Line 3: Every C++ program must have a method known as main(). It is referred to as the entry point for the application when you start execution of 
the program on your computer. The int portion is the return type of the method. The empty parentheses () after the method name indicate that this a
method and that it takes no arguments, in other words, there are no parameters for passing in values.

Line 4: Method bodies in C++ start with an open curly brace. Line 5: This code uses a method known as cout (pronounced "see out") to send the text
 Hello World! to the console for output and display. The std:: prefix to this command is a way of indicating that cout is part of a namespace known 
 as std. The :: is is used to indicate that cout is part of the std namespace.

Also notice that the line ends with a semi-colon. C++ statements are terminated with semi-colons.

Line 6: The return statement is used to end a function or method when a value is expected to be sent back to a caller. In this case, the caller is the
 operating system and the value returned is an integer value of 0. If the program reaches this statement, returning a value of 0 is an indication to the
  operating system that the code executed successfully. In the past, programmers would return 0 to indicate successful execution and non-zero values 
  to indicate that an error had occurred in the program somewhere.

Line 7: This line closes out the body of the function main() and is necessary so the compiler knows where the function or method ends.*/
