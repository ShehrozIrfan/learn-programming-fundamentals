//Program to compare integers using if statements,relational operators and equality operators.

#include<iostream>
using namespace std;
int main()
{
    int number1,number2;
    cout<<"Enter two integers to compare";
    cin>>number1>>number2;
    if(number1==number2)
    {
    cout<<number1<<"=="<<number2<<endl;
    }
    if(number1!=number2)
    {
    cout<<number1<<"!="<<number2<<endl;
    }
    if(number1<number2)
    {
    cout<<number1<<"<"<<number2<<endl;
    }
    if(number1>number2)
    {
    cout<<number1<<">"<<number2<<endl;
    }
    if(number1<=number2)
    {
    cout<<number1<<"<="<<number2<<endl;
    }
    if(number1>=number2)
    {
    cout<<number1<<">="<<number2<<endl;
    }
    system("pause");
}
