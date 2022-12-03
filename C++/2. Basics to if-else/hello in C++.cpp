#include<iostream>
 /*header files contain definitions of functions and variables, which is imported or used into any c/c++ program by 
 using the pre processor #include statement. Header file have an extension ".h" which contains c/c++
  function declaration and macro definition.*/
  /*iostream provides basic input and output services for c++ programs.
  iostream uses objects cin,cout,cerr,and clog for sending data to and from the standard streams input,output,error(unbuffered),
  and log(buffered) respectively.*/ 
using namespace std;
/* std is the standard namespace.
cin,cout and a lot of things are defined in it.
this means that one way to call them is by using std::cout and std::cin.
*/
int main()
/* main() is a function which is called by the '_start' function. 
In C, default return value is 'int' so when we write main() it is equivalent to 'int main()' where main is a function which takes nothing
as an argument and returns integer.
This is because the main function in C++ returns a int value at exit. 
*/
{
    cout<<"hello"<<endl;
    // cout is used to get output on screen.
    // endl is used to end the line. 
    system("pause");
    // system pause is used to pause the system so that we can see output.
}
